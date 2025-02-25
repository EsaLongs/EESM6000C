module op_3_to_2 #(
  parameter OP_WIDTH = 32
) (
  input  logic [OP_WIDTH - 1 : 0] in_op1,
  input  logic [OP_WIDTH - 1 : 0] in_op2,
  input  logic [OP_WIDTH - 1 : 0] in_op3,

  output logic [OP_WIDTH - 1  + 1 : 0] out_op1,
  output logic [OP_WIDTH - 1  + 1 : 0] out_op2
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
  assign out_op1 = {{1'b0}, s};
  assign out_op2 = {cout, {1'b0}};

endmodule