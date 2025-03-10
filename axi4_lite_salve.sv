///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: AXI4 Lite for BRAM and Configure Register
// Module Name: axi4_lite_slave
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a AXI4 Lite interface for slave BRAM and configure Register.
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: This AXI4 Lite interface mainly to deal with address map.
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_lite_slave #(
  parameter CTRL_WIDTH     = 3,
  parameter pDATA_WIDTH    = 32,
  parameter TAP_NUM_WIDTH  = 10,
  parameter DATA_NUM_WIDTH = 10
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,
  input  logic aresetn,

//------------------------ Read Address Channel -------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_araddr,
  input  logic                       in_s_arvalid,
  output logic                       out_s_arready,
  
//------------------------ Write Address Channel ------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_awaddr,
  input  logic                       in_s_awvalid,
  output logic                       out_s_awready,

//------------------------ Read Data Channel ----------------------------------------//
  output logic [pDATA_WIDTH - 1 : 0] out_s_rdata,
  output logic                       out_s_rvalid,
  input  logic                       in_s_rready,

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_wdata,
  input  logic                       in_s_wvalid,
  output logic                       out_s_wready,

//------------------------ Bram Interface -------------------------------------------//
  output logic [pDATA_WIDTH     - 1 : 0] out_tap_Di,
  input  logic [pDATA_WIDTH     - 1 : 0] in_tap_Do,
  output logic [pDATA_WIDTH / 8 - 1 : 0] out_tap_WE,

//------------------------ Arbiter Channel ------------------------------------//
  input  logic                         in_arbit_arready,
  input  logic                         in_arbit_rvalid,
  input  logic                         in_arbit_awready,
  input  logic                         in_arbit_wready,
  output logic                         out_tap_EN,
  output logic [TAP_NUM_WIDTH - 1 : 0] out_tap_A,

//------------------------ Core Interface -------------------------------------------//
  input  logic                          in_ap_done,
  output logic [CTRL_WIDTH     - 1 : 0] out_conf_ctrl,
  output logic [TAP_NUM_WIDTH  - 1 : 0] out_conf_tap,
  output logic [DATA_NUM_WIDTH - 1 : 0] out_conf_data
);

//------------------------ Address Map ----------------------------------------------//
// +======================+====================+
// | in_s_araddr[31 : 28] | Access Destination |
// +----------------------+--------------------+
// |      4'b0000         |    Ctrl Conf Reg   |
// +----------------------+--------------------+
// |      4'b0001         |   Tap Num Conf Reg |
// +----------------------+--------------------+
// |      4'b0010         |  Data Num Conf Reg |
// +----------------------+--------------------+
// |      4'b0011         |      Tap BRAM      |
// +======================+====================+

