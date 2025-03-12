//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: TANG Yue
// 
// Create Date: 08/03/2025 10:38:55 AM
// Design Name: 
// Module Name: fir_tb
// Project Name: FIR
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: https://github.com/EsaLongs/EESM6000C/tree/main/Lab_3/Fir
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module fir_tb ();
  parameter pADDR_WIDTH    = 32,   // Don't change addr width

  parameter pDATA_WIDTH    = 32,
  parameter TAP_NUM_WIDTH  = 10,
  parameter DATA_NUM_WIDTH = 10,
  parameter TAP_NUM        = 11,
  parameter DATA_NUM       = 600

//------------------------ Port Declare ---------------------------------------------//
  wire                                awready;
  wire                                wready;
  reg                                 awvalid;
  reg         [(pADDR_WIDTH - 1) : 0] awaddr;
  reg                                 wvalid;
  reg signed  [(pDATA_WIDTH - 1) : 0] wdata;
  wire                                arready;
  reg                                 rready;
  reg                                 arvalid;
  reg         [(pADDR_WIDTH - 1) : 0] araddr;
  wire                                rvalid;
  wire signed [(pDATA_WIDTH - 1) : 0] rdata;

  reg                                ss_tvalid;
  reg signed [(pDATA_WIDTH - 1) : 0] ss_tdata;
  reg                                ss_tlast;
  wire                               ss_tready;
  
  reg                                 sm_tready;
  wire                                sm_tvalid;
  wire signed [(pDATA_WIDTH - 1) : 0] sm_tdata;
  wire                                sm_tlast;

  reg axis_clk;
  reg axis_rst_n;

  // ram for tap
  wire [pDATA_WIDTH / 8 - 1 : 0] tap_WE;
  wire                           tap_EN;
  wire [pDATA_WIDTH     - 1 : 0] tap_Di;
  wire [TAP_NUM_WIDTH   - 1 : 0] tap_A;
  wire [pDATA_WIDTH     - 1 : 0] tap_Do;

  // ram for data RAM
  wire                          data_EN;
  wire [pDATA_WIDTH    - 1 : 0] data_Di;
  wire [DATA_NUM_WIDTH - 1 : 0] data_A;
  wire [pDATA_WIDTH    - 1 : 0] data_Do;

//------------------------ Module Instantiate ---------------------------------------//
  fir_top #(
    .pDATA_WIDTH    ( pDATA_WIDTH    ),
    .TAP_NUM_WIDTH  ( TAP_NUM_WIDTH  ),
    .DATA_NUM_WIDTH ( DATA_NUM_WIDTH )
  ) fir_DUT(
    //------------------------ Axi4 Lite Interface ----------------------------------//
    .out_s_awready ( awready    ),
    .out_s_wready  ( wready     ),
    .in_s_awvalid  ( awvalid    ),
    .in_s_awaddr   ( awaddr     ),
    .in_s_wvalid   ( wvalid     ),
    .in_s_wdata    ( wdata      ),
    .out_s_arready ( arready    ),
    .in_s_rready   ( rready     ),
    .in_s_arvalid  ( arvalid    ),
    .in_s_araddr   ( araddr     ),
    .out_s_rvalid  ( rvalid     ),
    .out_s_rdata   ( rdata      ),

    //------------------------ Axi4 Stream Interface --------------------------------//
    .in_ss_tvalid  ( ss_tvalid  ),
    .in_ss_tdata   ( ss_tdata   ),
    .in_ss_tlast   ( ss_tlast   ),
    .out_ss_tready ( ss_tready  ),
    .in_sm_tready  ( sm_tready  ),
    .out_sm_tvalid ( sm_tvalid  ),
    .out_sm_tdata  ( sm_tdata   ),
    .out_sm_tlast  ( sm_tlast   ),

    //------------------------ Tap RAM Interface ------------------------------------//
    .out_tap_WE    ( tap_WE     ),
    .out_tap_EN    ( tap_EN     ),
    .out_tap_Di    ( tap_Di     ),
    .out_tap_A     ( tap_A      ),
    .in_tap_Do     ( tap_Do     ),

    //------------------------ Data RAM Interface -----------------------------------//
    .out_data_EN   ( data_EN    ),
    .out_data_Di   ( data_Di    ),
    .out_data_A    ( data_A     ),
    .in_data_Do    ( data_Do    ),

    //------------------------ Clk and Reset ----------------------------------------//
    .aclk          ( axis_clk   ),
    .aresetn       ( axis_rst_n )
  );
    
  data_ram u_data_ram (
    .A    ( data_A   ),
    .CE   ( data_EN  ),
    .CLK  ( axis_clk ),
    .DIN  ( data_Di  ),
    .DOUT ( data_Do  )
  );

  tap_bram u_tap_ram (
    .A    ( tap_A    ),
    .CLK  ( axis_clk ),
    .DIN  ( tap_Di   ),
    .DOUT ( tap_Do   ),
    .EN   ( tap_EN   ),
    .WE   ( tap_WE   )
  );

