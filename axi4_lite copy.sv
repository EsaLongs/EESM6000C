///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: AXI4 Lite
// Module Name: axi4_lite_slave
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a AXI4 Lite interface for salve
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: Nothing
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_lite_slave #(
  parameter ADDR_WIDTH = 32,
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
  input  logic in_s_rready,    // Indicate master is ready to recieve the data

//------------------------ Write Address Channel ------------------------------------//
  input  logic [ADDR_WIDTH - 1 : 0] in_s_awaddr,   // Write address
  
  // Ignore AWCACHE and AWPROT as a slave.
  // input  logic [3 : 0] in_s_awcache,
  // input  logic [2 : 0] in_s_awprot,
  
  input  logic in_s_awvalid,    // Indicate write address from master is valid
  output logic out_s_awready,   // Indicate slave is ready to get write address

//------------------------ Write Data Channel ---------------------------------------//
  input  logic [DATA_WIDTH - 1 : 0] in_s_wdata,   // Write data
  
  // Write strobes, indicating which byte(s) is(are) valid
  input  logic [DATA_WIDTH / 8 - 1 : 0] in_s_wstrb,

//------------------------ Write Response Channel -----------------------------------//
  output logic [1 : 0] out_s_bresp,   // Indicating status of write data transfer

  output logic out_s_bvalid,   // Indicate the response from slave is valid
  input  logic in_s_bready     // Indicate the master is ready to recieve response
);

  // +===========================================================================+
  // |R/BRESP [1 : 0] | Response | Meaning                                       |
  // +---------------------------------------------------------------------------|
  // |       00       |   OKAY   | Normal access successful or exclusive failure |
  // +---------------------------------------------------------------------------|
  // |       01       |   EXOKAY | Exclusive access successful                   |
  // +---------------------------------------------------------------------------|
  // |       10       |   SLVERR | Slave recieved access but returned error      |
  // +---------------------------------------------------------------------------|
  // |       11       |   DECERR | No slave at the transcation address           |
  // +===========================================================================+

    localparam no_of_registers = 32;

    logic [DATA_WIDTH-1 : 0] register [no_of_registers-1 : 0];
    logic [ADDR_WIDTH-1 : 0]    addr;
    logic  write_addr;
    logic  write_data;

    typedef enum logic [2 : 0] {IDLE,WRITE_CHANNEL,WRESP__CHANNEL, RADDR_CHANNEL, RDATA__CHANNEL} state_type;
    state_type state , next_state;

    // AR
    assign S_ARREADY = (state == RADDR_CHANNEL) ? 1 : 0;
    // 
    assign S_RVALID = (state == RDATA__CHANNEL) ? 1 : 0;
    assign S_RDATA  = (state == RDATA__CHANNEL) ? register[addr] : 0;
    assign S_RRESP  = (state == RDATA__CHANNEL) ?2'b00:0;
    // AW
    assign S_AWREADY = (state == WRITE_CHANNEL) ? 1 : 0;
    // W
    assign S_WREADY = (state == WRITE_CHANNEL) ? 1 : 0;
    assign write_addr = S_AWVALID && S_AWREADY;
    assign write_data = S_WREADY &&S_WVALID;
    // B
    assign S_BVALID = (state == WRESP__CHANNEL) ? 1 : 0;
    assign S_BRESP  = (state == WRESP__CHANNEL )? 0:0;

    integer i;

    always_ff @(posedge ACLK) begin
        // Reset the register array
        if (~ARESETN) begin
            for (i = 0; i < 32; i++) begin
                register[i] <= 32'b0;
            end
        end
        else begin
            if (state == WRITE_CHANNEL) begin
                register[S_AWADDR] <= S_WDATA;
            end
            else if (state == RADDR_CHANNEL) begin
                addr <= S_ARADDR;
            end
        end
    end

    always_ff @(posedge ACLK) begin
        if (!ARESETN) begin
            state <= IDLE;
        end
        else begin
            state <= next_state;
        end
    end

    always_comb begin
		case (state)
            IDLE : begin
                if (S_AWVALID) begin
                    next_state = WRITE_CHANNEL;
                end 
                else if (S_ARVALID) begin
                    next_state = RADDR_CHANNEL;
                end 
                else begin
                    next_state = IDLE;
                end
            end
            RADDR_CHANNEL   : if (S_ARVALID && S_ARREADY ) next_state = RDATA__CHANNEL;
            RDATA__CHANNEL  : if (S_RVALID  && S_RREADY  ) next_state = IDLE;
            WRITE_CHANNEL   : if (write_addr &&write_data) next_state = WRESP__CHANNEL;
            WRESP__CHANNEL  : if (S_BVALID  && S_BREADY  ) next_state = IDLE;
            default : next_state = IDLE;
        endcase
    end
endmodule



