///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: 
// Module Name: bram_w_access_arbiter
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a arbiter used for distributing BRAM access permission.
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments:
// 
///////////////////////////////////////////////////////////////////////////////////////

module bram_access_arbiter #(
  parameter pDATA_WIDTH = 32,
  parameter TAP_NUM_WIDTH = 10
) (
//------------------------ Configure Register ---------------------------------------//
  input  logic in_ap_idle,

//------------------------ Axilite Access -------------------------------------------//
  output logic                         out_arbit_awready,
  output logic                         out_arbit_wready,
  output logic                         out_arbit_arready,
  output logic                         out_arbit_rvalid,
  input  logic                         in_lite_tap_EN,
  input  logic [TAP_NUM_WIDTH - 1 : 0] in_lite_tap_A,

//------------------------ Axistream Access -----------------------------------------//
  input  logic                         in_stream_data_EN,
  input  logic [pDATA_WIDTH - 1 : 0]   in_stream_data_Di,
  output logic                         out_arbit_tready,

//------------------------ Core -----------------------------------------------------//
  input  logic                         in_core_clr_wait,
  input  logic [TAP_NUM_WIDTH - 1 : 0] in_core_tap_A,
  input  logic                         in_core_tap_EN,
  input  logic                         in_core_data_EN,

//------------------------ Tap RAM Interface ----------------------------------------//
  output logic                         out_tap_EN,
  output logic [TAP_NUM_WIDTH - 1 : 0] out_tap_A,

//------------------------ Data RAM Interface ---------------------------------------//
  output logic [pDATA_WIDTH - 1 : 0] out_data_Di,
  output logic                       out_data_EN
);

  // **** When "ap_idle" is 0, which means the core has started, then axilite can't 
  //      write to tap RAM.
  assign out_arbit_awready = in_ap_idle;
  assign out_arbit_wready  = in_ap_idle;
  assign out_arbit_arready = in_ap_idle;
  assign out_arbit_rvalid  = in_ap_idle;
  
  // **** Only when data RAM (shifter) needs new data, axistream can write to data RAM.
  assign out_arbit_tready = in_core_data_EN;

  // **** The "in_lite_tap_EN" depends on "awready" and "awvalid" signal, which means 
  //      the "EN" is deasserted when "!in_ap_idle".
  assign out_tap_EN = in_lite_tap_EN || in_core_tap_EN;
  assign out_tap_A  = in_lite_tap_A  | in_core_tap_A;

  // **** We use a skill here. When "in_EN_data_clr", which means data RAM (shifter)
  //      needs to be cleared. Because the "Di" of data RAM (connect to stream interf-
  //      ace directly) will be all 0 when "out_arbit_tready" is 0, then we can write
  //      all 0 to data RAM (shifter) to clear it during this state.
  assign out_data_Di  = in_core_clr_wait ? {pDATA_WIDTH{1'b0}} : in_stream_data_Di;
  assign out_data_EN = in_stream_data_EN || in_core_clr_wait;

endmodule