//------------------------ Data Prepare ---------------------------------------------//
  // **** Here "Din_list" will store the data waiting to be calculated. "golden_list"
  //      will store the expected calculation result.
  reg signed [ pDATA_WIDTH - 1 : 0] Din_list    [0 : DATA_NUM - 1];
  reg signed [ pDATA_WIDTH - 1 : 0] golden_list [0 : DATA_NUM - 1];

  initial begin
    $dumpfile("fir.vcd");
    $dumpvars();
  end

  // **** Create clock.
  initial begin
    axis_clk = 0;
    forever begin
      #5 axis_clk = (~axis_clk);
    end
  end

  // **** Reset.
  initial begin
    axis_rst_n = 0;
    @(posedge axis_clk); 
    @(posedge axis_clk);
    axis_rst_n = 1;
  end 

  // **** Read file.
  reg [pDATA_WIDTH - 1 : 0]  data_length;
  integer Din, golden, input_data, golden_data, m;
  initial begin
    data_length = 0;
    Din = $fopen("C:/Users/ytangdg/project_EESM6000C_lab3/samples_triangular_wave.txt","r");
    golden = $fopen("C:/Users/ytangdg/project_EESM6000C_lab3/out_gold.txt","r");
    for(m=0;m<DATA_NUM;m=m+1) begin
      input_data = $fscanf(Din,"%d", Din_list[m]);
      golden_data = $fscanf(golden,"%d", golden_list[m]);
      data_length = data_length + 1;
    end
  end

  // **** Tap RAM data.
  reg signed [pDATA_WIDTH - 1 : 0] coef[0:10];
  initial begin
    coef[0]  =  32'd0;
    coef[1]  = -32'd10;
    coef[2]  = -32'd9;
    coef[3]  =  32'd23;
    coef[4]  =  32'd56;
    coef[5]  =  32'd63;
    coef[6]  =  32'd56;
    coef[7]  =  32'd23;
    coef[8]  = -32'd9;
    coef[9]  = -32'd10;
    coef[10] =  32'd0;
  end

  // **** Data RAM data.
  integer i;
  initial begin
    $display("------------Start simulation-----------");
    ss_tvalid = 0;
    $display("----Start the data input(AXI-Stream)----");
    for(i=0;i<(data_length-1);i=i+1) begin
      // **** Write input data to data RAM.
      ss_tlast = 0; ss(Din_list[i]);
    end
    // **** Check configure register (check idle = 0).
    config_read_check(32'h00000000, 32'h00, 32'h0000_000f);
    ss_tlast = 1; ss(Din_list[DATA_NUM - 1]);
    $display("------End the data input(AXI-Stream)------");
  end

//------------------------ Simulate -------------------------------------------------//
  integer k;
  reg error;
  reg error_coef;
  reg status_error;

  // **** Check Core Function.
  initial begin
    error = 0; 
    status_error = 0;
    sm_tready = 1;
    wait (sm_tvalid);
    for(k=0;k < data_length;k=k+1) begin
      // **** Compare calculation result with golden result.
      sm(golden_list[k],k);
    end
    // **** Check configure register (check ap_done = 1) (check ap_idle = 1).
    config_read_check(32'h00000000, 32'h02, 32'h0000_0002);
    config_read_check(32'h00000000, 32'h04, 32'h0000_0004);
    if (error == 0 & error_coef == 0) begin
      $display("---------------------------------------------");
      $display("-----------Congratulations! Pass-------------");
    end
    else begin
      $display("--------Simulation Failed---------");
    end
    $finish;
  end

  // **** Check tap RAM written function and start simulation.
  initial begin
    error_coef = 0;
    $display("----Start the coefficient input(AXI-lite)----");
    // **** Write "TAP_NUM" and "DATA_NUM" to configure register.
    config_write(32'h10000000, TAP_NUM);
    config_write(32'h20000000, data_length);
    for(k=0; k< TAP_NUM; k=k+1) begin
    // **** Write tap data to tap RAM.
      config_write(32'h30000000+k, coef[k]);
    end
    awvalid <= 0; wvalid <= 0;
    // **** Check data in tao RAM.
    $display(" Check Coefficient ...");
    for(k=0; k < TAP_NUM; k=k+1) begin
      config_read_check(32'h30000000+k, coef[k], 32'hffffffff);
    end
    arvalid <= 0;
    $display(" Tape programming done ...");
    // **** Start simulation (set ap_start to be 1)
    $display(" Start FIR");
    @(posedge axis_clk) config_write(32'h00000000, 32'h0000_0001);
    $display("----End the coefficient input(AXI-lite)----");
  end

//------------------------ Prevent Hang ---------------------------------------------//
  integer timeout = (1000000);
  initial begin
    while(timeout > 0) begin
      @(posedge axis_clk);
      timeout = timeout - 1;
    end
    $display($time, "Simualtion Hang ....");
    $finish;
  end

//------------------------ Task Define ----------------------------------------------//
  //------------------------ Axi4 Lite Write ----------------------------------------//
  task config_write;
    input [pDATA_WIDTH - 1 : 0] addr;
    input [pDATA_WIDTH - 1 : 0] data;
    begin
      awvalid <= 0; wvalid <= 0;
      arvalid <= 0; rready <= 0;
      @(posedge axis_clk);
      awvalid <= 1; awaddr <= addr;
      wvalid  <= 1; wdata <= data;
      @(posedge axis_clk);
      while (!wready) @(posedge axis_clk);
    end
  endtask

  //------------------------ Axi4 Lite Read -----------------------------------------//
  task config_read_check;
    input        [pDATA_WIDTH - 1 : 0] addr;
    input signed [pDATA_WIDTH - 1 : 0] exp_data;
    input        [pDATA_WIDTH - 1 : 0] mask;
    begin
      arvalid <= 0;
      awvalid <= 0; wvalid <= 0;
      @(posedge axis_clk);
      arvalid <= 1; araddr <= addr;
      rready <= 1;
      @(posedge axis_clk);
      while (!rvalid) @(posedge axis_clk);
      if( (rdata & mask) != (exp_data & mask)) begin
        $display("ERROR: exp = %d, rdata = %d", exp_data, rdata);
        error_coef <= 1;
      end else begin
        $display("OK: exp = %d, rdata = %d", exp_data, rdata);
      end
    end
  endtask

  //------------------------ Axi4 Stream Write (slave) ------------------------------//
  task ss;
    input  signed [pDATA_WIDTH - 1 : 0] in1;
    begin
      ss_tvalid <= 1;
      ss_tdata  <= in1;
      @(posedge axis_clk);
      while (!ss_tready) begin
        @(posedge axis_clk);
      end
    end
  endtask

  //------------------------ Axi4 Stream Write (master) -----------------------------//
  task sm;
    input signed [pDATA_WIDTH - 1 : 0] in2;  // golden data
    input        [pDATA_WIDTH - 1 : 0] pcnt; // pattern count
    begin
      sm_tready <= 1;
      @(posedge axis_clk) 
      wait(sm_tvalid);
      while(!sm_tvalid) @(posedge axis_clk);
      if (sm_tdata != in2) begin
        $display("[ERROR] [Pattern %d] Golden answer: %d, Your answer: %d", pcnt, in2, sm_tdata);
        error <= 1;
      end
      else begin
        $display("[PASS] [Pattern %d] Golden answer: %d, Your answer: %d", pcnt, in2, sm_tdata);
      end
      @(posedge axis_clk);
    end
  endtask
endmodule
