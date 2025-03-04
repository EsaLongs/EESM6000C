///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: AXI4 Stream for BRAM
// Module Name: axi4_stream_slave_bram
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a AXI4 Stream interface for slave
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: This kind of axi4 stream is used for a simple BRAM.
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_stream_slave_bram #(
  parameter pDATA_WIDTH = 32,
  parameter pADDR_WIDTH_DATA = 5
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,      // Global clk
  input  logic aresetn,   // Global rst_n
  
//------------------------ Data Channel ---------------------------------------------//
  input  logic in_s_tvalid,    // Indicate the data from master is valid
  output logic out_s_tready,   // Indicate slave is ready to get data
  
  input  logic [pDATA_WIDTH - 1 : 0] in_s_tdata,   // Read data

//------------------------ Data Modification ----------------------------------------//
  // Don't consider TSTRB in this design.
  
  input  logic [pDATA_WIDTH / 8 - 1 : 0] in_s_tkeep,
  input  logic in_s_tlast,

//------------------------ Transport Modification -----------------------------------//
  // We don't consider this part in this design.
  // TID
  // TDEST
  // TUSER

//------------------------ Bram Interface -------------------------------------------//
  output logic [pDATA_WIDTH - 1 : 0] out_Di,           // Write data

  output logic [pADDR_WIDTH_DATA - 1 : 0] out_A,   // Address

  output logic out_EN,   // Bram enable
  
  // Bram write enable (specific to which byte)
  output logic [pDATA_WIDTH / 8 - 1 : 0] out_WE
);

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

  assign state_nxt = (state_idle_exit_ena && STATE_TRAN)
                  || (state_tran_exit_ena && STATE_IDLE);

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 1'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Address Generate -----------------------------------------//
  // Here we use counter to generate address
  logic [pADDR_WIDTH_DATA - 1 : 0] counter;
  logic [pADDR_WIDTH_DATA - 1 : 0] addr;

  logic tran_ena;
  assign tran_ena = data_hsked;

  always_ff @( posedge aclk or negedge aresetn ) begin : COUNTER
    if (!aresetn) counter <= {pADDR_WIDTH_DATA{1'b0}};
    else if (tran_ena) counter <= counter + 1;
    // When !tran_ena && state_is_tran, we will keep the address and wait for the next
    // data
    else if (state_is_tran) counter <= counter;
    // Here we set counter to be 0 so each write operation will overwrite the last one.
    // If we set counter <= counter here then it will write from the last position of 
    // previous write operation.
    else counter <= {pADDR_WIDTH_DATA{1'b0}};
  end

  assign addr = {pADDR_WIDTH_DATA{tran_ena}} & counter;

//------------------------ Bram Interface -------------------------------------------//
  assign out_A = addr;

  assign out_EN = tran_ena;

  assign out_WE = {(pDATA_WIDTH / 8){tran_ena}} & in_s_tkeep;

  assign out_Di = {pDATA_WIDTH{tran_ena}} & in_s_tdata;

//------------------------ Master Interface -----------------------------------------//
  // Handshake signal
  // Orignially this signal should be decided by slave device, but this is just a 
  // simple BRAM, so we can set it to be 1 simply.
  assign out_s_tready = 1'b1;

endmodule