///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: 
// Module Name: axi4_lite_slave_conf
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: AXI4 Lite interface (slave) for configure register.
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: 
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_lite_slave_conf #(
  parameter pDATA_WIDTH = 32,
  parameter CTRL_WIDTH = 3,
  parameter TAP_NUM_WIDTH = 10,
  parameter DATA_NUM_WIDTH = 10
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,
  input  logic aresetn,

//------------------------ Read Address Channel -------------------------------------//
  input  logic in_s_arvalid,
  output logic out_s_arready,

//------------------------ Write Address Channel ------------------------------------//
  input  logic in_s_awvalid,
  output logic out_s_awready,

//------------------------ Addr Map -------------------------------------------------//
  // **** These three access signals show which register (or none of them) will be 
  //      access. The "out_no_busy" signal is mainly used to 

  input  logic in_access_ctrl,
  input  logic in_access_data,
  input  logic in_access_tap,

//------------------------ Read Data Channel ----------------------------------------//
  input  logic                       in_s_rready,
  output logic [pDATA_WIDTH - 1 : 0] out_s_rdata,
  output logic                       out_s_rvalid,

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_wdata,
  input  logic                       in_s_wvalid,
  output logic                       out_s_wready,

//------------------------ Core Interface -------------------------------------------//
  input  logic                          in_ap_done,
  output logic [CTRL_WIDTH     - 1 : 0] out_ctrl,
  output logic [TAP_NUM_WIDTH  - 1 : 0] out_tap,
  output logic [DATA_NUM_WIDTH - 1 : 0] out_data
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

  localparam STATE_IDLE  = 2'b00;
  localparam STATE_RDATA = 2'b01;
  localparam STATE_WDATA = 2'b10;

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
  logic state_idle_exit_ena;
  logic state_rdata_exit_ena;
  logic state_wdata_exit_ena;

  assign state_exit_ena = state_idle_exit2rdata_ena 
                       || state_idle_exit2wdata_ena
                       || state_rdata_exit_ena 
                       || state_wdata_exit_ena;

  assign state_idle_exit_ena       = state_idle_exit2rdata_ena || state_idle_exit2wdata_ena;
  assign state_idle_exit2rdata_ena = state_is_idle  && raddr_hsked;
  assign state_idle_exit2wdata_ena = state_is_idle  && waddr_hsked;
  assign state_rdata_exit_ena      = state_is_rdata && rdata_hsked;
  assign state_wdata_exit_ena      = state_is_wdata && wdata_hsked;

  assign state_nxt = ({2{state_idle_exit2rdata_ena}} & STATE_RDATA     )
                   | ({2{state_idle_exit2wdata_ena}} & STATE_WDATA     )
                   | ({2{state_rdata_exit_ena}}      & STATE_IDLE      )
                   | ({2{state_wdata_exit_ena}}      & STATE_IDLE     );

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 2'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Flag -----------------------------------------------------//
  // **** There are three kinds of flag siganls, which are corresponding to different
  //      accessing registers.
  // **** There are three kinds of registers, and they are responsible for starting the
  //      core FSM, transmitting tap_num and data_num to core.
  // **** These flags (only one of them) will be set "1" in idle state (if there is any
  //      access) and will be clear when return to idle state (which means read or write
  //      operation has finished). Meanwhile, these flags will decide which register
  //      will be written.
  
  logic ctrl_flag;
  logic tap_flag;
  logic data_flag;

  logic flag_clr;
  assign flag_clr = state_wdata_exit_ena || state_rdata_exit_ena;

  always_ff @( posedge aclk or negedge aresetn ) begin
    if (!aresetn) ctrl_flag <= 1'b0;
    else if (flag_clr) ctrl_flag <= 1'b0;
    else if (in_access_ctrl && state_idle_exit_ena) ctrl_flag <= 1'b1;
    else ctrl_flag <= ctrl_flag;
  end

  always_ff @( posedge aclk or negedge aresetn ) begin
    if (!aresetn) tap_flag <= 1'b0;
    else if (flag_clr) tap_flag <= 1'b0;
    else if (in_access_tap && state_idle_exit_ena) tap_flag <= 1'b1;
    else tap_flag <= tap_flag;
  end

  always_ff @( posedge aclk or negedge aresetn ) begin
    if (!aresetn) data_flag <= 1'b0;
    else if (flag_clr) data_flag <= 1'b0;
    else if (in_access_data && state_idle_exit_ena) data_flag <= 1'b1;
    else data_flag <= data_flag;
  end

