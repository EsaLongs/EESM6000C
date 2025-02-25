///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: AXI4 Lite for BRAM
// Module Name: axi4_lite_slave_bram
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a AXI4 Lite interface for slave
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: This kind of axi4 lite is used for a simple BRAM.
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_lite_slave_bram #(
  parameter ADDR_WIDTH = 5,
  parameter DATA_WIDTH = 32
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,      // Global clk
  input  logic aresetn,   // Global rst_n

//------------------------ Read Address Channel -------------------------------------//
  input  logic [ADDR_WIDTH - 1 : 0] in_s_araddr,   // Read address
  
  // Ignore ARCACHE and ARPROT as a slave.
  // input  logic [3 : 0] in_s_arcache,
  // input  logic [2 : 0] in_s_arprot,

  input  logic in_s_arvalid,    // Indicate read address from master is valid
  output logic out_s_arready,   // Indicate slave is ready to get read address
  
//------------------------ Read Data Channel ----------------------------------------//
  output logic [DATA_WIDTH - 1 : 0] out_s_rdata,   // Read data
  
  output logic [1 : 0] out_s_rresp,   // Read response, indicating status of data transfer
  
  output logic out_s_rvalid,   // Indicate the output read data is valid
  input  logic in_s_rready,    // Indicate master is ready to receive the data

//------------------------ Write Address Channel ------------------------------------//
  input  logic [ADDR_WIDTH - 1 : 0] in_s_awaddr,   // Write address
  
  // Ignore AWCACHE and AWPROT as a slave.
  // input  logic [3 : 0] in_s_awcache,
  // input  logic [2 : 0] in_s_awprot,
  
  input  logic in_s_awvalid,    // Indicate write address from master is valid
  output logic out_s_awready,   // Indicate slave is ready to get write address

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [DATA_WIDTH - 1 : 0] in_s_wdata,   // Write data
  
  input  logic in_s_wvalid,    // Indicate the write data from master is valid
  output logic out_s_wready,   // Indicate slave is ready to get data

//------------------------ Write Response Channel -----------------------------------//
  output logic [1 : 0] out_s_bresp,   // Indicate status of write data transfer

  output logic out_s_bvalid,   // Indicate the response from slave is valid
  input  logic in_s_bready,    // Indicate the master is ready to receive response

//------------------------ Bram Interface -------------------------------------------//
  output logic [DATA_WIDTH - 1 : 0] out_Di,   // Write data
  input  logic [DATA_WIDTH - 1 : 0] in_Do,    // Read data
  output logic [ADDR_WIDTH - 1 : 0] out_A,    // Address

  output logic out_EN,   // Bram enable
  
  // Bram write enable (specific to which byte)
  output logic [DATA_WIDTH / 8 - 1 : 0] out_WE
);

  // +===========================================================================+
  // |R/BRESP [1 : 0] | Response | Meaning                                       |
  // +---------------------------------------------------------------------------|
  // |       00       |   OKAY   | Normal access successful or exclusive failure |
  // +---------------------------------------------------------------------------|
  // |       01       |   EXOKAY | Exclusive access successful                   |
  // +---------------------------------------------------------------------------|
  // |       10       |   SLVERR | Slave received access but returned error      |
  // +---------------------------------------------------------------------------|
  // |       11       |   DECERR | No slave at the transaction address           |
  // +===========================================================================+

  // This module only generates 00 response because it is connected to a simple BRAM 
  // and no error conditions are considered.

//------------------------ Handshake Signal -----------------------------------------//
  logic raddr_hsked;
  logic waddr_hsked;
  logic rdata_hsked;
  logic wdata_hsked;
  logic wresp_hsked;

  assign raddr_hsked = in_s_arvalid && out_s_arready;
  assign waddr_hsked = in_s_awvalid && out_s_awready;
  assign rdata_hsked = out_s_rvalid && in_s_rready;
  assign wdata_hsked = in_s_wvalid  && out_s_wready;
  assign wresp_hsked = out_s_bvalid && in_s_bready;
  
