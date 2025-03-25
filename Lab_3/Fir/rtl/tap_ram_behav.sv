///////////////////////////////////////////////////////////////////////////////////////
// **** According to the BRAM behaviour in vivado, it doesn't use "4" but "1" as addr 
//      interval. For a 1024-depth BRAM, it has a addr width of 10. Here we will use
//      this kind of BRAM as reference.

`timescale 1ns / 1ps

module tap_ram_behav #(
  parameter pADDR_WIDTH = 10,
  parameter pDATA_WIDTH = 32
) (
  input  logic                           clk,
  input  logic                           in_EN,
  input  logic [pADDR_WIDTH     - 1 : 0] in_A,
  input  logic [pDATA_WIDTH / 8 - 1 : 0] in_WE,
  input  logic [pDATA_WIDTH     - 1 : 0] in_Di,
  output logic [pDATA_WIDTH     - 1 : 0] out_Do
);

  logic [pDATA_WIDTH - 1 : 0] ram [0 : 2 ** pADDR_WIDTH - 1];
  logic [pADDR_WIDTH - 1 : 0] r_A;

  always_ff @(posedge clk) begin
    if (in_EN) r_A <= in_A;
  end

  assign out_Do = {pDATA_WIDTH{in_EN}} & ram[r_A];

  always_ff @( posedge clk ) begin
    if(in_EN) begin
      if (in_WE[0]) ram[in_A][1 * 8 - 1 : 0] <= in_Di[1 * 8 - 1 : 0];
      if (in_WE[1]) ram[in_A][2 * 8 - 1 : 1 * 8 - 1] <= in_Di[2 * 8 - 1 : 1 * 8 - 1];
      if (in_WE[2]) ram[in_A][3 * 8 - 1 : 2 * 8 - 1] <= in_Di[3 * 8 - 1 : 2 * 8 - 1];
      if (in_WE[3]) ram[in_A][4 * 8 - 1 : 3 * 8 - 1] <= in_Di[4 * 8 - 1 : 3 * 8 - 1];
    end       
  end
endmodule