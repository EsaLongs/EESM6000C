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
// Description:
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
  // number. For example, if set MAX_TAP_NUM to be 32, then the width of counter will
  // be 5, you can only program configure register to have a TAP_NUM smaller than 32.
  parameter MAX_TAP_NUM  = 32,
  parameter MAX_DATA_NUM = 1024
  ) (
  input  logic clk,
  input  logic rst_n,

//------------------------ Configure Register ---------------------------------------//
  input  logic in_ap_start,
  output logic out_ap_done,

  input  logic [TAP_COUNTER_WIDTH_RETURN() - 1 : 0] tap_num,
  input  logic [p_ADDR_WIDTH_DATA() - 1 : 0] data_num,

//------------------------ Tap Ram Interface ----------------------------------------//
  input  logic [pADDR_WIDTH - 1 : 0] in_Do_tap,
  output logic [pADDR_WIDTH - 1 : 0] out_A_tap,
  output logic out_EN_tap,

//------------------------ Data Ram Interface ---------------------------------------//
  input  logic [pADDR_WIDTH - 1 : 0] in_Do_data,
  output logic [pADDR_WIDTH - 1 : 0] out_A_data,
  output logic out_EN_data,

//------------------------ AXI4 Stream Interface ------------------------------------//
  input  logic in_sm_tready,
  output logic in_sm_tvalid,
  output logic in_sm_tvalid,
  output logic in_sm_tvalid,


);


//------------------------ PARAMETER CALCUTION --------------------------------------//
  // Calculate the width of tap_counter
  function integer TAP_COUNTER_WIDTH_RETURN();
    integer i;
    for (i = 0; i < $clog2(MAX_TAP_NUM); i = i + 1) begin
      if (((2 ** i) > MAX_TAP_NUM) || ((2 ** i) == MAX_TAP_NUM)) begin
        TAP_COUNTER_WIDTH_RETURN = i;
        return TAP_COUNTER_WIDTH_RETURN;
      end
    end
  endfunction

  localparam int TAP_COUNTER_WIDTH = TAP_COUNTER_WIDTH_RETURN();

  // Calculate the width of data_counter
  function integer p_ADDR_WIDTH_DATA_RETURN();
    integer i;
    for (i = 0; i < $clog2(MAX_DATA_NUM); i = i + 1) begin
      if (((2 ** i) > MAX_DATA_NUM) || ((2 ** i) == MAX_DATA_NUM)) begin
        p_ADDR_WIDTH_DATA_RETURN = i;
        return p_ADDR_WIDTH_DATA_RETURN;
      end
    end
  endfunction

  localparam int p_ADDR_WIDTH_DATA = p_ADDR_WIDTH_DATA_RETURN();

//------------------------ Handshake Signal -----------------------------------------//
  logic data_hsked;
  assign data_hsked = in_s_tvalid && out_s_tready;

//------------------------ State Machine --------------------------------------------//
  localparam STATE_IDLE = 1'd0; // IDLE state
  localparam STATE_TRAN = 1'd1; // Transfer_state
  
  logic state_now;
  logic state_nxt;

  logic state_is_idle;
  logic state_is_tran;

  assign state_is_idle = (state_now == STATE_IDLE);
  assign state_is_tran = (state_now == STATE_TRAN);

  logic state_exit_ena;
  logic state_idle_exit_ena;
  logic state_tran_exit_ena;

  assign state_exit_ena = state_idle_exit_ena 
                       || state_tran_exit_ena;
  
  assign state_idle_exit_ena = state_is_idle && data_hsked;
  assign state_tran_exit_ena = state_is_tran && in_s_tlast;

  assign state_nxt = (state_idle_exit_ena && STATE_TRAN);
                  || (state_tran_exit_ena && STATE_IDLE);

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 1'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Address Generate -----------------------------------------//
  // Here we use counter to generate address
  logic [ADDR_WIDTH - 1 : 0] counter;
  logic [ADDR_WIDTH - 1 : 0] addr;

  // We want to transfer the first data just when handshake, so we don't need to wait
  // another cycle to enter TRAN_STATE. 
  logic tran_in_advance;
  assign tran_in_advance = data_hsked;

  logic tran_ena;
  assign tran_ena = tran_in_advance || state_is_tran;

  always_ff @( posedge aclk or negedge aresetn ) begin : COUNTER
    if (!aresetn) counter <= {ADDR_WIDTH{1'b0}};
    else if (tran_ena) counter <= counter + 1;
    // Here we set counter to be 0 so each write operation will overwrite the last one.
    // If we set counter <= counter here then it will write from the last position of 
    // previous write operation.
    else counter <= {ADDR_WIDTH{1'b0}};
  end

  assign addr = {ADDR_WIDTH{tran_ena}} & counter;

//------------------------ Bram Interface -------------------------------------------//
  assign out_A = addr;

  assign out_EN = tran_ena;

  assign out_WE = {(DATA_WIDTH / 8){tran_ena}} & in_s_tkeep;

  assign out_Di = {DATA_WIDTH{tran_ena}} & in_s_tdata;

//------------------------ Master Interface -----------------------------------------//
  // Handshake signal
  // Orignially this signal should be decided by slave device, but this is just a 
  // simple BRAM, so we can set it to be 1 simply.
  assign out_s_tready = 1'b1;

endmodule