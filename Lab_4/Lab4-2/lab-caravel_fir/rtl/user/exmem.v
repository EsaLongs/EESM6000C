module exmem (
  input         wb_clk_i,
  input         wb_rst_i,
  input         wbs_stb_i,
  input         wbs_cyc_i,
  input         wbs_we_i,
  input  [3:0]  wbs_sel_i,
  input  [31:0] wbs_dat_i,
  input  [31:0] wbs_adr_i,
  input         sm_tvalid,
  output        wbs_ack_o,
  output [31:0] wbs_dat_o
);
  reg [3:0] cnt; // This cnt is used for C code

  wire valid;
  wire we;
  wire en;
  
  always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) cnt <= 0;
    else begin
      if      (cnt == 4'd10)          cnt <= 0;
      else if (wbs_cyc_i & !wbs_we_i) cnt <= cnt + 1;
    end
  end

  assign valid = wbs_cyc_i & wbs_stb_i;
  assign we    = valid & wbs_we_i;
  assign en    = 1'b1;
  
  bram user_mem (
    .clk ( wb_clk_i            ),
    .WE0 ( wbs_sel_i & {4{we}} ),
    .EN0 ( en                  ),
    .Di0 ( wbs_dat_i           ),
    .Do0 ( wbs_dat_o           ),
    .A0  ( wbs_adr_i << 2      )
  );

  assign wbs_ack_o = ((valid & wbs_we_i) || cnt == 4'd10);

endmodule