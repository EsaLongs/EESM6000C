///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 23.02.2025 18:20:29
// Design Name: AXI4 Stream for BRAM
// Module Name: axi4_stream_slave_bram
// Project Name: 
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a AXI4 Stream interface for slave
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments: This kind of axi4 stream is used for a simple BRAM.
// 
///////////////////////////////////////////////////////////////////////////////////////

module axi4_stream_slave_bram #(
  parameter DATA_NUM = 11,
  parameter DATA_WIDTH = 32
  ) (
//------------------------ Global Signals -------------------------------------------//
  input  logic aclk,      // Global clk
  input  logic aresetn,   // Global rst_n
  
//------------------------ Data Channel ---------------------------------------------//
  input  logic in_s_tvalid,    // Indicate the data from master is valid
  output logic out_s_tready,   // Indicate slave is ready to get data
  
  input  logic [DATA_WIDTH - 1 : 0] in_s_tdata,   // Read data

//------------------------ Data Modification ----------------------------------------//
  // Don't consider TSTRB in this design.
  
  input  logic [DATA_WIDTH / 8 - 1 : 0] in_s_tkeep,
  input  logic in_s_tlast,

//------------------------ Transport Modification -----------------------------------//
  // We don't consider this part in this design.
  // TID
  // TDEST
  // TUSER

//------------------------ Bram Interface -------------------------------------------//
  output logic [DATA_WIDTH - 1 : 0] out_Di,   // Write data
  input  logic [DATA_WIDTH - 1 : 0] in_Do,    // Read data
  output logic [ADDR_WIDTH - 1 : 0] out_A,    // Address

  output logic out_EN,   // Bram enable
  
  // Bram write enable (specific to which byte)
  output logic [DATA_WIDTH / 8 - 1 : 0] out_WE
);


  function integer STAGE_NUM_RETURN();
    integer i;
    for (i = 0; i < OP_NUM; i = i + 1) begin
      if (
          (
            (((1 + i) * i / 2) >  (OP_NUM - 3))
        || (((1 + i) * i / 2) == (OP_NUM - 3)) 
          )
      && (
          (OP_NUM - 3) > (i * (i - 1) / 2)
          )
        ) begin
          STAGE_NUM_RETURN = i + 1;
          return STAGE_NUM_RETURN;
      end else STAGE_NUM_RETURN = STAGE_NUM_RETURN;
    end
  endfunction


  localparam ADDR_WIDTH = ;

//------------------------ Handshake Signal -----------------------------------------//
  logic data_hsked;
  assign data_hsked = in_s_tvalid && out_s_tready;

//------------------------ State Machine --------------------------------------------//
  localparam STATE_IDLE = 1'd0; // IDLE state
  localparam STATE_TRAN = 1'd1; // Transfer_state
  

  logic state_now;
  logic state_nxt;

  logic state_is_idle;
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

  assign state_nxt = ({2{state_idle_exit2rdata_ena}}  & STATE_RDATA     )
                   | ({2{state_idle_exit2wdata_ena}}  & STATE_WDATA     )
                   | ({2{state_rdata_exit_ena}}       & STATE_IDLE      )
                   | ({2{state_wdata_exit_ena}}       & STATE_WRESP     )
                   | ({2{state_wresp_exit_ena}}       & STATE_IDLE      );

  always_ff @( posedge aclk or negedge aresetn ) begin : STATE_MACHINE
    if (!aresetn) state_now <= 2'b0;
    else if (state_exit_ena) state_now <= state_nxt;
    else state_now <= state_now;
  end

//------------------------ Address Reg ----------------------------------------------//
  // Here we need a register to store addr because bram doesn't store the write 
  logic [ADDR_WIDTH - 1 : 0] addr_wr;

  always_ff @( posedge aclk or negedge aresetn ) begin : ADDR_WR
    if (!aresetn) addr_wr <= {ADDR_WIDTH{1'b0}};
    else if (state_idle_exit2wdata_ena) addr_wr <= in_s_awaddr;
    else addr_wr <= addr_wr;
  end

//------------------------ Bram Interface -------------------------------------------//
  assign out_A  = (in_s_araddr & {ADDR_WIDTH{state_idle_exit2rdata_ena}})
                | (addr_wr & {ADDR_WIDTH{state_wdata_exit_ena}});

  // EN need to last one more cycle for read because BRAM uses EN to assign Do
  assign out_EN = state_idle_exit2rdata_ena || state_is_rdata
               || state_wdata_exit_ena;

  // Here we assume all the bytes will be valid when writing
  // When state_is_wdata, all bytes will be written in to BRAM.
  assign out_WE = {(DATA_WIDTH / 8){state_wdata_exit_ena}};

  assign out_Di = {DATA_WIDTH{state_wdata_exit_ena}} & in_s_wdata;

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