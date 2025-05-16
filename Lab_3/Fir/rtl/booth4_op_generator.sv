
`timescale 1ns / 1ps

module booth4_op_generator #(
  parameter MUL_SIZE = 32,
  parameter MUL_SIZE_EX = (MUL_SIZE % 2 == 0) ? MUL_SIZE + 2 : MUL_SIZE + 3,
  parameter OP_NUM = MUL_SIZE / 2 + 1
) (
  input  logic [MUL_SIZE - 1 : 0] in_op1,   // Multiplicand
  input  logic [MUL_SIZE - 1 : 0] in_op2,   // Multiplier

  input  logic in_op1_signed,   // Whether the operand 1 is signed, if unsigned, should be 0
  input  logic in_op2_signed,   // Whether the operand 2 is signed, if unsigned, should be 0

  // The another 1 is for dealing with negative booth operation + 1 issue
  output logic [MUL_SIZE_EX - 1 : 0] out_op [0 : OP_NUM + 1 - 1]
);

  logic multiplicand_sign;
  logic multiplier_sign;

  assign multiplicand_sign = in_op1_signed ? in_op1[MUL_SIZE - 1] : 1'b0;
  assign multiplier_sign   = in_op2_signed ? in_op2[MUL_SIZE - 1] : 1'b0;

  logic [MUL_SIZE_EX + 1 - 1 : 0] multiplier_booth; 
  assign multiplier_booth = {{(MUL_SIZE_EX - MUL_SIZE){multiplier_sign}}, in_op2, 1'b0};

  // Base multipicand to help writing generate code
  logic [MUL_SIZE_EX - 1 : 0] multipicand_base;
  assign multipicand_base = {{(MUL_SIZE_EX - MUL_SIZE){multiplicand_sign}}, in_op1};

  /*
  +===========+===========+=========================+
  | booth_code| Operation | Description             |
  +===========+===========+=========================+
  | 3'b000    | 0         | No operation            |
  | 3'b001    | +1        | Add multiplier          |
  | 3'b010    | +1        | Add multiplier          |
  | 3'b011    | +2        | Add 2x multiplier       |
  | 3'b100    | -2        | Subtract 2x multiplier  |
  | 3'b101    | -1        | Subtract multiplier     |
  | 3'b110    | -1        | Subtract multiplier     |
  | 3'b111    | -0        | No operation            |
  +===========+===========+=========================+
  */
  // Generate operands.
  genvar i;
  generate
    for (i = 0; i < OP_NUM; i = i + 1) begin
      always_comb begin : OUT_OP
        case (multiplier_booth[2 * i + 2 : 2 * i])
          3'b000 : out_op[i] = {MUL_SIZE_EX{1'b0}};
          3'b001 : out_op[i] = multipicand_base;
          3'b010 : out_op[i] = multipicand_base;
          3'b011 : out_op[i] = multipicand_base << 1;
          3'b100 : out_op[i] = ~(multipicand_base) << 1;
          3'b101 : out_op[i] = ~(multipicand_base);
          3'b110 : out_op[i] = ~(multipicand_base);
          3'b111 : out_op[i] = {MUL_SIZE_EX{1'b0}};
          default: out_op[i] = {MUL_SIZE_EX{1'b0}};
        endcase
      end
    end
  endgenerate

  // In order to deal with the negative operation issue (mainly for + 1), we don't
  // want to use lots of wide width adder here because of gate counts.

  logic [MUL_SIZE_EX - 1 : 0] op_neg;

  generate
    for (i = 0; i < MUL_SIZE_EX / 2; i = i + 1) begin
      always_comb begin : OP_NEG
        case (multiplier_booth[2 * i + 2 : 2 * i])
          3'b100 : {op_neg[i * 2 + 1], op_neg[i * 2]} = 2'b10;
          3'b101 : {op_neg[i * 2 + 1], op_neg[i * 2]} = 2'b01;
          3'b110 : {op_neg[i * 2 + 1], op_neg[i * 2]} = 2'b01;
          default: {op_neg[i * 2 + 1], op_neg[i * 2]} = 2'b00;
        endcase 
      end
    end
  endgenerate

  assign out_op[OP_NUM] = op_neg;

endmodule