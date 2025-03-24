`timescale 1ns / 1ps

module data_ram_behav #(
  parameter pADDR_WIDTH = 10,
  parameter pDATA_WIDTH = 32
) (
  input  logic                       clk,
  input  logic                       in_CE,
  input  logic [pADDR_WIDTH - 1 : 0] in_A,
  input  logic [pDATA_WIDTH - 1 : 0] in_Di,
  output logic [pDATA_WIDTH - 1 : 0] out_Do
);

  logic [pDATA_WIDTH - 1 : 0] ram [0 : 2 ** pADDR_WIDTH - 1];
  
  always @(posedge clk) begin
    if (in_CE) begin
      for (int i = 0; i < 2 ** pADDR_WIDTH; i = i + 1) begin
        if (i == 0) ram[i] <= in_Di;
        else ram[i] <= ram[i - 1];
      end
    end
  end

  always @(posedge clk) begin
    out_Do <= ram[in_A];
  end

endmodule