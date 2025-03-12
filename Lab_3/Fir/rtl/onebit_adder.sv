//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: TANG Yue
// 
// Create Date: 08/03/2025 10:38:55 AM
// Design Name: 
// Module Name: onebit_adder
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: Submodule to help implement wallace tree.
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module onebit_adder (
  input  logic A, B, C,
  output logic COUT, S
);

  assign S = A ^^ B ^^ C;
  assign COUT = (A && B) || (B && C) || (C && A);

endmodule