`timescale 1ns / 1ps
module op_n_to_2_nbit_onestage #(
  parameter OP_WIDTH  = 64,
  parameter IN_OP_NUM = 8,
  parameter int OUT_OP_NUM = (IN_OP_NUM % 3) + 2 * (IN_OP_NUM / 3)
) (
  input  logic [OP_WIDTH - 1 : 0] in_op [IN_OP_NUM - 1 : 0],

  output logic [OP_WIDTH - 1 : 0] out_op [OUT_OP_NUM - 1 : 0]
);

  // For each stage, we will have IN_OP_NUM % 3 operands left and assign
  // to next stage directly. We will have $int(IN_OP_NUM / 3) operands
  // use the 3to2 unit. For example, if IN_OP_NUM = 32, because 32 % 3
  // = 2, then out_op[1 : 0] will be assigned by in_op[1 : 0] (after 
  // sign extend). The out_op[OUT_OP_NUM - 1 : 2] will use 3to2 unit.
  genvar i;
  generate
    for (i = IN_OP_NUM % 3; i < IN_OP_NUM; i = i + 3) begin
      op_3_to_2_nbit #(.OP_WIDTH (OP_WIDTH)) u_op_3_to_2_nbit (
        .in_op1  ( in_op[i]     ),
        .in_op2  ( in_op[i + 1] ),
        .in_op3  ( in_op[i + 2] ),

        .out_op1 (out_op[IN_OP_NUM % 3 + 2 * (i / 3)]),
        .out_op2 (out_op[IN_OP_NUM % 3 + 2 * (i / 3) + 1])
      );
    end
  endgenerate

  generate
    for (i = 0; i < IN_OP_NUM % 3; i = i + 1) begin
      assign out_op[i] = in_op[i]; // Sign extend
    end
  endgenerate

endmodule