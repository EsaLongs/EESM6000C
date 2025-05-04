
`timescale 1ns / 1ps

module booth4_op_generator #(
  parameter MUL_SIZE = 32,
  parameter ADDER_SIZE = 2 * MUL_SIZE,
  parameter OP_NUM = MUL_SIZE / 2 + 1
) (
  input  logic [MUL_SIZE - 1 : 0] in_op1,   // Multiplicand
  input  logic [MUL_SIZE - 1 : 0] in_op2,   // Multiplier

  input  logic in_op1_signed,   // Whether the operand 1 is signed, if unsigned, should be 0
  input  logic in_op2_signed,   // Whether the operand 2 is signed, if unsigned, should be 0

  // The another 2 is for dealing with negative booth operation + 1 issue
  output logic [ADDER_SIZE - 1 : 0] out_op [0 : OP_NUM + 2 - 1]
);

  logic multiplicand_sign;
  logic multiplier_sign;

  assign multiplicand_sign = in_op1_signed ? in_op1[MUL_SIZE - 1] : 1'b0;
  assign multiplier_sign   = in_op2_signed ? in_op2[MUL_SIZE - 1] : 1'b0;

  logic [MUL_SIZE + 1 + 2 - 1 : 0] multiplier_booth; 
  assign multiplier_booth = {{2{multiplier_sign}}, in_op2, 1'b0};

  // Base multipicand to help writing generate code
  logic [ADDER_SIZE - 1 : 0] multipicand_base;
  assign multipicand_base = {{(ADDER_SIZE - MUL_SIZE){multiplicand_sign}}, in_op1};

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
      always @(*) begin : OUT_OP
        case (multiplier_booth[2 * i + 2 : 2 * i])
          3'b000 : out_op[i] = {ADDER_SIZE{1'b0}};
          3'b001 : out_op[i] = multipicand_base << (2 * i);
          3'b010 : out_op[i] = multipicand_base << (2 * i);
          3'b011 : out_op[i] = multipicand_base << (2 * i + 1);
          3'b100 : out_op[i] = ~(multipicand_base << (2 * i + 1));
          3'b101 : out_op[i] = ~(multipicand_base << (2 * i));
          3'b110 : out_op[i] = ~(multipicand_base << (2 * i));
          3'b111 : out_op[i] = {ADDER_SIZE{1'b0}};
          default: out_op[i] = {ADDER_SIZE{1'b0}};
        endcase 
      end
    end
  endgenerate

  // In order to deal with the negtive operation issue (mainly for + 1), we don't 
  // want to use lots of wide width adder here because of gate counts. Here we
  // can design a neg_booth_flag[MUL_SIZE / 2 : 0], each bit will record whether
  // the booth code is negative operation. Then we will count how many 1 it has,
  // and integrate them to another operand.

  logic [OP_NUM - 1 : 0] neg_booth_flag;

  generate
    for (i = 0; i < MUL_SIZE / 2 + 1; i = i + 1) begin
      always @(*) begin : NEG_BOOTH_FLAG
        case (multiplier_booth[2 * i + 2 : 2 * i])
          3'b000 : neg_booth_flag[i] = 1'b0;
          3'b001 : neg_booth_flag[i] = 1'b0;
          3'b010 : neg_booth_flag[i] = 1'b0;
          3'b011 : neg_booth_flag[i] = 1'b0;
          3'b100 : neg_booth_flag[i] = 1'b1;
          3'b101 : neg_booth_flag[i] = 1'b1;
          3'b110 : neg_booth_flag[i] = 1'b1;
          3'b111 : neg_booth_flag[i] = 1'b0;
          default: neg_booth_flag[i] = 1'b0;
        endcase 
      end
    end
  endgenerate

  // In order to transfer the number of flag signal 1, we decalre a flag_op signal,
  // for example, if flag is 1, then it will be 00001 (if MUL_SIZE is 32), otherwise
  // it will be 00000. The final sum of them is the number of flag 1.
  localparam OP_NEG_FLAG_WIDTH = $clog2(MUL_SIZE);

  logic [OP_NEG_FLAG_WIDTH - 1 : 0] op_neg_flag [0 : OP_NUM - 1];

  generate
    for (i = 0; i < OP_NUM; i = i + 1) begin
      always @(*) begin : FLAG_OP_EXTEND
        case (neg_booth_flag[i])
          1'b0 : op_neg_flag[i]   = {$clog2(MUL_SIZE){1'b0}};
          1'b1 : op_neg_flag[i]   = {{($clog2(MUL_SIZE) - 1){1'b0}}, {1'b1}};
          default: op_neg_flag[i] = {$clog2(MUL_SIZE){1'b0}};
        endcase 
      end
    end
  endgenerate

  // Transform the sum of all op_neg_flag to 2 operands.
  logic [OP_NEG_FLAG_WIDTH - 1 : 0] neg_sum [0 : 1];
  // Extend to ADDER_SIZE bit
  logic [ADDER_SIZE - 1 : 0] op_neg [0 : 1];

  op_n_to_2_17bit #(.OP_NUM ( OP_NUM ), .OP_WIDTH ( OP_NEG_FLAG_WIDTH )
  ) u_op_n_to_2_17bit (
    .in_op  ( op_neg_flag ),
    .out_op ( neg_sum     )
  );
  
  assign op_neg[0] = {{(ADDER_SIZE - OP_NEG_FLAG_WIDTH){1'b0}}, neg_sum[0]};
  assign op_neg[1] = {{(ADDER_SIZE - OP_NEG_FLAG_WIDTH){1'b0}}, neg_sum[1]};

  always @(*) begin
    out_op[OP_NUM]     <= op_neg[0];
    out_op[OP_NUM + 1] <= op_neg[1];
  end

endmodule