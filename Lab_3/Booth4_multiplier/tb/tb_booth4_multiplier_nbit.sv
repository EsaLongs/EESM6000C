///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 21.02.2025 20:20:12
// Design Name: 
// Module Name: tb_booth4_multiplier_nbit
// Project Name: Booth multiplier design
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: https://github.com/EsaLongs/EESM6000C/tree/main/Lab_3/Booth4_multiplier
// 
// Dependencies:
// 
// Revision: 0.01
// 
// Additional Comments:
// 
///////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps

module tb_booth4_multiplier_nbit ();
//------------------------ Prepare --------------------------------------------------//
  // **** Modify the MUL_SIZE to verify different width.
  parameter MUL_SIZE   = 32;
  parameter ADDER_SIZE = 2 * MUL_SIZE;
  parameter TEST_NUM   = 20;
  parameter CLK_PERIOD = 10;

  // **** Actually the width of "in_op1" and "in_op2" are both `MUL_SIZE`, but the
  //      problem that if we use exp_res = in_op1 * in_op2, the width of "exp_res" 
  //      will be set as same as the width of "in_op1" and "in_op2". Therefore, we 
  //      should extend sign bit to `ADDER_SIZE` width.
  logic [ADDER_SIZE - 1 : 0] in_op1, in_op2;
  logic [ADDER_SIZE - 1 : 0] out_res;
  logic [ADDER_SIZE - 1 : 0] exp_res;

  logic in_op1_signed, in_op2_signed;
  logic in_valid, out_ready, in_ready, out_valid;
  logic clk, rst_n;

  // **** Clock Generation
  initial begin
    clk = 0;
    forever #(CLK_PERIOD / 2) clk = ~clk;  // 100MHz clock
  end

  // **** Reset Generation
  initial begin
    rst_n = 0;
    repeat(2) @(posedge clk);  // Hold reset for 2 cycles
    rst_n = 1;
  end

  // **** Instantiate
  booth4_multiplier_nbit #(
      .MUL_SIZE ( MUL_SIZE )
      ) tb_booth4_multiplier (
    .in_op1         ( in_op1[MUL_SIZE - 1 : 0] ),
    .in_op2         ( in_op2[MUL_SIZE - 1 : 0] ),
    .out_res        ( out_res                  ),
    .in_op1_signed  ( in_op1_signed            ),
    .in_op2_signed  ( in_op2_signed            ),
    .in_valid       ( in_valid                 ),
    .out_ready      ( out_ready                ),
    .in_ready       ( in_ready                 ),
    .out_valid      ( out_valid                ),
    .clk            ( clk                      ),
    .rst_n          ( rst_n                    )
  );
    
  // **** Error count
  int err_uu = 0;
  int err_ss = 0;
  int err_su = 0;
  int err_us = 0;

//------------------------ Simulation -----------------------------------------------//
  initial begin
    wait(rst_n);
    $display("Starting Multiplier Test");
    test_uu();  // Unsigned * Unsigned
    test_ss();  // Signed   * Signed
    test_su();  // Signed   * Unsigned
    test_us();  // Unsigned * Signed
    // **** Final report
    $display("\n%0d-bit width test finished", MUL_SIZE);
    $display("\n[TEST SUMMARY]\nUnsigned * Unsigned errors : %0d\nSigned   * Signed   errors : %0d\nSigned   * Unsigned errors : %0d\nUnsigned * Signed   errors : %0d",
             err_uu, err_ss, err_su, err_us);
    $finish();
  end

