/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 10/03/2025 10:38:55
// Design Name: 
// Module Name: fir_top
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: https://github.com/EsaLongs/EESM6000C/tree/main/Lab_3/Fir
// 
// Dependencies: `fir_core.sv`, `axi4_lite_slave.sv`, `axi4_stream_slave_bram.sv`
//               and `bram_access_arbiter.sv`
// 
// Revision 0.01
//
// Additional Comments:
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module fir_top #(
  parameter CTRL_WIDTH     = 3,
  parameter pDATA_WIDTH    = 32,
  parameter pADDR_WIDTH    = 32,
  parameter TAP_NUM_WIDTH  = 10,
  parameter DATA_NUM_WIDTH = 10
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,
  input  logic aresetn,

//------------------------ Axi4 Lite ------------------------------------------------//
  //------------------------ Read Address Channel -----------------------------------//
  input  logic [pADDR_WIDTH - 1 : 0] in_s_araddr,
  input  logic                       in_s_arvalid,
  output logic                       out_s_arready,
  
  //------------------------ Write Address Channel ----------------------------------//
  input  logic [pADDR_WIDTH - 1 : 0] in_s_awaddr,
  input  logic                       in_s_awvalid,
  output logic                       out_s_awready,

  //------------------------ Read Data Channel --------------------------------------//
  output logic [pDATA_WIDTH - 1 : 0] out_s_rdata,
  output logic                       out_s_rvalid,
  input  logic                       in_s_rready,

  //------------------------ Write Data Channel -------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_wdata,
  input  logic                       in_s_wvalid,
  output logic                       out_s_wready,

//------------------------ Axi4 Stream ----------------------------------------------//
  input  logic                       in_ss_tvalid, 
  input  logic [pDATA_WIDTH - 1 : 0] in_ss_tdata,
  
  // **** The "in_ss_tlast" will not be used in this design. The ending of the calcul-
  //      ation depends on the data_num written in the configure register instead of
  //      the axi4 stream interface.
  input  logic                       in_ss_tlast, 
  output logic                       out_ss_tready, 

  input  logic                       in_sm_tready, 
  output logic                       out_sm_tvalid, 
  output logic [pDATA_WIDTH - 1 : 0] out_sm_tdata, 
  output logic                       out_sm_tlast, 

//------------------------ Tap RAM Interface ----------------------------------------//
  input  logic [pDATA_WIDTH     - 1 : 0] in_tap_Do,
  output logic [pDATA_WIDTH     - 1 : 0] out_tap_Di,
  output logic [TAP_NUM_WIDTH   - 1 : 0] out_tap_A,
  output logic [pDATA_WIDTH / 8 - 1 : 0] out_tap_WE,
  output logic                           out_tap_EN,

//------------------------ Data RAM Interface ---------------------------------------//
  input  logic [pDATA_WIDTH     - 1 : 0] in_data_Do,
  output logic [pDATA_WIDTH     - 1 : 0] out_data_Di,
  output logic [TAP_NUM_WIDTH   - 1 : 0] out_data_A,
  output logic                           out_data_EN
);

