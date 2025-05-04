///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 21.02.2025 20:20:12
// Design Name:
// Module Name: booth4wallace_multiplier_nbit
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a booth4 based wallace multiplier, which will be used in core.
// 
// Dependencies: `booth4_op_generator.sv` and `brent_kung_adder_nbit.sv`
// 
// Revision: 0.01
// 
// Additional Comments:
// 
///////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

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

//------------------------ Stall ----------------------------------------------------//
  // **** When in_really is 0 (the destination hasn't received data), the pipeline will
  //      stall and wait.
  logic stall;
  assign stall = !in_ready;

//------------------------ Valid Ready Signal ---------------------------------------//
  // **** This design has two stages pipeline. The first one is for booth code to 
  //      generate initial operands. The second one is to provide final 2 operands to 
  //      brent-kung adder.
  localparam FLAG_PIPE_NUM = 2;

  // **** This is a simple shifter. It will shift the input valid signal to output, so
  //      output can know whether present data is valid.
  logic [FLAG_PIPE_NUM - 1 : 0] valid_flag;
  
  always_ff @( posedge clk or negedge rst_n ) begin : VALID_FLAG
    if (!rst_n) valid_flag <= {FLAG_PIPE_NUM{1'b0}};
    else if (stall) valid_flag <= valid_flag;
    else valid_flag <= {valid_flag[FLAG_PIPE_NUM - 1 - 1 : 0], in_valid};
  end

  assign out_valid = valid_flag[FLAG_PIPE_NUM - 1];
  assign out_ready = in_ready;

//------------------------ First Pipeline -------------------------------------------//
  // **** All the operands we need will be first store in registers.
  localparam OP_NUM_PIPE = MUL_SIZE / 2 + 1 + 2;
  logic [ADDER_SIZE - 1 : 0] op_generate     [OP_NUM_PIPE - 1 : 0];
  logic [ADDER_SIZE - 1 : 0] op_generate_reg [OP_NUM_PIPE - 1 : 0];

  booth4_op_generator #(
    .MUL_SIZE   (MUL_SIZE),
    .ADDER_SIZE (ADDER_SIZE)
  ) u_booth4_op_generator (
    .in_op1        ( in_op1        ),
    .in_op2        ( in_op2        ),
    .in_op1_signed ( in_op1_signed ),
    .in_op2_signed ( in_op2_signed ),
    .out_op        ( op_generate   )
  );

  always @( posedge clk or negedge rst_n ) begin : OP_GENERATE
    if (!rst_n) begin
      for (integer i = 0; i < OP_NUM_PIPE; i = i + 1) begin
        op_generate_reg[i] <= {ADDER_SIZE{1'b0}};
      end
    end
    else if (stall) begin 
      for (integer i = 0; i < OP_NUM_PIPE; i = i + 1) begin
      op_generate_reg[i] <= op_generate_reg[i];
      end
    end
    else begin 
      for (integer i = 0; i < OP_NUM_PIPE; i = i + 1) begin
        op_generate_reg[i] <= op_generate[i];
      end
    end
  end

//------------------------ Second Pipeline ------------------------------------------//
  // **** After we transfer them into two operands, we will store them into registers.
  logic [ADDER_SIZE - 1 : 0] op_adder [1 : 0];
  logic [ADDER_SIZE - 1 : 0] op_adder_reg [1 : 0];
  
  op_n_to_2_19bit #(
    .OP_NUM   ( OP_NUM_PIPE ),
    .OP_WIDTH ( ADDER_SIZE  )
  ) u_op_n_to_2_19bit (
    .in_op  ( op_generate_reg ),
    .out_op ( op_adder        )
  );

  always_ff @( posedge clk or negedge rst_n ) begin : OP_ADDER
    if (!rst_n) begin 
      for (integer i = 0; i < 2; i = i + 1) begin
        op_adder_reg[i] <= {ADDER_SIZE{1'b0}};
      end
    end
    else if (stall) begin
      for (integer i = 0; i < 2; i = i + 1) begin
        op_adder_reg[i] <= op_adder_reg[i];
      end
    end 
    else begin
      for (integer i = 0; i < 2; i = i + 1) begin
        op_adder_reg[i] <= op_adder[i];
      end
    end
  end

//------------------------ Final Add ------------------------------------------------//
  logic cout;
  brent_kung_adder_nbit #(.ADDER_SIZE (ADDER_SIZE)) u_brent_kung_adder_nbit (
    .in_op1  ( op_adder_reg[0] ),
    .in_op2  ( op_adder_reg[1] ),
    .out_res ( out_res         ),

    .cin     ( 1'b0            ),
    .cout    ( cout            )
  );
  
endmodule