///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 28.02.2025 17:28:20
// Design Name: Main part of fir
// Module Name: fir_main
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: Still Writing
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments:
// 
///////////////////////////////////////////////////////////////////////////////////////

module fir_main #(
  parameter pDATA_WIDTH  = 32,
  // This two parameter will determine the limitation of calculation, so please make 
  // sure it is large enough when synthesis.
  // This two parameters will determine the counter width, which means the max counter
  // number. For example, if set TAP_NUM to be 32, then the width of counter will
  // be 5, you can only program configure register to have a TAP_NUM smaller than 32.
  parameter pADDR_WIDTH_TAP = 4,
  parameter pADDR_WIDTH_DATA = 10
  ) (
  input  logic clk,
  input  logic rst_n,

//------------------------ Configure Register ---------------------------------------//
  input  logic in_ap_start,
  output logic out_ap_done,

  input  logic [pADDR_WIDTH_TAP - 1 : 0] in_tap_num,
  input  logic [pADDR_WIDTH_DATA - 1 : 0] in_data_num,

//------------------------ Tap Ram Interface ----------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_Do_tap,
  output logic [pADDR_WIDTH_TAP - 1 : 0] out_A_tap,
  output logic out_EN_tap,

//------------------------ Data Ram Interface ---------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_Do_data,
  output logic [pADDR_WIDTH_DATA - 1 : 0] out_A_data,
  output logic out_EN_data,

//------------------------ AXI4 Stream Interface ------------------------------------//
  input  logic in_sm_tready,
  output logic out_sm_tvalid,
  // Here needs to be modified
  output logic [2 * pDATA_WIDTH - 1 + pADDR_WIDTH_TAP : 0] out_sm_tdata, 
  output logic out_sm_tlast
);
//------------------------ Handshake ------------------------------------------------//
  logic data_hsked;
  logic stall;

  assign data_hsked = in_sm_tready && out_sm_tvalid;
  assign stall = !in_sm_tready;