//------------------------ Write ----------------------------------------------------//
  // **** The "conf_reg_ctrl" register will store "{ap_idle ,ap_done , ap_start}", but
  //      actully only "ap_start" can be written by AXI4 lite.
  // **** "conf_reg_tap" register store the tap num.
  // **** "conf_reg_data" register store the data num.
  
  logic [CTRL_WIDTH     - 1 : 0] conf_reg_ctrl;
  logic [TAP_NUM_WIDTH  - 1 : 0] conf_reg_tap;
  logic [DATA_NUM_WIDTH - 1 : 0] conf_reg_data;

  //------------------------ Ctrl Reg -----------------------------------------------//
  logic ap_start;
  logic ap_idle;
  logic ap_done;
  assign conf_reg_ctrl = {ap_idle ,ap_done , ap_start};

  // **** Here we just need to assert "ap_start" for one cycle to start the core FSM.
  always_ff @( posedge aclk or negedge aresetn) begin
    if (!aresetn) ap_start <= 1'b0;
    else if (state_wdata_exit_ena && ctrl_flag) ap_start <= in_s_wdata[0];
    else ap_start <= 1'b0;
  end

  // **** "ap_done" and "ap_idle" are controlled by core.
  always_ff @( posedge aclk or negedge aresetn) begin
    if (!aresetn) ap_done <= 1'b1;
    else if (ap_start) ap_done <= 1'b0;
    else if (in_ap_done) ap_done <= 1'b1;
    else ap_done <= ap_done;
  end

  assign ap_idle = ap_start ? 1'b0 : ap_done;

  //------------------------ Tap Reg ------------------------------------------------//
  always_ff @( posedge aclk or negedge aresetn) begin
    if (!aresetn) conf_reg_tap <= {TAP_NUM_WIDTH{1'b0}};
    else if (state_wdata_exit_ena && tap_flag) conf_reg_tap <= in_s_wdata[TAP_NUM_WIDTH - 1 : 0];
    else conf_reg_tap <= conf_reg_tap;
  end

  //------------------------ Data Reg -----------------------------------------------//
  always_ff @( posedge aclk or negedge aresetn) begin
    if (!aresetn) conf_reg_data <= {DATA_NUM_WIDTH{1'b0}};
    else if (state_wdata_exit_ena && data_flag) conf_reg_data <= in_s_wdata[DATA_NUM_WIDTH - 1 : 0];
    else conf_reg_data <= conf_reg_data;
  end

//------------------------ Read -----------------------------------------------------//
  logic  reg_ctrl_read_en;
  logic  reg_tap_read_en;
  logic  reg_data_read_en;

  // **** Following logic is used to choose one of these three registers as "out_s_rdata".
  assign reg_ctrl_read_en = ctrl_flag && state_is_rdata;
  assign reg_tap_read_en  = tap_flag  && state_is_rdata;
  assign reg_data_read_en = data_flag && state_is_rdata;
  
  assign out_s_rdata  = ({pDATA_WIDTH{reg_ctrl_read_en}} & {{(pDATA_WIDTH - CTRL_WIDTH){1'b0}}, conf_reg_ctrl})
                      | ({pDATA_WIDTH{reg_tap_read_en }} & {{(pDATA_WIDTH - TAP_NUM_WIDTH ){1'b0}}, conf_reg_tap })
                      | ({pDATA_WIDTH{reg_data_read_en}} & {{(pDATA_WIDTH - DATA_NUM_WIDTH){1'b0}}, conf_reg_data});

//------------------------ Master Interface -----------------------------------------//
  // **** This design don't block reading configure register, but will bolck writting when 
  //      core already starts.
  assign out_s_arready = state_is_idle;
  assign out_s_rvalid  = state_is_rdata;
  assign out_s_awready = ap_idle && state_is_idle;
  assign out_s_wready  = ap_idle && state_is_wdata;

//------------------------ Core Interface --------------------------------------------//
  assign out_ctrl = conf_reg_ctrl;
  assign out_tap  = conf_reg_tap;
  assign out_data = conf_reg_data;

endmodule