module booth4_op_generator #(
  parameter MUL_SIZE = 32,
  parameter ADDER_SIZE = 2 * MUL_SIZE
) (
  input  logic [MUL_SIZE - 1 : 0] in_op1,   // Multiplicand
  input  logic [MUL_SIZE - 1 : 0] in_op2,   // Multiplier

  // We will generage MUL_SIZE / 2 + 1 + 1 operands
  // MUL_SIZE / 2 + 1 is for booth code.
  // The final 1 is for dealing with negative booth operation + 1 issue
  output logic [ADDER_SIZE - 1 : 0] out_op [MUL_SIZE / 2 - 1 + 1 + 1: 0],

  input  logic in_op1_signed,   // Whether the operand 1 is signed, if unsigned, should be 0
  input  logic in_op2_signed,   // Whether the operand 2 is signed, if unsigned, should be 0
);

  logic multiplicand_sign;
  logic multiplier_sign;

  assign multiplicand_sign = in_op1_signed ? in_op1[MUL_SIZE - 1] : 1'b0;
  assign multiplier_sign   = in_op2_signed ? in_op2[MUL_SIZE - 1] : 1'b0;

  logic multiplier_booth; 
  assign multiplier_booth = {{2{multiplier_sign}}, in_op2, 1'b0};

  // Base multipicand to help writing generate code
  logic multipicand_base;
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
    for (i = 0; i < MUL_SIZE / 2 + 1; i = i + 1) begin
      always_comb begin : OUT_OP
        case (multiplier_booth[2 * i + 2 : 2 * i])
          3'b000 : out_op[i] <= {ADDER_SIZE{1'b0}};
          3'b001 : out_op[i] <= multipicand_base << (2 * i);
          3'b010 : out_op[i] <= multipicand_base << (2 * i);
          3'b011 : out_op[i] <= multipicand_base << (2 * i + 1);
          3'b100 : out_op[i] <= ~(multipicand_base << (2 * i + 1));
          3'b101 : out_op[i] <= ~(multipicand_base << (2 * i));
          3'b110 : out_op[i] <= ~(multipicand_base << (2 * i));
          3'b111 : out_op[i] <= {ADDER_SIZE{1'b0}};
          default: out_op[i] <= {ADDER_SIZE{1'b0}};
        endcase 
      end
    end
  endgenerate

  // In order to deal with the negtive operation issue (mainly for + 1), we don't 
  // want to use lots of wide width adder here because of gate counts. Here we
  // can design a neg_booth_flag[MUL_SIZE / 2 : 0], each bit will record whether
  // the booth code is negative operation. Then we will count how many 1 it has,
  // and integrate them to another operand.

  logic [MUL_SIZE / 2 : 0] neg_booth_flag;

  generate
    for (i = 0; i < MUL_SIZE / 2 + 1; i = i + 1) begin
      always_comb begin : NEG_BOOTH_FLAG
        case (multiplier_booth[2 * i + 2 : 2 * i])
          3'b000 : neg_booth_flag[i] <= 1'b0;
          3'b001 : neg_booth_flag[i] <= 1'b0;
          3'b010 : neg_booth_flag[i] <= 1'b0;
          3'b011 : neg_booth_flag[i] <= 1'b0;
          3'b100 : neg_booth_flag[i] <= 1'b1;
          3'b101 : neg_booth_flag[i] <= 1'b1;
          3'b110 : neg_booth_flag[i] <= 1'b1;
          3'b111 : neg_booth_flag[i] <= 1'b0;
          default: neg_booth_flag[i] <= 1'b0;
        endcase 
      end
    end
  endgenerate


  // In order to transfer the number of flag signal 1, we decalre a flag_op signal,
  // for example, if flag is 1, then it will be 00001 (if MUL_SIZE is 32), otherwise
  // it will be 00000. The final sum of them is the number of flag 1.
  logic [$clog2(MUL_SIZE) - 1 : 0] flag_op_extend [MUL_SIZE / 2 : 0];

  generate
    for (i = 0; i < MUL_SIZE / 2 + 1; i = i + 1) begin
      always_comb begin : FLAG_OP_EXTEND
        case (neg_booth_flag[i])
          1'b0 : flag_op_extend[i]   <= {$clog2(MUL_SIZE){1'b0}};
          1'b1 : neg_booth_flag[i]   <= {{($clog2(MUL_SIZE) - 1){1'b0}}, {1'b1}};
          default: neg_booth_flag[i] <= {$clog2(MUL_SIZE){1'b0}};
        endcase 
      end
    end
  endgenerate



endmodule