//------------------------ State Machine --------------------------------------------//
  // Used to clear shifter
  logic clr_finish;
  logic delay_finish;

  // There are only two states in this system.
  localparam STATE_IDLE = 2'b00;
  localparam STATE_CLR  = 2'b01;
  localparam STATE_CALC = 2'b10;

  logic [1 : 0] state_now;
  logic [1 : 0] state_nxt;

  logic state_is_idle;
  logic state_is_clr;
  logic state_is_calc;

  assign state_is_idle = (state_now == 2'b00);
  assign state_is_clr  = (state_now == 2'b01);
  assign state_is_calc = (state_now == 2'b10);

  logic state_exit_en;
  logic state_idle_exit_en;
  logic state_clr_exit_en;
  logic state_calc_exit_en;

  assign state_exit_en = state_idle_exit_en
                      || state_clr_exit_en 
                      || state_calc_exit_en;
  
  // When state_is_idle && in_ap_start, enter clr state
  // When state_is_clr  && clr_finish, enter clr state
  // When state_is_calc && delay_finish, which means that having finished all 
  // calculation, then we can enter IDLE state.
  assign state_idle_exit_en = state_is_idle && in_ap_start;
  assign state_clr_exit_en  = state_is_clr  && clr_finish;
  assign state_calc_exit_en = state_is_calc && delay_finish;

  logic [1 : 0] state_idle_nxt;
  logic [1 : 0] state_clr_nxt;
  logic [1 : 0] state_calc_nxt;

  assign state_idle_nxt = ({2{state_idle_exit_en}} & STATE_CLR);
  assign state_clr_nxt  = ({2{state_clr_exit_en}}  & STATE_CALC);
  assign state_calc_nxt = ({2{state_calc_exit_en}} & STATE_IDLE);

  assign state_nxt = state_idle_nxt
                   | state_clr_nxt
                   | state_calc_nxt;

  always_ff @( posedge clk or negedge rst_n ) begin : STATE_MACHINE
    if (!rst_n) state_now <= 2'b0;
    else if (state_exit_en) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Counter --------------------------------------------------//
  logic [pADDR_WIDTH_TAP - 1 : 0] counter_clr;
  
  always_ff @( posedge clk or negedge rst_n ) begin
    if (!rst_n) counter_clr <= {pADDR_WIDTH_TAP{1'b0}};
    else if (state_is_clr) counter_clr = counter_clr + 1;
    else counter_clr <= {pADDR_WIDTH_TAP{1'b0}};
  end

  assign clr_finish = (counter_clr == {pADDR_WIDTH_TAP{1'b1}});

  logic [pADDR_WIDTH_TAP - 1 : 0] counter_tap;
  logic [pADDR_WIDTH_DATA - 1 : 0] counter_data;

  logic one_round_finish;
  logic all_round_finish;
  assign one_round_finish = (counter_tap == in_tap_num);
  // When all_round_finish is 1, we still need to wait a few cycles to make sure the
  // last data has been recieved.
  assign all_round_finish = (counter_data == in_data_num);

  assign delay_finish = all_round_finish && data_hsked;

  always_ff @( posedge clk or negedge rst_n ) begin : COUNTER_TAP
    if (!rst_n) counter_tap <= {pADDR_WIDTH_TAP{1'b0}};
    // Here we use all_round_finish instead of delay_finish because when all_round_finish
    // is 1, we already finish sending data to calculate, we are just waiting it to
    // come out, then we hope it to be all 0 to reduce dynamic power.
    else if (one_round_finish || all_round_finish || state_is_idle) counter_tap <= {pADDR_WIDTH_TAP{1'b0}};
    else if (stall) counter_tap <= counter_tap;
    else counter_tap <= counter_tap + 1;
  end

  always_ff @( posedge clk or negedge rst_n ) begin : COUNTER_DATA
    if (!rst_n) counter_data <= {pADDR_WIDTH_DATA{1'b0}};
    else if (delay_finish || state_is_idle) counter_data <= {pADDR_WIDTH_DATA{1'b0}};
    else if (stall) counter_data <= counter_data;
    else if (one_round_finish) counter_data <= counter_data + 1;
    else counter_data <= counter_data;
  end

//------------------------ Shifter --------------------------------------------//
  logic [pADDR_WIDTH_TAP - 1 : 0] shif_addr;
  logic shif_clk;
  logic shif_clk_en;
  logic [pDATA_WIDTH - 1 : 0] shif_din;
  logic [pDATA_WIDTH - 1 : 0] shif_dout;

  assign shif_addr   = counter_tap;
  assign shif_clk    = clk;
  // We need to write the first data into shifter when enter calc state
  // We need to clear the shifter during clr_stage
  assign shif_clk_en = one_round_finish || state_idle_exit_en || state_is_clr;
  assign shif_din    = state_is_calc ? in_Do_data : {pDATA_WIDTH{1'b0}};

  // Because we just has 11 TAP here, you should use larger shifter with larger TAP
  shifter_11 u_shifter_11 (
    .ADDR   ( shif_addr   ),
    .CLK    ( shif_clk    ),
    .CE     ( shif_clk_en ),
    .DIN    ( shif_din    ),
    .DOUT   ( shif_dout   )
  );

//------------------------ Pipeline -------------------------------------------//
  // These two are the data will be sent to calculate
  logic [pDATA_WIDTH - 1 : 0] tap;
  logic [pDATA_WIDTH - 1 : 0] data;
  
  assign tap  = in_Do_tap;
  assign data = shif_dout;

  // Then we use a temp register to store the data waiting to be calculated
  logic [pDATA_WIDTH - 1 : 0] temp_reg_tap;
  logic [pDATA_WIDTH - 1 : 0] temp_reg_data;

  // Because we we don't need the final address which address == in_tap_num,
  // we set temp_reg_tap to be 0 so it will not influence later result.
  logic temp_set_0;
  assign temp_set_0 = one_round_finish;

  always_ff @( posedge clk or negedge rst_n ) begin : TEMP_REG
    if (!rst_n) begin
      temp_reg_tap  <= {pDATA_WIDTH{1'b0}};
      temp_reg_data <= {pDATA_WIDTH{1'b0}};
    end else if (temp_set_0 || all_round_finish || state_is_idle || state_is_clr) begin
      temp_reg_tap  <= {pDATA_WIDTH{1'b0}};
      temp_reg_data <= {pDATA_WIDTH{1'b0}};
    end else if (stall) begin
      temp_reg_tap  <= temp_reg_tap;
      temp_reg_data <= temp_reg_data;
    end else begin
      temp_reg_tap  <= tap;
      temp_reg_data <= data;
    end
  end

  // We will generate a data_valid signal, and it will pass through some shifter
  // to make sure it reaches the output will the valid data at the same time.
  logic data_valid;
  assign data_valid = one_round_finish;

  // The last bit will be assigned to out_sm_tvalid. Data first need to get across temp_reg (1st pipeline),
  // then get across multiplier (has 2 pipelines), then get accross another temp_reg
  // just before enter adder (4th pipeline). Finally, the adder result is the output.
  // In this case we can make sure the MSB of shifter reaches output with valid data
  // at the same time.
  logic valid_shifter_1st;
  logic valid_shifter_3rd;  // The valid signal from multiplier
  logic valid_shifter_4th;

  always_ff @( posedge clk or negedge rst_n ) begin
    if (!rst_n) begin
      valid_shifter_1st <= 1'b0;
      valid_shifter_4th <= 1'b0;
    end else if (delay_finish || state_is_idle) begin
      valid_shifter_1st <= 1'b0;
      valid_shifter_4th <= 1'b0;      
    end else if (stall) begin
      valid_shifter_1st <= valid_shifter_1st;
      valid_shifter_4th <= valid_shifter_4th;
    end else begin
      valid_shifter_1st <= data_valid;
      valid_shifter_4th <= valid_shifter_3rd;
    end
  end

//------------------------ Instantite -----------------------------------------//
  logic [pDATA_WIDTH - 1 : 0] mul_op1;
  logic [pDATA_WIDTH - 1 : 0] mul_op2;
  logic [2 * pDATA_WIDTH - 1 : 0] mul_res;
  logic mul_op1_signed;
  logic mul_op2_signed;
  logic mul_in_valid;
  logic mul_in_ready;
  logic mul_out_valid;
  logic mul_clk;
  logic mul_rstn;

  assign mul_op1 = temp_reg_tap;
  assign mul_op2 = temp_reg_data;
  // This part can also be programed.
  assign mul_op1_signed = 1'b1;
  assign mul_op2_signed = 1'b1;

  assign mul_in_valid = valid_shifter_1st;
  // This multiplier use !in_ready as stall signal inside.
  assign mul_in_ready = in_sm_tready;
  assign mul_clk = clk;
  // When the last data has been recieved, clear multiplier
  assign mul_rstn = !((delay_finish) || (!rst_n));

  booth4wallace_multiplier_nbit #(
    .MUL_SIZE  (pDATA_WIDTH)
  ) u_booth4wallace_multiplier_nbit (
    .in_op1        ( mul_op1           ),
    .in_op2        ( mul_op2           ),
    .out_res       ( mul_res           ),

    // This part can also be programed.
    .in_op1_signed ( mul_op1_signed    ),
    .in_op2_signed ( mul_op2_signed    ),

    .in_valid      ( mul_in_valid      ),
    .out_ready     (                   ),
    
    .in_ready      ( mul_in_ready      ),
    .out_valid     ( mul_out_valid     ),

    .clk           ( clk               ),
    .rst_n         ( mul_rstn          )
  );

  assign valid_shifter_3rd = mul_out_valid;

//------------------------ Instantite -----------------------------------------//
  // If TAP_NUM == 2 ** n, which means pADDR_WIDTH_TAP = n, then actually we need DATA_WIDTH * 2 + n bit to make
  // sure there is no carry out loss. However, here we use 64 + 16 bits. If you
  // need very large number of TAP, then you can use higher one.
  localparam int ADDER_SIZE_1ST = 2 * pDATA_WIDTH;
  localparam int ADDER_SIZE_2NT = pADDR_WIDTH_TAP;
  localparam int ADDER_SIZE     = ADDER_SIZE_1ST + ADDER_SIZE_2NT;

  logic [ADDER_SIZE_1ST - 1 : 0] add_op1_1st;
  logic [ADDER_SIZE_1ST - 1 : 0] add_op2_1st;
  logic [ADDER_SIZE_1ST - 1 : 0] add_res_1st;
  logic add_cin_1st;
  logic add_cout_1st;

  logic [ADDER_SIZE_2NT - 1 : 0] add_op1_2nd;
  logic [ADDER_SIZE_2NT - 1 : 0] add_op2_2nd;
  logic [ADDER_SIZE_2NT - 1 : 0] add_res_2nd;
  logic add_cin_2nd;
  
  logic [ADDER_SIZE - 1 : 0] add_res;
  logic [ADDER_SIZE - 1 : 0] add_temp;

  assign add_op1_1st = mul_res;
  assign add_op2_1st = add_temp[ADDER_SIZE_1ST - 1 : 0];
  assign add_cin_1st = 1'b0;

  // Sign extend
  assign add_op1_2nd = {ADDER_SIZE_2NT{add_op1_1st[ADDER_SIZE_1ST - 1]}};
  assign add_op2_2nd = add_temp[ADDER_SIZE - 1 : ADDER_SIZE_1ST];
  assign add_cin_2nd = add_cout_1st;

  assign add_res = {add_res_1st, add_res_2nd};

  always_ff @( posedge clk or negedge rst_n ) begin : ACCUMULATOR
    if (!rst_n) add_temp <= {ADDER_SIZE{1'b0}};
    else if (state_is_idle) add_temp <= {ADDER_SIZE{1'b0}};
    else if (stall) add_temp <= add_temp;
    else add_temp <= add_res;
  end

  brent_kung_adder_nbit #(
    .ADDER_SIZE (ADDER_SIZE_1ST)
    ) u1_brent_kung_adder_nbit (
    .in_op1  ( add_op1_1st  ),
    .in_op2  ( add_op2_1st  ),
    .out_res ( add_res_1st  ),

    .cin     ( add_cin_1st  ),
    .cout    ( add_cout_1st )
  );

    brent_kung_adder_nbit #(
    .ADDER_SIZE (ADDER_SIZE_2NT)
    ) u2_brent_kung_adder_nbit (
    .in_op1  ( add_op1_2nd ),
    .in_op2  ( add_op2_2nd ),
    .out_res ( add_res_2nd ),

    .cin     ( add_cin_2nd ),
    .cout    (             )
  );

//------------------------ Output ---------------------------------------------//
  assign out_ap_done   = delay_finish;
  assign out_A_tap     = counter_tap;
  assign out_EN_tap    = 1'b1;
  assign out_A_data    = counter_data;
  assign out_EN_data   = 1'b1;
  assign out_sm_tvalid = valid_shifter_4th;
  assign out_sm_tdata  = add_res;
  assign out_sm_tlast  = delay_finish;

endmodule