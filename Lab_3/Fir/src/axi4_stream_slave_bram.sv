///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name:
// Module Name: axi4_stream_slave_bram
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: Stream interface (slave) of FIR.
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments:
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_stream_slave_bram #(
  parameter pDATA_WIDTH = 32
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,
  input  logic aresetn,
//------------------------ Data Channel ---------------------------------------------//
  input  logic                       in_ss_tvalid,
  output logic                       out_ss_tready,
  input  logic [pDATA_WIDTH - 1 : 0] in_ss_tdata,

//------------------------ Arbiter Interface ----------------------------------------//
  input  logic                       in_arbit_tready,
  output logic                       out_data_EN,
  output logic [pDATA_WIDTH - 1 : 0] out_data_Di
);

//------------------------ Handshake Signal -----------------------------------------//
  logic data_hsked;
  assign data_hsked = in_ss_tvalid && out_ss_tready;

//------------------------ BRAM Interface -------------------------------------------//
  assign out_data_Di = {pDATA_WIDTH{data_hsked}} & in_ss_tdata;

//------------------------ Arbiter Interface ----------------------------------------//
  assign out_data_EN = data_hsked;

//------------------------ Master Interface -----------------------------------------//
  assign out_ss_tready = in_arbit_tready;

endmodule