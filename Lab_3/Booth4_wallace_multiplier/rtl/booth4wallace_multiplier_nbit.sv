///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 21.02.2025 20:20:12
// Design Name: nbit booth4-wallace multiplier
// Module Name: booth4wallace_multiplier_nbit
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a booth4 based wallace multiplier, you can set the value of 
//              MUL_SIZE in to be 2 ^ n (4, 8, 16, 32, 64, 128 ....).
// 
// Dependencies: "Brent_Kung_Adder_nbit", "onebit_adder", 
//               "gp_unit.sv" (instantiate unit for adder), 
// 
// Revision: 0.01
// 
// Additional Comments: Nothing
// 
///////////////////////////////////////////////////////////////////////////////////////

// The key part of this design is the state machine. It contains IDLE, CALC, and SEND
// 3 states. In IDLE state, the multiplier will store the data from inputs to registers 
// used for later calculation. In CACL state, we use a counter to tell when the calcul-
// ation is finished and then enter SEND state. In SEND state, we will keep the result 
// and won't exit present state until the destination module is ready to get the data.

module booth4wallace_multiplier_nbit #(
  parameter MUL_SIZE = 32,
  parameter ADDER_SIZE = 2 * MUL_SIZE
) (
  input  logic [MUL_SIZE - 1 : 0] in_op1,   // Multiplicand
  input  logic [MUL_SIZE - 1 : 0] in_op2,   // Multiplier
  output logic [ADDER_SIZE - 1 : 0] out_res,

  input  logic in_op1_signed,   // Whether the operand 1 is signed, if unsigned, should be 0
  input  logic in_op2_signed,   // Whether the operand 2 is signed, if unsigned, should be 0

  input  logic in_valid,     // Source operands is valid
  output logic out_ready,    // Ready for get operands from source
  
  input  logic in_ready,     // Destination is ready for get the result
  output logic out_valid,    // The calculation has finished and ready to send

  input  logic clk, rst_n
);

//------------------------ Handshake ------------------------------------------------//
  logic get_hsked;   // Handshake signal for state machine to leave the IDLE state
  logic send_hsked;  // Handshake signal for state machine to end the SEND state
  assign get_hsked  = in_valid  && out_ready;
  assign send_hsked = out_valid && in_ready;

//------------------------ Stall ----------------------------------------------------//
  // When in_really is 0 (the destination hasn't received data), the pipeline will
  // stall and wait.
  logic stall;
  assign stall = in_ready;

//------------------------ Valid Ready Signal ---------------------------------------//
  // This design has two stages pipeline. The first one is for booth code to generate 
  // initial operands. The second one is to provide final 2 operands to brent-kung
  // adder.
  localparam pipe_num = 2;

  // This is a simple shifter. It will shift the input valid signal to output, so
  // output can know whether present data is valid.
  logic [pipe_num - 1 : 0] valid_flag;
  
  always_ff @( posedge clk or negedge rst_n ) begin : VALID_FLAG
    if (!rst_n) valid_flag <= {pipe_num{1'b0}};
    else valid_flag <= {valid_flag[pipe_num - 1 - 1 : 0], in_valid}
  end

  assign out_valid = valid_flag[pipe_num - 1];
  assign out_ready = in_ready;

//------------------------ Temp Register --------------------------------------------//
  // In this kind of design, we use a register to store the multipicand in IDLE state,
  // which make the calculation won't by affected by inputs if they change in the CALC
  // stage.
  logic [MUL_SIZE - 1 + 1 : 0] multiplicand_reg;    // {sign, in_op1}
  logic [MUL_SIZE - 1 + 1 + 2 : 0] multiplier_reg;  // {sign, sign, in_op2, 1'b0}

  logic multiplicand_sign;
  logic multiplier_sign;

  assign multiplicand_sign = in_op1_signed ? in_op1[MUL_SIZE - 1] : 1'b0;
  assign multiplier_sign   = in_op2_signed ? in_op2[MUL_SIZE - 1] : 1'b0;

  always_ff @( posedge clk or negedge rst_n ) begin : MULTIPLICAND_REG
    if (!rst_n) multiplicand_reg <= 'b0;
    else if (state_is_idle) multiplicand_reg <= {multiplicand_sign, in_op1};
    else multiplicand_reg <= multiplicand_reg;
  end

  always_ff @( posedge clk or negedge rst_n ) begin : MULTIPLIER_REG
    if (!rst_n) multiplier_reg <= 'b0;
    else if (state_is_idle) multiplier_reg <= {{2{multiplier_sign}}, in_op2, 1'b0};
    else if (state_is_calc) multiplier_reg <= multiplier_reg << 2;
    else multiplier_reg <= multiplier_reg;
  end

//------------------------ Booth Code Generate --------------------------------------//
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

  logic [2 : 0] booth_code;

  assign booth_code = multiplier_reg[MUL_SIZE + 2 : MUL_SIZE];

  logic booth_nochange;
  logic booth_add1x;
  logic booth_sub1x;
  logic booth_add2x;
  logic booth_sub2x;

  assign booth_nochange = ((booth_code == 3'b000) || (booth_code == 3'b111));
  assign booth_add1x    = ((booth_code == 3'b001) || (booth_code == 3'b010));
  assign booth_sub1x    = ((booth_code == 3'b101) || (booth_code == 3'b110));
  assign booth_add2x    = (booth_code == 3'b011);
  assign booth_sub2x    = (booth_code == 3'b100);

//------------------------ Adder Operand --------------------------------------------//
  logic [ADDER_SIZE - 1 : 0] adder_op1;
  logic [ADDER_SIZE - 1 : 0] adder_op2;
  logic [ADDER_SIZE - 1 : 0] adder_res;
  logic adder_cin;

  // Instantiate adder
  brent_kung_adder_nbit u_brent_kung_adder_nbit (
    .in_op1   ( adder_op1 ),
    .in_op2   ( adder_op2 ),
    .out_res  ( adder_res ),
    .cin      ( adder_cin ),
    .cout     (           )
  );

  logic [ADDER_SIZE - 1 : 0] res_reg;  // The register to store adder result
  
  always_ff @( posedge clk or negedge rst_n ) begin : RES
    if (!rst_n) res_reg <= 'b0;
    else if (state_is_calc) res_reg <= adder_res << 2;
    else if (state_is_send) res_reg <= res_reg;
    else res_reg <= 'b0;
  end

  assign adder_op1 = res_reg;
  
  logic [ADDER_SIZE - 1 : 0] adder_op2_add1x;
  logic [ADDER_SIZE - 1 : 0] adder_op2_add2x;
  logic [ADDER_SIZE - 1 : 0] adder_op2_sub1x;
  logic [ADDER_SIZE - 1 : 0] adder_op2_sub2x;
  
  assign adder_op2_add1x = {{(ADDER_SIZE - MUL_SIZE - 1){multiplicand_reg[MUL_SIZE]}}, multiplicand_reg};
  assign adder_op2_add2x = {adder_op2_add1x[ADDER_SIZE - 1 - 1 : 0], 1'b0};
  assign adder_op2_sub1x = ~ adder_op2_add1x;
  assign adder_op2_sub2x = ~ adder_op2_add2x;

  assign adder_op2 = booth_add1x    ? adder_op2_add1x :
                     booth_add2x    ? adder_op2_add2x :
                     booth_sub1x    ? adder_op2_sub1x :
                     booth_sub2x    ? adder_op2_sub2x :
                     {ADDER_SIZE{1'b0}};

  assign adder_cin = booth_sub1x || booth_sub2x;

  assign out_res = {ADDER_SIZE{state_is_send}} & adder_res;

endmodule