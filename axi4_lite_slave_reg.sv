///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: AXI4 Lite for Configure Register
// Module Name: axi4_lite_slave_reg
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a AXI4 Lite interface for slave configure register.
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: This kind of axi4 lite is used for a simple BRAM.
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_lite_slave_reg #(
  parameter DATA_WIDTH = 32
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,      // Global clk
  input  logic aresetn,   // Global rst_n

//------------------------ Read Address Channel -------------------------------------//
  // Ignore ARCACHE and ARPROT as a slave.
  // input  logic [3 : 0] in_s_arcache,
  // input  logic [2 : 0] in_s_arprot,

  input  logic in_s_arvalid,    // Indicate read address from master is valid
  output logic out_s_arready,   // Indicate slave is ready to get read address
  
//------------------------ Read Data Channel ----------------------------------------//
  output logic [DATA_WIDTH - 1 : 0] out_s_rdata,   // Read data
  
  output logic out_s_rvalid,   // Indicate the output read data is valid
  input  logic in_s_rready,    // Indicate master is ready to receive the data

//------------------------ Write Address Channel ------------------------------------//
  // Ignore AWCACHE and AWPROT as a slave.
  // input  logic [3 : 0] in_s_awcache,
  // input  logic [2 : 0] in_s_awprot,
  
  input  logic in_s_awvalid,    // Indicate write address from master is valid
  output logic out_s_awready,   // Indicate slave is ready to get write address

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [DATA_WIDTH - 1 : 0] in_s_wdata,   // Write data
  
  input  logic in_s_wvalid,    // Indicate the write data from master is valid
  output logic out_s_wready,   // Indicate slave is ready to get data

//------------------------ System Interface -----------------------------------------//
  input  logic in_ap_done,
  output logic [DATA_WIDTH - 1 : 0] out_reg_data
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
                   | ({2{state_wdata_exit_ena}}       & STATE_IDLE     );

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 2'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Write ----------------------------------------------------//
  // Master write request
  logic [DATA_WIDTH - 1 : 2] conf_reg;
  // Hardware (system) and master write request
  logic [2 : 0] conf_reg_sys;
  logic ap_start;
  logic ap_idle;
  logic ap_done;
  assign conf_reg_sys = {ap_done, ap_idle, ap_start};

  // When system is calculation, conf_reg can not be writen
  always_ff @( posedge aclk or negedge aresetn) begin
    if (!aresetn) conf_reg <= {(DATA_WIDTH - 3){1'b0}};
    else if (state_wdata_exit_ena && idle) conf_reg <= in_s_wdata[DATA_WIDTH - 1 : 2];
    else conf_reg <= conf_reg;
  end

  always_ff @( posedge aclk or negedge aresetn) begin
    if (!aresetn) ap_start <= 1'b0;
    else if (state_wdata_exit_ena && ap_idle) ap_start <= in_s_wdata[0];
    else ap_start <= 1'b0;
  end

  assign ap_idle = !ap_done;
  assign ap_done = in_ap_done;

//------------------------ Master Interface -----------------------------------------//
  assign out_s_rdata  = {DATA_WIDTH{state_is_rdata}} & {conf_reg, conf_reg_sys};
  assign out_reg_data = out_s_rdata;

  // Handshake signal
  // Because this slave interface is for a simple BRAM, so the timing is predicted.
  // They can be generated by the state machine, needn't to get any feedback from BRAM.
  // However, for other memory device, these part of signals should be designed
  // carefully.
  assign out_s_arready = state_is_idle;
  assign out_s_awready = state_is_idle;
  assign out_s_rvalid  = state_is_rdata;
  assign out_s_wready  = state_is_wdata;

endmodule