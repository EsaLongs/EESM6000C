`timescale 1ns / 1ps

module data_ram_behav #(
  parameter pADDR_WIDTH = 10,
  parameter pDATA_WIDTH = 32
) (
  input  logic                           clk,
  input  logic                           in_CE,
  input  logic [pADDR_WIDTH     - 1 : 0] in_A,
  input  logic [pDATA_WIDTH     - 1 : 0] in_Di,
  output logic [pDATA_WIDTH     - 1 : 0] out_Do
);

  logic [pDATA_WIDTH - 1 : 0] ram [0 : 2 ** pADDR_WIDTH - 1];
  assign out_Do = ram[in_A];

  always_ff @( posedge clk ) begin
    if (in_CE) begin
      for (int i = 0; i < 2 ** pADDR_WIDTH - 1; i = i + 1) begin
        ram[i + 1] = ram[i];
        ram[0] = in_Di;
      end
    end
  end
  
endmodule