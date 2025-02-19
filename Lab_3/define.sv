`include "define.sv"
module brent_kung_adder_nbit (
  input  logic [`ADDER_SIZE - 1 : 0] in_op1,
  input  logic [`ADDER_SIZE - 1 : 0] in_op2,
  output logic [`ADDER_SIZE - 1 : 0] out_res,
  
  input  logic cin,
  output logic cout
);

  logic [`ADDER_SIZE / 16 : 0] carry;
  assign carry[0] = cin;
  genvar i;

  generate
    for (i = 0; i < (`ADDER_SIZE / 16); i = i + 1) begin 
      brent_kung_adder_16bit nbit_adder(
        .in_op1  ( in_op1[16 * (i + 1) - 1 : 16 * i]  ),
        .in_op2  ( in_op2[16 * (i + 1) - 1 : 16 * i]  ),
        .out_res ( out_res[16 * (i + 1) - 1 : 16 * i] ),
        .cin     ( carry[i]                           ),
        .cout    ( carry[i + 1]                       )
      );
    end
  endgenerate

  assign cout = carry[`ADDER_SIZE / 16 - 1];

endmodule