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
  parameter pADDR_WIDTH_TAP  = 12,
  parameter MAX_TAP_NUM = 11,
  parameter pDATA_WIDTH  = 32
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,      // Global clk
  input  logic aresetn,   // Global rst_n

//------------------------ Read Address Channel -------------------------------------//
  input  logic [pADDR_WIDTH_TAP - 1 : 0] in_s_araddr,   // Read address
  
  // Ignore ARCACHE and ARPROT as a slave.
  // input  logic [3 : 0] in_s_arcache,
  // input  logic [2 : 0] in_s_arprot,

  input  logic in_s_arvalid,    // Indicate read address from master is valid
  output logic out_s_arready,   // Indicate slave is ready to get read address
  
//------------------------ Read Data Channel ----------------------------------------//
  output logic [pDATA_WIDTH - 1 : 0] out_s_rdata,   // Read data
  
  output logic [1 : 0] out_s_rresp,   // Read response, indicating status of data transfer
  
  output logic out_s_rvalid,   // Indicate the output read data is valid
  input  logic in_s_rready,    // Indicate master is ready to receive the data

//------------------------ Write Address Channel ------------------------------------//
  input  logic [pADDR_WIDTH_TAP - 1 : 0] in_s_awaddr,   // Write address
  
  // Ignore AWCACHE and AWPROT as a slave.
  // input  logic [3 : 0] in_s_awcache,
  // input  logic [2 : 0] in_s_awprot,
  
  input  logic in_s_awvalid,    // Indicate write address from master is valid
  output logic out_s_awready,   // Indicate slave is ready to get write address

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [pDATA_WIDTH - 1 : 0] in_s_wdata,   // Write data
  
  input  logic in_s_wvalid,    // Indicate the write data from master is valid
  output logic out_s_wready,   // Indicate slave is ready to get data

//------------------------ Write Response Channel -----------------------------------//
  output logic [1 : 0] out_s_bresp,   // Indicate status of write data transfer

  output logic out_s_bvalid,   // Indicate the response from slave is valid
  input  logic in_s_bready,    // Indicate the master is ready to receive response

//------------------------ Bram Interface -------------------------------------------//
  output logic [pDATA_WIDTH - 1 : 0] out_Di,   // Write data
  input  logic [pDATA_WIDTH - 1 : 0] in_Do,    // Read data
  output logic [pADDR_WIDTH_TAP - 1 : 0] out_A,    // Address

  output logic out_EN,   // Bram enable
  
  // Bram write enable (specific to which byte)
  output logic [pDATA_WIDTH / 8 - 1 : 0] out_WE,

//------------------------ System Interface -----------------------------------------//
  input  logic in_ap_done,
  output logic [pDATA_WIDTH - 1 : 0] out_reg_data  
);

//------------------------ Parameter Calculation ------------------------------------//
  // Calculate pADDR_WIDTH_TAP according to MAX_TAP_NUM
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

