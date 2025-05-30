module exmem (
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

  input           in_sm_tvalid
);

  wire valid;
  wire we;
  wire en;

  assign valid = wbs_cyc_i && wbs_stb_i && (wbs_adr_i[31 : 24] == 8'h38);
  assign we    = wbs_sel_i & {4{valid && wbs_we_i}};
  assign en    = 1'b1;
  
  bram user_mem (
    .clk ( wb_clk_i            ),
    .WE0 ( we                  ),
    .EN0 ( en                  ),
    .Di0 ( wbs_dat_i           ),
    .Do0 ( wbs_dat_o           ),
    .A0  ( wbs_adr_i << 2      )
  );

  assign wbs_ack_o = (valid && wbs_we_i) || in_sm_tvalid;

endmodule