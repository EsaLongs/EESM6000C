//////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 08/03/2025 10:38:55
// Design Name: 
// Module Name: onebit_adder
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: Submodule to help implement wallace tree.
// Dependencies:
// 
// Revision 0.01
//
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module onebit_adder (
  input  logic A, B, C,
  output logic COUT, S
);

  assign S = A ^^ B ^^ C;
  assign COUT = (A && B) || (B && C) || (C && A);

endmodule