//------------------------ Module Instaniate ----------------------------------------//
  //------------------------ BRAM Slave ---------------------------------------------//
  logic bram_req;
  
  logic bram_aclk;
  logic bram_aresetn;
  logic [pADDR_WIDTH_TAP - 1 : 0] bram_in_s_araddr;
  logic bram_in_s_arvalid;
  logic bram_out_s_arready;
  logic [pDATA_WIDTH - 1 : 0] bram_out_s_rdata;
  logic [1 : 0]              bram_out_s_rresp;
  logic bram_out_s_rvalid;
  logic bram_in_s_rready;
  logic [pADDR_WIDTH_TAP - 1 : 0] bram_in_s_awaddr;
  logic bram_in_s_awvalid;
  logic bram_out_s_awready;
  logic [pDATA_WIDTH - 1 : 0] bram_in_s_wdata;
  logic bram_in_s_wvalid;
  logic bram_out_s_wready;
  logic [1 : 0] bram_out_s_bresp;
  logic bram_out_s_bvalid;
  logic bram_in_s_bready;
  logic [pDATA_WIDTH - 1 : 0] bram_out_Di;
  logic [pDATA_WIDTH - 1 : 0] bram_in_Do;
  logic [pADDR_WIDTH_TAP - 1 : 0] bram_out_A;
  logic bram_out_EN;
  logic [pDATA_WIDTH / 8 - 1 : 0] bram_out_WE;
  
  assign bram_req = (in_s_araddr == 12'h20);

  assign bram_aclk        = aclk;
  assign bram_aresetn     = aresetn;
  assign bram_in_s_araddr = in_s_araddr;
  
  // This signal will decide whether axi4_lite_slave_bram can start state machine.
  assign bram_in_s_arvalid = bram_req;
  
  assign bram_in_s_rready  = in_s_rready;
  assign bram_in_s_awaddr  = in_s_awaddr;
  assign bram_in_s_awvalid = in_s_awvalid;
  assign bram_in_s_wdata   = in_s_wdata;
  assign bram_in_s_wvalid  = in_s_wvalid;
  assign bram_in_s_bready  = in_s_bready;
  assign bram_in_Do        = in_Do;

  axi4_lite_slave_bram #(
      .pADDR_WIDTH_TAP ( pADDR_WIDTH_TAP ),
      .MAX_TAP_NUM  ( MAX_TAP_NUM  ),
      .pDATA_WIDTH ( pDATA_WIDTH )
  ) u_axi4_lite_slave_bram (
      //------------------------ Global Signals -------------------------------------//
      .aclk          ( bram_aclk          ),
      .aresetn       ( bram_aresetn       ),
      
      //------------------------ Read Address Channel -------------------------------//
      .in_s_araddr   ( bram_in_s_araddr   ),
      .in_s_arvalid  ( bram_in_s_arvalid  ),
      .out_s_arready ( bram_out_s_arready ),

      //------------------------ Read Data Channel ----------------------------------//
      .out_s_rdata   ( bram_out_s_rdata   ),
      .out_s_rresp   ( bram_out_s_rresp   ),
      .out_s_rvalid  ( bram_out_s_rvalid  ),
      .in_s_rready   ( bram_in_s_rready   ),
      
      //------------------------ Write Address Channel ------------------------------//
      .in_s_awaddr   ( bram_in_s_awaddr   ),
      .in_s_awvalid  ( bram_in_s_awvalid  ),
      .out_s_awready ( bram_out_s_awready ),
      
      //------------------------ Write Data Channel ---------------------------------//
      .in_s_wdata    ( bram_in_s_wdata    ),
      .in_s_wvalid   ( bram_in_s_wvalid   ),
      .out_s_wready  ( bram_out_s_wready  ),
      
      //------------------------ Write Response Channel -----------------------------//
      .out_s_bresp   ( bram_out_s_bresp   ),
      .out_s_bvalid  ( bram_out_s_bvalid  ),
      .in_s_bready   ( bram_in_s_bready   ),
      
      //------------------------ Bram Interface -------------------------------------//
      .out_Di        ( bram_out_Di        ),
      .in_Do         ( bram_in_Do         ),
      .out_A         ( bram_out_A         ),
      .out_EN        ( bram_out_EN        ),
      .out_WE        ( bram_out_WE        )
  );

  //------------------------ Reg Slave ----------------------------------------------//
  logic reg_req;
  
  logic reg_aclk;
  logic reg_aresetn;
  logic reg_in_s_arvalid;
  logic reg_out_s_arready;
  logic [pDATA_WIDTH - 1 : 0] reg_out_s_rdata;
  logic reg_out_s_rvalid;
  logic reg_in_s_rready;
  logic reg_in_s_awvalid;
  logic reg_out_s_awready;
  logic [pDATA_WIDTH - 1 : 0] reg_in_s_wdata;
  logic reg_in_s_wvalid;
  logic reg_out_s_wready;
  logic reg_ap_done;
  logic [pDATA_WIDTH - 1 : 0] reg_data;

  assign reg_req = (in_s_araddr == 12'h00);

  assign reg_aclk = aclk;
  assign reg_aclk = aresetn;

  // This signal will decide whether axi4_lite_slave_reg can start state machine.
  assign reg_in_s_arvalid = reg_req;

  assign reg_in_s_rready  = in_s_rready;
  assign reg_in_s_awvalid = in_s_awvalid;
  assign reg_in_s_wdata   = in_s_wdata;
  assign reg_in_s_wvalid  = in_s_wvalid;
  assign reg_ap_done      = in_ap_done;

  axi4_lite_slave_reg #(
    .pDATA_WIDTH ( pDATA_WIDTH )
  ) u_axi4_lite_slave_reg (
    .aclk          ( reg_aclk          ),
    .aresetn       ( reg_aresetn       ),
    .in_s_arvalid  ( reg_in_s_arvalid  ),
    .out_s_arready ( reg_out_s_arready ),
    .out_s_rdata   ( reg_out_s_rdata   ),
    .out_s_rvalid  ( reg_out_s_rvalid  ),
    .in_s_rready   ( reg_in_s_rready   ),
    .in_s_awvalid  ( reg_in_s_awvalid  ),
    .out_s_awready ( reg_out_s_awready ),
    .in_s_wdata    ( reg_in_s_wdata    ),
    .in_s_wvalid   ( reg_in_s_wvalid   ),
    .out_s_wready  ( reg_out_s_wready  ),
    .in_ap_done    ( reg_ap_done       ),
    .out_reg_data  ( reg_data          )
  );

