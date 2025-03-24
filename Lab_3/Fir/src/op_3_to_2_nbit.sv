//////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 08/03/2025 10:38:55
// Design Name: 
// Module Name: op_3_to_2_nbit
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: Submodule to help implement wallace tree.
// Dependencies: `onebit_adder.sv`
// 
// Revision 0.01
//
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module op_3_to_2_nbit #(
  parameter OP_WIDTH = 64
) (
  input  logic [OP_WIDTH - 1 : 0] in_op1,
  input  logic [OP_WIDTH - 1 : 0] in_op2,
  input  logic [OP_WIDTH - 1 : 0] in_op3,

  output logic [OP_WIDTH - 1 : 0] out_op1,
  output logic [OP_WIDTH - 1 : 0] out_op2
);

  logic [OP_WIDTH - 1 : 0] cout;
  logic [OP_WIDTH - 1 : 0] s;

  genvar i;
  generate
    for (i = 0; i < OP_WIDTH; i = i + 1) begin
      onebit_adder u_onebit_adder (
        .A    ( in_op1[i] ),
        .B    ( in_op2[i] ),
        .C    ( in_op3[i] ),
        .COUT ( cout[i]   ),
        .S    ( s[i]      )
      );
    end
  endgenerate
  assign out_op1 = s;
  assign out_op2 = cout << 1;

endmodule