//------------------------ Task Define ----------------------------------------------//
  /////////////////////////////////////////////////////////////////////////////////////
  // Unsigned * Unsigned test
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic test_uu();
    repeat(TEST_NUM) begin
      config_set(0, 0, 1, 1); 
      // **** Generate random inputs
      in_op1  = $unsigned(unsign_extend_random());
      in_op2  = $unsigned(unsign_extend_random());
      exp_res = $unsigned(in_op1 * in_op2);

      // **** Deassert valid signal
      @(posedge clk);
      config_set(0, 0, 0, 1); 

      // **** Wait for valid output
      wait(out_valid);
      #(CLK_PERIOD / 2);

      // **** Result check
      check("Unsigned * Unsigned");
      @(posedge clk);
    end
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // Signed * Signed test
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic test_ss();
    repeat(TEST_NUM) begin
      config_set(1, 1, 1, 1); 
      // **** Generate random inputs
      in_op1  = $signed(sign_extend_random());
      in_op2  = $signed(sign_extend_random());
      exp_res = $signed(in_op1 * in_op2);

      // **** Deassert valid signal
      @(posedge clk);
      config_set(0, 0, 0, 1); 

      // **** Wait for valid output
      wait(out_valid);
      #(CLK_PERIOD / 2);

      // **** Result check
      check("Signed * Signed");
      @(posedge clk);
    end
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // Signed * Unsigned test
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic test_su();
    repeat(TEST_NUM) begin
      config_set(1, 0, 1, 1); 
      // **** Generate random inputs
      in_op1  = $signed(sign_extend_random());
      in_op2  = $unsigned(unsign_extend_random());
      exp_res = $signed(in_op1 * in_op2);

      // **** Deassert valid signal
      @(posedge clk);
      config_set(0, 0, 0, 1); 

      // **** Wait for valid output
      wait(out_valid);
      #(CLK_PERIOD / 2);

      // **** Result check
      check("Signed * Unsigned");
      @(posedge clk);
    end
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // Unsigned * Signed test
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic test_us();
    repeat(TEST_NUM) begin
      config_set(0, 1, 1, 1); 
      // **** Generate random inputs
      in_op1  = $unsigned(unsign_extend_random());
      in_op2  = $signed(sign_extend_random());
      exp_res = $signed(in_op1 * in_op2);

      // **** Deassert valid signal
      @(posedge clk);
      config_set(0, 0, 0, 1); 

      // **** Wait for valid output
      wait(out_valid);
      #(CLK_PERIOD / 2);

      // **** Result check
      check("Unsigned * Signed");
      @(posedge clk);
    end
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // Check
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic check(
    input string msg
  );
    if (out_res !== exp_res) begin
      $display("[%s CHECK FAIL] %0dns: %h * %h = %h (Expected %h)", 
               msg, $time, in_op1, in_op2, out_res, exp_res);
      if (msg == "Unsigned * Unsigned") err_uu = err_uu + 1;
      else if (msg == "Signed * Signed") err_ss = err_ss + 1;
      else if (msg == "Signed * Unsigned") err_su = err_su + 1;
      else err_us = err_us + 1;
    end else begin
      $display("[%s CKECK PASS] %0dns: Result matches: %h * %h = %h (Expected %h)", 
               msg, $time, in_op1, in_op2, out_res, exp_res);
    end
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // Config
  /////////////////////////////////////////////////////////////////////////////////////
  task automatic config_set(
    input logic op1_signed,
    input logic op2_signed,
    input logic valid,
    input logic ready
  );
    in_op1_signed = op1_signed;
    in_op2_signed = op2_signed;
    in_valid      = valid;
    in_ready      = ready;
  endtask

//------------------------ Function Define ------------------------------------------//
  // **** Define function generate random number
  function automatic logic [MUL_SIZE - 1 : 0] random_gen();
    for (int i = 0; i < MUL_SIZE; i = i + 1) begin
      random_gen[i] = $random;
    end
    return random_gen;
  endfunction

  function automatic logic [2 * MUL_SIZE - 1 : 0] unsign_extend_random();
    unsign_extend_random = {{MUL_SIZE{1'b0}}, random_gen()};
    return unsign_extend_random;
  endfunction

  function automatic logic [2 * MUL_SIZE - 1 : 0] sign_extend_random();
    automatic logic [MUL_SIZE - 1 : 0] temp;
    temp = random_gen();
    sign_extend_random = {{MUL_SIZE{temp[MUL_SIZE - 1]}}, temp};
    return sign_extend_random;
  endfunction

endmodule