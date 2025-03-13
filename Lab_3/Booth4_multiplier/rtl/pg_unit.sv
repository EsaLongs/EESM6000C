//////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 20.02.2025 19:44:04
// Design Name: 
// Module Name: gp_unit
// Project Name: Booth multiplier design
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: Submodule to help implement brent kung adder (generate and propagate)
// Dependencies:
// 
// Revision 0.01
//
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module gp_unit (
  input  logic in_g1, in_g2,
  input  logic in_p1, in_p2,
  output logic out_g,
  output logic out_p
);

  assign out_g = in_g2 || (in_p2 && in_g1);
  assign out_p = in_p2 && in_p1;

endmodule