//------------------------ State Machine --------------------------------------------//
  localparam STATE_IDLE  = 2'd0;
  localparam STATE_RDATA = 2'd1;
  localparam STATE_WDATA = 2'd2;
  
  // We don't need another RRESP state because the response signal for read is
  // generated at the same time with valid signal according to protocol.
  localparam STATE_WRESP = 2'd3;

  logic [1 : 0] state_now;
  logic [1 : 0] state_nxt;

  logic state_is_idle;
  logic state_is_rdata_wait;
  logic state_is_rdata;
  logic state_is_wdata;
  logic state_is_wresp;

  assign state_is_idle  = (state_now == STATE_IDLE);
  assign state_is_rdata = (state_now == STATE_RDATA);
  assign state_is_wdata = (state_now == STATE_WDATA);
  assign state_is_wresp = (state_now == STATE_WRESP);

  logic state_exit_ena;
  logic state_idle_exit2rdata_ena;
  logic state_idle_exit2wdata_ena;
  logic state_rdwait_exit_ena;
  logic state_rdata_exit_ena;
  logic state_wdata_exit_ena;
  logic state_wresp_exit_ena;

  assign state_exit_ena = state_idle_exit2rdata_ena 
                       || state_idle_exit2wdata_ena
                       || state_rdata_exit_ena 
                       || state_wdata_exit_ena
                       || state_wresp_exit_ena;
  
  assign state_idle_exit2rdata_ena = state_is_idle  && raddr_hsked;
  assign state_idle_exit2wdata_ena = state_is_idle  && waddr_hsked;
  assign state_rdata_exit_ena      = state_is_rdata && rdata_hsked;
  assign state_wdata_exit_ena      = state_is_wdata && wdata_hsked;
  assign state_wresp_exit_ena      = state_is_wresp && wresp_hsked;

  assign state_nxt = ({2{state_idle_exit2rdata_ena}}  && STATE_RDATA     )
                  || ({2{state_idle_exit2wdata_ena}}  && STATE_WDATA     )
                  || ({2{state_rdata_exit_ena}}       && STATE_IDLE      )
                  || ({2{state_wdata_exit_ena}}       && STATE_WRESP     )
                  || ({2{state_wresp_exit_ena}}       && STATE_IDLE      );

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 2'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Bram Interface -------------------------------------------//
  assign out_A  = (in_s_araddr && {ADDR_WIDTH{state_idle_exit2rdata_ena}})
               || (in_s_awaddr && {ADDR_WIDTH{state_idle_exit2wdata_ena}});

  // EN need to last one more cycle for read because BRAM uses EN to assign Do
  assign out_EN = state_idle_exit2rdata_ena || state_is_rdata
               || state_idle_exit2wdata_ena;

  // Here we assume all the bytes will be valid when writing
  // When state_is_wdata, all bytes will be written in to BRAM.
  assign out_WE = {(DATA_WIDTH / 8){state_idle_exit2wdata_ena}};

  assign out_Di = {DATA_WIDTH{state_idle_exit2wdata_ena}} & in_s_wdata;

//------------------------ Master Interface -----------------------------------------//
  assign out_s_rdata = {DATA_WIDTH{state_is_rdata}} & in_Do;
  // We don't consider exclusive or error here because it's the simple BRAM
  assign out_s_rresp = 2'b00;
  assign out_s_bresp = 2'b00;

  // Handshake signal
  // Because this slave interface is for a simple BRAM, so the timing is predicted.
  // They can be generated by the state machine, needn't to get any feedback from BRAM.
  // However, for other memory device, these part of signals should be designed
  // carefully.
  assign out_s_arready = state_is_idle;
  assign out_s_awready = state_is_idle;
  assign out_s_rvalid  = state_is_rdata;
  assign out_s_wready  = state_is_wdata;
  assign out_s_bvalid  = state_is_wresp;

endmodule