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
  parameter ADDR_WIDTH = 12,
  parameter BRAM_SIZE  = 11,
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

//------------------------ Parameter Calculation ------------------------------------//
  // Calculation BRAM_ADDR_WIDTH according to BRAM_SIZE
  function integer BRAM_ADDR_WIDTH_RETURN();
    integer i;
    for (i = 0; i < $clog2(BRAM_SIZE); i = i + 1) begin
      if ((2 ** i + 1) > BRAM_SIZE) begin
        BRAM_ADDR_WIDTH_RETURN = i;
        return BRAM_ADDR_WIDTH_RETURN;
      end
    end
  endfunction

  localparam int BRAM_ADDR_WIDTH = BRAM_ADDR_WIDTH_RETURN();

//------------------------ Module Instaniate ----------------------------------------//
  


endmodule