//------------------------ Module Instaniate ----------------------------------------//
  //------------------------ BRAM Slave ---------------------------------------------//  
  logic                           bram_s_arvalid;
  logic                           bram_s_awvalid;
  logic                           bram_s_arready;
  logic                           bram_s_awready;
  logic [pDATA_WIDTH     - 1 : 0] bram_s_rdata;
  logic                           bram_s_rvalid;
  logic                           bram_s_wready;
  logic [pDATA_WIDTH     - 1 : 0] bram_Di;
  logic [TAP_NUM_WIDTH   - 1 : 0] bram_A;
  logic [pDATA_WIDTH / 8 - 1 : 0] bram_WE;
  logic                           bram_EN;
  logic                           bram_req;

  // **** These two signals will decide whether the FSM in BRAM slave will start.
  assign bram_s_arvalid = (in_s_araddr[31 : 28] == 4'b0011) && in_s_arvalid;
  assign bram_s_awvalid = (in_s_awaddr[31 : 28] == 4'b0011) && in_s_awvalid;
  assign bram_req       = bram_s_arvalid || bram_s_awvalid;

  axi4_lite_slave_bram #(
      .TAP_NUM_WIDTH ( TAP_NUM_WIDTH ),
      .pDATA_WIDTH   ( pDATA_WIDTH   )
  ) u_axi4_lite_slave_bram (
    //------------------------ Global Signals ---------------------------------------//
    .aclk             ( aclk             ),
    .aresetn          ( aresetn          ),
    
    //------------------------ Read Address Channel ---------------------------------//
    .in_s_araddr      ( in_s_araddr      ),
    .in_s_arvalid     ( bram_s_arvalid   ),
    .out_s_arready    ( bram_s_arready   ),

    //------------------------ Write Address Channel --------------------------------//
    .in_s_awaddr      ( in_s_awaddr      ),
    .in_s_awvalid     ( bram_s_awvalid   ),
    .out_s_awready    ( bram_s_awready   ),

    //------------------------ Read Data Channel ------------------------------------//
    .in_s_rready      ( in_s_rready      ),
    .out_s_rdata      ( bram_s_rdata     ),
    .out_s_rvalid     ( bram_s_rvalid    ),
    
    //------------------------ Write Data Channel -----------------------------------//
    .in_s_wdata       ( in_s_wdata       ),
    .in_s_wvalid      ( in_s_wvalid      ),
    .out_s_wready     ( bram_s_wready    ),
    
    //------------------------ Bram Interface ---------------------------------------//
    .in_Do            ( in_tap_Do        ),
    .out_Di           ( bram_Di          ),
    .out_A            ( bram_A           ),
    .out_WE           ( bram_WE          ),

    //------------------------ Arbiter Channel --------------------------------------//
    .in_arbit_arready ( in_arbit_arready ),
    .in_arbit_rvalid  ( in_arbit_rvalid  ),
    .in_arbit_awready ( in_arbit_awready ),
    .in_arbit_wready  ( in_arbit_wready  ),
    .out_EN           ( bram_EN          )
  );

  //------------------------ Conf Slave ---------------------------------------------//
  logic                          conf_s_arvalid;
  logic                          conf_s_arready;
  logic                          conf_s_awvalid;
  logic                          conf_s_awready;
  logic                          access_ctrl;
  logic                          access_tap;
  logic                          access_data;
  logic [pDATA_WIDTH    - 1 : 0] conf_s_rdata;
  logic                          conf_s_rvalid;
  logic                          conf_s_wready;
  logic [CTRL_WIDTH     - 1 : 0] conf_ctrl;
  logic [TAP_NUM_WIDTH  - 1 : 0] conf_tap;
  logic [DATA_NUM_WIDTH - 1 : 0] conf_data;

  assign conf_s_arvalid = conf_req && in_s_arvalid;
  assign conf_s_awvalid = conf_req && in_s_awvalid;
  
  assign access_ctrl = (in_s_awaddr[31 : 28] == 4'b0000)
                    || (in_s_araddr[31 : 28] == 4'b0000);

  assign access_tap  = (in_s_awaddr[31 : 28] == 4'b0001)
                    || (in_s_araddr[31 : 28] == 4'b0001);

  assign access_data = (in_s_awaddr[31 : 28] == 4'b0010)
                    || (in_s_araddr[31 : 28] == 4'b0010);

  assign conf_req    =  access_ctrl
                     || access_tap
                     || access_data;

  axi4_lite_slave_conf #(
    .pDATA_WIDTH    ( pDATA_WIDTH    ),
    .CTRL_WIDTH     ( CTRL_WIDTH     ),
    .TAP_NUM_WIDTH  ( TAP_NUM_WIDTH  ),
    .DATA_NUM_WIDTH ( DATA_NUM_WIDTH )
  ) u_axi4_lite_slave_conf (
    //------------------------ Global Signals ---------------------------------------//
    .aclk             ( aclk            ),
    .aresetn          ( aresetn         ),

    //------------------------ Read Address Channel ---------------------------------//
    .in_s_arvalid     ( conf_s_arvalid  ),
    .out_s_arready    ( conf_s_arready  ),

    //------------------------ Write Address Channel --------------------------------//
    .in_s_awvalid     ( conf_s_awvalid  ),
    .out_s_awready    ( conf_s_awready  ),

    //------------------------ Addr Map ---------------------------------------------//
    .in_access_ctrl   ( access_ctrl     ),
    .in_access_tap    ( access_tap      ),
    .in_access_data   ( access_data     ),

    //------------------------ Read Data Channel ------------------------------------//
    .in_s_rready      ( in_s_rready     ),
    .out_s_rdata      ( conf_s_rdata    ),
    .out_s_rvalid     ( conf_s_rvalid   ),

    //------------------------ Write Data Channel -----------------------------------//
    .in_s_wdata       ( in_s_wdata      ),
    .in_s_wvalid      ( in_s_wvalid     ),
    .out_s_wready     ( conf_s_wready   ),

    //------------------------ Core Interface -------------------------------------------//
    .in_ap_done       ( in_ap_done      ),
    .out_ctrl         ( conf_ctrl       ),
    .out_tap          ( conf_tap        ),
    .out_data         ( conf_data       )
  );

//------------------------ Master Interface -----------------------------------------//
  //------------------------ Read Address Channel -----------------------------------//
  assign out_s_arready = bram_s_arready && conf_s_arready;

  //------------------------ Read Data Channel --------------------------------------//
  assign out_s_rdata  = ({pDATA_WIDTH{bram_s_rvalid}} & bram_s_rdata) 
                      | ({pDATA_WIDTH{conf_s_rvalid}} & conf_s_rdata);

  assign out_s_rvalid = bram_s_rvalid || conf_s_rvalid;

  //------------------------ Write Address Channel ----------------------------------//
  assign out_s_awready = (bram_s_awready && bram_req)
                      || (conf_s_awready && conf_req);

  //------------------------ Write Data Channel -------------------------------------//
  assign out_s_wready = bram_s_wready || conf_s_wready;

//------------------------ Tap BRAM Interface ---------------------------------------//
  assign out_tap_Di = bram_Di;
  assign out_tap_WE = bram_WE;

//------------------------ Arbiter Channel ------------------------------------------//
  assign out_tap_A  = bram_A;
  assign out_tap_EN = bram_EN;

//------------------------ Core Interface -------------------------------------------//
  assign out_conf_ctrl = conf_ctrl;
  assign out_conf_tap  = conf_tap;
  assign out_conf_data = conf_data;


endmodule