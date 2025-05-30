module wb2axi (
    input           wb_clk_i,
    input           wb_rst_i,
    input           wbs_stb_i,
    input           wbs_cyc_i,
    input           wbs_we_i,
    input  [3  : 0] wbs_sel_i,
    input  [31 : 0] wbs_dat_i,
    input  [31 : 0] wbs_adr_i,
    output          wbs_ack_o,
    output [31 : 0] wbs_dat_o,

    input           awready,
    input           wready,
    output          awvalid,
    output [31 : 0] awaddr,
    output          wvalid,
    output [31 : 0] wdata,

    input           arready,
    input           rvalid,
    input  [31 : 0] rdata,
    output          rready,
    output          arvalid,
    output [31 : 0] araddr,

    input           ss_tready,
    output          ss_tvalid,
    output [31 : 0] ss_tdata,
    output          ss_tlast,

    input           sm_tvalid,
    input           sm_tlast,
    input  [31 : 0] sm_tdata,
    output          sm_tready
);

  wire valid;
  wire axil_ack, axis_ack, axis_s_ack, axis_m_ack;
  wire axilite_sel, axis_stream_s_sel, axis_stream_m_sel;
  wire axilite_conf_ctrl_sel, axilite_conf_dl_sel, axilite_conf_tn_sel, axilite_ram_sel;

//------------------------------------------------ Select Signals --------------------------------------------------//
  assign axilite_sel = axilite_conf_ctrl_sel 
                    || axilite_conf_dl_sel
                    || axilite_conf_tn_sel
                    || axilite_ram_sel;

  assign axis_stream_s_sel     = (wbs_adr_i == 32'h3000_0040); // Data ram
  assign axis_stream_m_sel     = (wbs_adr_i == 32'h3000_0044); // Output
  assign axilite_conf_ctrl_sel = (wbs_adr_i == 32'h3000_0000);
  assign axilite_conf_dl_sel   = (wbs_adr_i == 32'h3000_0010);
  assign axilite_conf_tn_sel   = (wbs_adr_i == 32'h3000_0020);
  assign axilite_ram_sel       = (wbs_adr_i >= 32'h3000_0080) && (wbs_adr_i <= 32'h3000_00A8);

//------------------------------------------------ Valid and ack ---------------------------------------------------//
  reg          arvalid_en;
  reg [31 : 0] ss_last_cnt;

  assign valid = wbs_cyc_i && wbs_stb_i;

  assign axis_s_ack = axis_stream_s_sel && ss_tready;
  assign axis_m_ack = axis_stream_m_sel && sm_tvalid;
  assign axil_ack   = wready     || rvalid;
  assign axis_ack   = axis_m_ack || axis_s_ack;
  

//------------------------------------------------ AXILITE ---------------------------------------------------------//

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Write
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // ** AXI to WB
  assign wbs_ack_o = wbs_cyc_i & (axil_ack | axis_ack);
  assign wbs_dat_o = { 32{axis_stream_m_sel} } & sm_tdata | { 32{rvalid} } & rdata;

  // ** WB to AXI-Lite for write
  assign awvalid = valid & wbs_we_i & axilite_sel;
  assign wvalid  = valid & wbs_we_i & axilite_sel;
  assign wdata   = wbs_dat_i;

 // ** Addr map for write
  assign awaddr[11 : 0]  = axilite_ram_sel ? {wbs_adr_i[11 : 0] - 8'b1000_0000} : wbs_adr_i[11 : 0];
  assign awaddr[27 : 12] = {16{1'b0}};
  assign awaddr[31 : 28] = axilite_conf_ctrl_sel ? 4'b0000 : 
                           axilite_conf_tn_sel   ? 4'b0001 : 
                           axilite_conf_dl_sel   ? 4'b0010 : 
                           axilite_ram_sel       ? 4'b0011 : 
                           4'b0000;

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Read
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // ** WB to AXI-Lite for read. Mainly designed for a state machine
  always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) arvalid_en <= 1;
    else begin
      if      (arvalid && arready) arvalid_en <= 0; 
      else if (rvalid  && rready ) arvalid_en <= 1;
      else                         arvalid_en <= arvalid_en;
    end
  end

  assign rready  = wbs_cyc_i && !wbs_we_i && axilite_sel;
  assign arvalid = valid     && !wbs_we_i && axilite_sel && arvalid_en;

  // ** Addr map for read
  assign araddr[11 : 0] = axilite_ram_sel ? {wbs_adr_i[11 : 0] - 8'b1000_0000} : wbs_adr_i[11 : 0];
  assign araddr[27 : 12] = {16{1'b0}};
  assign araddr[31 : 28] = axilite_conf_ctrl_sel ? 4'b0000 : 
                           axilite_conf_tn_sel   ? 4'b0001 : 
                           axilite_conf_dl_sel   ? 4'b0010 : 
                           axilite_ram_sel       ? 4'b0011 : 
                           4'b0000;
 
//------------------------------------------------ Stream ----------------------------------------------------------//
  // ** WB to AXIS for write
  assign ss_tvalid = valid && wbs_we_i && axis_stream_s_sel;
  assign ss_tdata  = wbs_dat_i;
  assign ss_tlast  = ss_tvalid && ( ss_last_cnt == 1);      // Used for calculating ss_tlast valid time

  wire dlen_initial;
  assign dlen_initial = (wbs_adr_i == 32'h3000_0010) && valid && wbs_we_i;

  // ** Remain data_length
  always @(posedge wb_clk_i) begin
    if      (dlen_initial) ss_last_cnt <= wbs_dat_i;
    else if (ss_tvalid   ) ss_last_cnt <= ss_last_cnt - 1;
    else                   ss_last_cnt <= ss_last_cnt;
  end

  assign sm_tready = wbs_cyc_i && !wbs_we_i && axis_stream_m_sel;

endmodule