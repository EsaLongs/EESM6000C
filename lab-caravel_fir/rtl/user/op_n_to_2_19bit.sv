//////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 08/03/2025 10:38:55
// Design Name: 
// Module Name: op_n_to_2_nbit
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a wallace tree implementation, transfer 3 operands to 2.
// Dependencies: `op_3_to_2_nbit_onestage.sv`
// 
// Revision 0.01
//
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module op_n_to_2_19bit #( 
  parameter OP_NUM = 19, 
  parameter OP_WIDTH = 64
) (
  input  logic [OP_WIDTH - 1 : 0] in_op [OP_NUM - 1 : 0],
  output logic [OP_WIDTH - 1 : 0] out_op [0 : 1]
);



  localparam int STAGE_NUM = 6;

  // Calculate how many input operands it has for each stage.
  // For each stage, we will have IN_OP_NUM % 3 operands left and assign
  // to next stage directly. We will have $floor(IN_OP_NUM / 3) operands
  // use the 3to2 unit. For example, if IN_OP_NUM = 32, because 32 % 3
  // = 2, then out_op[1 : 0] will be assigned by in_op[1 : 0] (after 
  // sign extend). The out_op[OUT_OP_NUM - 1 : 2] will use 3to2 unit.

  localparam int OP_NUM_STAGE_0 = 19;
  localparam int OP_NUM_STAGE_1 = 13;
  localparam int OP_NUM_STAGE_2 = 9;
  localparam int OP_NUM_STAGE_3 = 6;
  localparam int OP_NUM_STAGE_4 = 4;
  localparam int OP_NUM_STAGE_5 = 3;
  localparam int OP_NUM_STAGE_6 = 2;

//------------------------ Instantiate ----------------------------------------------//
  // Just used for instantiating.
  logic [OP_WIDTH - 1 : 0] op_temp_0 [0 : OP_NUM_STAGE_1 - 1];
  logic [OP_WIDTH - 1 : 0] op_temp_1 [0 : OP_NUM_STAGE_2 - 1];
  logic [OP_WIDTH - 1 : 0] op_temp_2 [0 : OP_NUM_STAGE_3 - 1];
  logic [OP_WIDTH - 1 : 0] op_temp_3 [0 : OP_NUM_STAGE_4 - 1];
  logic [OP_WIDTH - 1 : 0] op_temp_4 [0 : OP_NUM_STAGE_5 - 1];
  logic [OP_WIDTH - 1 : 0] op_temp_5 [0 : OP_NUM_STAGE_6 - 1];
  
  op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE_0)
  ) u0_op_n_to_2_nbit_onestage (
    .in_op  (in_op),
    .out_op (op_temp_0)
  );

  op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE_1)
  ) u1_op_n_to_2_nbit_onestage (
    .in_op  (op_temp_0),
    .out_op (op_temp_1)
  );

  op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE_2)
  ) u2_op_n_to_2_nbit_onestage (
    .in_op  (op_temp_1),
    .out_op (op_temp_2)
  );

  op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE_3)
  ) u3_op_n_to_2_nbit_onestage (
    .in_op  (op_temp_2),
    .out_op (op_temp_3)
  );

  op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE_4)
  ) u4_op_n_to_2_nbit_onestage (
    .in_op  (op_temp_3),
    .out_op (op_temp_4)
  );

  op_n_to_2_nbit_onestage #(.OP_WIDTH(OP_WIDTH), .IN_OP_NUM(OP_NUM_STAGE_5)
  ) u5_op_n_to_2_nbit_onestage (
    .in_op  (op_temp_4),
    .out_op (op_temp_5)
  );
  
  assign out_op = op_temp_5;

endmodule