//------------------------ Flag -----------------------------------------------------//
  logic flag_bram;
  logic flag_reg;

  // Showing whether it is accessing BRAM
  always_ff @( posedge aclk or negedge aresetn ) begin : FLAG_BRAM
    if (!aresetn) flag_bram <= 1'b0;
    else if (bram_req) flag_bram <= 1'b1;
    // The next cycle will return IDLE
    else if (bram_out_s_bvalid || bram_out_s_rvalid) flag_bram <= 1'b0;
    else flag_bram <= flag_bram;
  end

  // Showing whether it is accessing reg
  always_ff @( posedge aclk or negedge aresetn ) begin : FLAG_REG
    if (!aresetn) flag_reg <= 1'b0;
    else if (reg_req) flag_reg <= 1'b1;
    // The next cycle will return IDLE
    else if (reg_out_s_wready || out_s_rvalid) flag_reg <= 1'b0;
    else flag_reg <= flag_reg;
  end

//------------------------ Master Interface -----------------------------------------//
  //------------------------ Read Address Channel -----------------------------------//
  assign out_s_arready = (!flag_bram) && (!flag_reg);
  
  //------------------------ Read Data Channel --------------------------------------//
  assign out_s_rdata  = ({pDATA_WIDTH{flag_bram}} & bram_out_s_rdata) 
                     || ({pDATA_WIDTH{flag_reg }} & reg_out_s_rdata );
  assign out_s_rresp  = 2'b00;  
  assign out_s_rvalid = (flag_bram && bram_out_s_rvalid)
                     || (flag_reg  && reg_out_s_rvalid );

  //------------------------ Write Address Channel ----------------------------------//
  assign out_s_awready = (flag_bram && bram_out_s_awready)
                      || (flag_reg  && reg_out_s_awready ); 
  
  assign out_s_bresp   = 2'b00;
  // Only BRAM slave has response.
  assign out_s_bvalid  = bram_out_s_bvalid;

//------------------------ BRAM Interface ------------------------------------------//
  assign out_Di = bram_out_Di;
  assign out_A  = bram_out_A;
  assign out_EN = bram_out_EN;
  assign out_WE = bram_out_WE;

//------------------------ System Interface ----------------------------------------//
  assign out_reg_data = reg_data;

endmodule