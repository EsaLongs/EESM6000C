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

  input  logic [pADDR_WIDTH_TAP_RETURN() - 1 : 0] in_tap_num,
  input  logic [pADDR_WIDTH_DATA_RETURN() - 1 : 0] in_data_num,

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
  output logic [pDATA_WIDTH - 1 : 0] sm_tdata, 
  output logic sm_tlast, 
);


//------------------------ PARAMETER CALCUTION --------------------------------------//
  // Calculate the width of tap_counter
  function integer pADDR_WIDTH_TAP_RETURN();
    integer i;
    for (i = 0; i < $clog2(MAX_TAP_NUM); i = i + 1) begin
      if (((2 ** i) > MAX_TAP_NUM) || ((2 ** i) == MAX_TAP_NUM)) begin
        pADDR_WIDTH_TAP_RETURN = i;
        return pADDR_WIDTH_TAP_RETURN;
      end
    end
  endfunction

  localparam int pADDR_WIDTH_TAP = pADDR_WIDTH_TAP_RETURN();

  // Calculate the width of data_counter
  function integer pADDR_WIDTH_DATA_RETURN();
    integer i;
    for (i = 0; i < $clog2(MAX_DATA_NUM); i = i + 1) begin
      if (((2 ** i) > MAX_DATA_NUM) || ((2 ** i) == MAX_DATA_NUM)) begin
        pADDR_WIDTH_DATA_RETURN = i;
        return pADDR_WIDTH_DATA_RETURN;
      end
    end
  endfunction

  localparam int pADDR_WIDTH_DATA = pADDR_WIDTH_DATA_RETURN();

//------------------------ Counter --------------------------------------------------//
  logic [pADDR_WIDTH_TAP - 1 : 0] counter_tap;
  logic [pADDR_WIDTH_DATA - 1 : 0] counter_data;

  logic one_round_finish;
  logic all_round_finish;
  assign one_round_finish = (counter_tap == in_tap_num);
  // When all data have been calculated, we will clear all registers after the data has
  // been accepted ( handshake ), so that it can start new calcalation correctly.
  assign all_round_finish = (counter_data == in_data_num);
  logic delay_clr;
  assign delay_clr = all_round_finish && data_hsked;


  always_ff @( posedge clk or negedge rst_n ) begin : COUNTER_TAP
    if (!rst_n) counter_tap <= {pADDR_WIDTH_TAP{1'b0}};
    else if (stall) counter_tap <= counter_tap;
    // Here we use all_round_finish instead of delay_clr because when all_round_finish
    // is 1, we already finish sending data to calculate, we are just waiting it to
    // come out.
    else if (one_round_finish || all_round_finish) counter_tap <= {pADDR_WIDTH_TAP{1'b0}};
    else counter_tap = counter_tap + 1;
  end

  always_ff @( posedge clk or negedge rst_n ) begin : COUNTER_DATA
    if (!rst_n) counter_data <= {pADDR_WIDTH_DATA{1'b0}};
    else if (stall) counter_data <= counter_data;
    else if (delay_clr) counter_data <= {pADDR_WIDTH_DATA{1'b0}};
    else if (one_round_finish) counter_tap <= counter_tap + 1;
    else counter_tap <= counter_tap;
  end

//------------------------ Shifter --------------------------------------------//



//------------------------ Pipeline -------------------------------------------//
  // These two are the data will be sent to calculate
  logic [pDATA_WIDTH - 1 : 0] tap;
  logic [pDATA_WIDTH - 1 : 0] data;
  
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
    end else if (stall) begin
      temp_reg_tap  <= temp_reg_tap;
      temp_reg_data <= temp_reg_data;
    end else if (temp_set_0 || all_round_finish) begin
      temp_reg_tap <= {pDATA_WIDTH{1'b0}};
      temp_reg_data <= {pDATA_WIDTH{1'b0}};
    end else begin
      temp_reg_tap <= tap;
      temp_reg_data <= data;
    end
  end

  // We will generate a data_valid signal, and it will pass through some shifter
  // to make sure it reaches the output will the valid data at the same time.
  logic data_valid;
  assign data_valid = one_round_finish;

  // The last bit will be assigned to out_sm_tvalid. The reason we choose 4 bit
  // shifter here is that data first need to get across temp_reg (1st pipeline),
  // then get across multiplier (has 2 pipelines), then get accross another temp_reg
  // just before enter adder (4th pipeline). Finally, the adder result is the output.
  // In this case we can make sure the MSB of shifter reaches output with valid data
  // at the same time.
  logic [3 : 0] valid_shifter
  always_ff @( posedge clk or negedge rst_n ) begin
    if (!rst_n) valid_shifter <= 4'b0;
    else if (stall) valid_shifter <= valid_shifter;
    else if (delay_clr) valid_shifter <= 4'b0;
    else valid_shifter <= {valid_shifter[2 : 0], data_valid};
  end

endmodule