//------------------------ Module Instaniate ----------------------------------------//
  //------------------------ AXI4 Lite ----------------------------------------------//
  logic                           arbit_awready;
  logic                           arbit_wready;
  logic                           arbit_arready;
  logic                           arbit_rvalid;
  logic                           lite_tap_EN;
  logic [TAP_NUM_WIDTH   - 1 : 0] lite_tap_A;

  logic                          core_ap_done;
  logic [CTRL_WIDTH     - 1 : 0] conf_ctrl;
  logic [TAP_NUM_WIDTH  - 1 : 0] conf_tap;
  logic [DATA_NUM_WIDTH - 1 : 0] conf_data;

  axi4_lite_slave #(
    .CTRL_WIDTH     ( CTRL_WIDTH     ),
    .pDATA_WIDTH    ( pDATA_WIDTH    ),
    .pADDR_WIDTH    ( pADDR_WIDTH    ),
    .TAP_NUM_WIDTH  ( TAP_NUM_WIDTH  ),
    .DATA_NUM_WIDTH ( DATA_NUM_WIDTH )
  ) u_axi4_lite_slave (
    //------------------------ Global Signals ---------------------------------------//
    .aclk             ( aclk          ),
    .aresetn          ( aresetn       ),

    //------------------------ Read Address Channel ---------------------------------//
    .in_s_araddr      ( in_s_araddr   ),
    .in_s_arvalid     ( in_s_arvalid  ),
    .out_s_arready    ( out_s_arready ),

    //------------------------ Write Address Channel --------------------------------//
    .in_s_awaddr      ( in_s_awaddr   ),
    .in_s_awvalid     ( in_s_awvalid  ),
    .out_s_awready    ( out_s_awready ),

    //------------------------ Read Data Channel ------------------------------------//
    .out_s_rdata      ( out_s_rdata   ),
    .out_s_rvalid     ( out_s_rvalid  ),
    .in_s_rready      ( in_s_rready   ),

    //------------------------ Write Data Channel -----------------------------------//
    .in_s_wdata       ( in_s_wdata    ),
    .in_s_wvalid      ( in_s_wvalid   ),
    .out_s_wready     ( out_s_wready  ),

    //------------------------ Bram Interface ---------------------------------------//
    .out_tap_Di       ( out_tap_Di    ),
    .in_tap_Do        ( in_tap_Do     ),
    .out_tap_WE       ( out_tap_WE    ),

    //------------------------ Arbiter Channel --------------------------------------//
    .in_arbit_arready ( arbit_arready ),
    .in_arbit_rvalid  ( arbit_rvalid  ),
    .in_arbit_awready ( arbit_awready ),
    .in_arbit_wready  ( arbit_wready  ),
    .out_tap_EN       ( lite_tap_EN   ),
    .out_tap_A        ( lite_tap_A    ),

    //------------------------ Core Interface ---------------------------------------//
    .in_ap_done       ( core_ap_done  ),
    .out_conf_ctrl    ( conf_ctrl     ),
    .out_conf_tap     ( conf_tap      ),
    .out_conf_data    ( conf_data     )
  );

  //------------------------ AXI4 Stream --------------------------------------------//
  logic arbit_tready;

  logic                       stream_data_EN;
  logic [pDATA_WIDTH - 1 : 0] stream_data_Di;

  axi4_stream_slave_bram #(
    .pDATA_WIDTH    ( pDATA_WIDTH    )
  ) u_axi4_stream_slave_bram (
    //------------------------ Global Signals ---------------------------------------//
    .aclk            ( aclk           ),
    .aresetn         ( aresetn        ),

    //------------------------ Data Channel -----------------------------------------//
    .in_ss_tvalid    ( in_ss_tvalid   ),
    .out_ss_tready   ( out_ss_tready  ),
    .in_ss_tdata     ( in_ss_tdata    ),

    //------------------------ Arbiter Channel --------------------------------------//
    .in_arbit_tready ( arbit_tready   ),
    .out_data_EN     ( stream_data_EN ),
    .out_data_Di     ( stream_data_Di )
  );

  //------------------------ Arbiter ------------------------------------------------//
  logic ap_idle;
  assign ap_idle = conf_ctrl[2];

  logic                         core_clr_wait;
  logic [TAP_NUM_WIDTH - 1 : 0] core_tap_A;
  logic                         core_tap_EN;
  logic                         core_data_EN;

  bram_access_arbiter u_bram_access_arbiter (
    //------------------------ Configure Register -----------------------------------//
    .in_ap_idle        ( ap_idle        ),

    //------------------------ Axilite Access ---------------------------------------//
    .out_arbit_awready ( arbit_awready  ),
    .out_arbit_wready  ( arbit_wready   ),
    .out_arbit_arready ( arbit_arready  ),
    .out_arbit_rvalid  ( arbit_rvalid   ),
    .in_lite_tap_EN    ( lite_tap_EN    ),
    .in_lite_tap_A     ( lite_tap_A     ),

    //------------------------ Axistream Access -------------------------------------//
    .in_stream_data_EN ( stream_data_EN  ),
    .in_stream_data_Di ( stream_data_Di ),
    .out_arbit_tready  ( arbit_tready   ),

    //------------------------ Core -------------------------------------------------//
    .in_core_clr_wait  ( core_clr_wait   ),
    .in_core_tap_A     ( core_tap_A      ),
    .in_core_tap_EN    ( core_tap_EN     ),
    .in_core_data_EN   ( core_data_EN    ),

    //------------------------ Tap RAM Interface ------------------------------------//
    .out_tap_EN        ( out_tap_EN      ),
    .out_tap_A         ( out_tap_A       ),

    //------------------------ Data RAM Interface -----------------------------------//
    .out_data_Di       ( out_data_Di     ),
    .out_data_EN       ( out_data_EN     )
  );

  //------------------------ Core ---------------------------------------------------//
  logic ap_start;
  assign ap_start = conf_ctrl[0];

  logic [2 * pDATA_WIDTH - 1 + TAP_NUM_WIDTH : 0] sm_tdata_full;

  fir_core #(
    .pDATA_WIDTH    ( pDATA_WIDTH    ),
    .TAP_NUM_WIDTH  ( TAP_NUM_WIDTH  ),
    .DATA_NUM_WIDTH ( DATA_NUM_WIDTH )
  ) u_fir_core (
    .clk              ( aclk          ),
    .rst_n            ( aresetn       ),

    //------------------------ Configure Register -----------------------------------//
    .in_ap_start      ( ap_start      ),
    .out_ap_done      ( core_ap_done  ),
    .in_tap_num       ( conf_tap      ),
    .in_data_num      ( conf_data     ),
  
    //------------------------ Tap Ram Interface ------------------------------------//
    .in_tap_Do        ( in_tap_Do     ),

    //------------------------ Data Ram Interface -----------------------------------//
    .in_data_Do       ( in_data_Do    ),
    .out_data_A       ( out_data_A    ),

    //------------------------ AXI4 Stream Interface --------------------------------//
    .in_ss_tvalid     ( in_ss_tvalid  ),
    .in_sm_tready     ( in_sm_tready  ),
    .out_sm_tvalid    ( out_sm_tvalid ),
    .out_sm_tdata     ( sm_tdata_full ),
    .out_sm_tlast     ( out_sm_tlast  ),

    //------------------------ Arbiter Interface ------------------------------------//
    .out_clr_wait     ( core_clr_wait ),
    .out_core_tap_EN  ( core_tap_EN   ),
    .out_core_data_EN ( core_data_EN  ),
    .out_tap_A        ( core_tap_A    )
  );

  assign out_sm_tdata = sm_tdata_full[pDATA_WIDTH - 1 : 0];

endmodule