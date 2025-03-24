///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name:
// Module Name: axi4_lite_slave_bram
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: AXI4 Lite interface (slave) for tap RAM.
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments:
// 
///////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module axi4_lite_slave_bram #(
  parameter pADDR_WIDTH = 32,
  parameter pDATA_WIDTH = 32,
  parameter TAP_NUM_WIDTH = 10
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,
  input  logic aresetn,

//------------------------ Read Address Channel -------------------------------------//
  input  logic [pADDR_WIDTH - 1 : 0]   in_s_araddr,
  input  logic                         in_s_arvalid,
  output logic                         out_s_arready,

//------------------------ Write Address Channel ------------------------------------//
  input  logic [pADDR_WIDTH - 1 : 0]   in_s_awaddr,
  input  logic                         in_s_awvalid,
  output logic                         out_s_awready,
  
//------------------------ Read Data Channel ----------------------------------------//
  input  logic                       in_s_rready,
  output logic [pDATA_WIDTH - 1 : 0] out_s_rdata,
  output logic                       out_s_rvalid,

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_wdata,
  input  logic                       in_s_wvalid,
  output logic                       out_s_wready,

//------------------------ Bram Interface -------------------------------------------//
  input  logic [pDATA_WIDTH     - 1 : 0] in_Do,
  output logic [pDATA_WIDTH     - 1 : 0] out_Di,
  output logic [pDATA_WIDTH / 8 - 1 : 0] out_WE,
  
//------------------------ Arbiter Channel ------------------------------------------//
  // **** These parts of signals are used to distribute tap BRAM access to avoid poss-
  //      ible conflict.
  input  logic in_arbit_arready,
  input  logic in_arbit_rvalid,
  input  logic in_arbit_awready,
  input  logic in_arbit_wready,
  output logic [TAP_NUM_WIDTH   - 1 : 0] out_A,
  output logic out_EN
);

//------------------------ Handshake Signal -----------------------------------------//
  logic raddr_hsked;
  logic waddr_hsked;
  logic rdata_hsked;
  logic wdata_hsked;

  assign raddr_hsked = in_s_arvalid && out_s_arready;
  assign waddr_hsked = in_s_awvalid && out_s_awready;
  assign rdata_hsked = out_s_rvalid && in_s_rready;
  assign wdata_hsked = in_s_wvalid  && out_s_wready;
  
//------------------------ State Machine --------------------------------------------//
  // **** There are three states in total. 
  // **** "STATE_IDLE" is the idle state. According to "raddr_hsked" or "waddr_hsked",
  //      it will enter "STATE_RDATA" or "STATE_WDATA".
  // **** "STATE_RDATA" is the read data state, after "rdata_hsked", which means the
  //      data has been recieved, it will return "STATE_IDLE".
  // **** "STATE_WDATA" is the write data state, after "wdata_hsked", which means the 
  //      data has been written into registers, it will return "STATE_IDLE".

  localparam STATE_IDLE  = 2'd0;
  localparam STATE_RDATA = 2'd1;
  localparam STATE_WDATA = 2'd2;

  logic [1 : 0] state_now;
  logic [1 : 0] state_nxt;

  logic state_is_idle;
  logic state_is_rdata;
  logic state_is_wdata;

  assign state_is_idle  = (state_now == STATE_IDLE);
  assign state_is_rdata = (state_now == STATE_RDATA);
  assign state_is_wdata = (state_now == STATE_WDATA);

  logic state_exit_ena;
  logic state_idle_exit2rdata_ena;
  logic state_idle_exit2wdata_ena;
  logic state_rdata_exit_ena;
  logic state_wdata_exit_ena;

  assign state_exit_ena = state_idle_exit2rdata_ena 
                       || state_idle_exit2wdata_ena
                       || state_rdata_exit_ena 
                       || state_wdata_exit_ena;
  
  assign state_idle_exit2rdata_ena = state_is_idle  && raddr_hsked;
  assign state_idle_exit2wdata_ena = state_is_idle  && waddr_hsked;
  assign state_rdata_exit_ena      = state_is_rdata && rdata_hsked;
  assign state_wdata_exit_ena      = state_is_wdata && wdata_hsked;

  assign state_nxt = ({2{state_idle_exit2rdata_ena}}  & STATE_RDATA     )
                   | ({2{state_idle_exit2wdata_ena}}  & STATE_WDATA     )
                   | ({2{state_rdata_exit_ena}}       & STATE_IDLE      )
                   | ({2{state_wdata_exit_ena}}       & STATE_IDLE      );

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 2'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Address Reg ----------------------------------------------//
  // **** For write operation, we need a register to store addr because BRAM doesn't 
  //      store the write addr itself.
  // **** For read operation, BRAM will store the addr (A) itself, so we don't need
  //      another register.

  logic [pADDR_WIDTH - 1 : 0] araddr_temp;
  logic [pADDR_WIDTH - 1 : 0] awaddr_temp;
  assign araddr_temp = in_s_araddr >> 2;
  assign awaddr_temp = in_s_awaddr >> 2;

  logic [TAP_NUM_WIDTH - 1 : 0] addr_wr;

  always_ff @( posedge aclk or negedge aresetn ) begin : ADDR_WR
    if (!aresetn) addr_wr <= {TAP_NUM_WIDTH{1'b0}};
    else if (state_idle_exit2wdata_ena) addr_wr <= awaddr_temp[TAP_NUM_WIDTH - 1 : 0];
    else addr_wr <= addr_wr;
  end

//------------------------ Bram Interface -------------------------------------------//
  // **** For write operation, the "A" will be passed to BRAM at the end of write state.
  // **** For read operation, the "A" will be passed to BRAM at the end of idle state.

  assign out_A  = (
                   araddr_temp[TAP_NUM_WIDTH - 1 : 0] 
                 & {TAP_NUM_WIDTH{state_idle_exit2rdata_ena}}
                  )
                | (
                   addr_wr 
                 & {TAP_NUM_WIDTH{state_wdata_exit_ena}}
                  );

  // **** "EN" need to last one more state for read because of the behaviour of BRAM.
  assign out_EN = (state_idle_exit2rdata_ena || state_is_rdata)  // For read
               || (state_wdata_exit_ena                       ); // For write

  // **** Here we assume all the bytes will be valid when writing.
  assign out_WE = {(pDATA_WIDTH / 8){state_wdata_exit_ena}};
  assign out_Di = {pDATA_WIDTH{state_wdata_exit_ena}} & in_s_wdata;

//------------------------ Master Interface -----------------------------------------//
  assign out_s_rdata   = {pDATA_WIDTH{state_is_rdata}} & in_Do;
  assign out_s_arready = in_arbit_arready && state_is_idle;
  assign out_s_awready = in_arbit_awready && state_is_idle;
  assign out_s_rvalid  = in_arbit_rvalid  && state_is_rdata;
  assign out_s_wready  = in_arbit_wready  && state_is_wdata;

endmodule