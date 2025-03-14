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
  // **** Modify the TB_MUL_SIZE to verify different width.
  parameter TB_MUL_SIZE = 64;
  parameter TB_ADDER_SIZE = 2 * TB_MUL_SIZE;

  //  **** Actually the width of "in_op1" and "in_op2" are both `TB_MUL_SIZE`, but the
  //       problem that if we use exp_res = in_op1 * in_op2, the width of "exp_res" 
  //       will be set as same as the width of "in_op1" and "in_op2". Therefore, we 
  //       should extend sign bit to `TB_ADDER_SIZE` width.
  logic [TB_ADDER_SIZE - 1 : 0] in_op1, in_op2;
  logic [TB_ADDER_SIZE - 1 : 0] exp_res;
  logic [TB_ADDER_SIZE - 1 : 0] out_res;

  logic in_op1_signed, in_op2_signed;
  logic in_valid, out_ready, in_ready, out_valid;
  logic clk, rst_n;

  // **** Clock Generation
  initial begin
    clk = 0;
    forever #5 clk = ~clk;  // 100MHz clock
  end

  // **** Reset Generation
  initial begin
    rst_n = 0;
    repeat(3) @(posedge clk);  // Hold reset for 3 cycles
    rst_n = 1;
  end

  // **** Instantiate the booth4_multiplier module
  booth4_multiplier_nbit #(.MUL_SIZE  (TB_MUL_SIZE)) tb_booth4_multiplier (
    .in_op1         ( in_op1        ),
    .in_op2         ( in_op2        ),
    .out_res        ( out_res       ),
    .in_op1_signed  ( in_op1_signed ),
    .in_op2_signed  ( in_op2_signed ),
    .in_valid       ( in_valid      ),
    .out_ready      ( out_ready     ),
    .in_ready       ( in_ready      ),
    .out_valid      ( out_valid     ),
    .clk            ( clk           ),
    .rst_n          ( rst_n         )
  );
    
  // **** Error count
  int err_uu = 0;
  int err_ss = 0;
  int err_su = 0;
  int err_us = 0;

//------------------------ Simulation -----------------------------------------------//
  initial begin
    wait(rst_n);

    test_uu();  // Unsigned * Unsigned
    test_ss();  // Signed   * Signed
    test_su();  // Signed   * Unsigned
    test_us();  // Unsigned * Signed

    // Final report
    $display("\n[TEST SUMMARY]\nUnsigned * Unsigned errors : %0d\nSigned   * Signed   errors : %0d\nSigned   * Unsigned errors : %0d\nUnsigned * Signed   errors : %0d",
             err_uu, err_ss, err_su, err_us);
    $finish();
  end

//------------------------ Task Define ----------------------------------------------//
  task automatic test_uu();
  logic [TB_MUL_SIZE   - 1 : 0] op1_temp, op2_temp;
    repeat(20) begin
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

      // **** Result check
      if (out_res !== exp_res) begin
        $display("[UU CHECK FAIL] %0dns: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
        err_uu = err_uu + 1;
      end
      else begin
        $display("[UU CKECK PASS] %0dns: Result matches: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
      end
      @(posedge clk);
    end
  endtask

  task automatic test_ss();
    repeat(20) begin
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

      // **** Result check
      if (out_res !== exp_res) begin
        $display("[SS CHECK FAIL] %0dns: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
        err_ss = err_ss + 1;
      end
      else begin
        $display("[SS CKECK PASS] %0dns: Result matches: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
      end
      @(posedge clk);
    end
  endtask

  task automatic test_su();
    repeat(20) begin
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

      // **** Result check
      if (out_res !== exp_res) begin
        $display("[SU CHECK FAIL] %0dns: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
        err_su = err_su + 1;
      end
      else begin
        $display("[SU CKECK PASS] %0dns: Result matches: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
      end
      @(posedge clk);
    end
  endtask

  task automatic test_us();
    repeat(20) begin
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

      // **** Result check
      if (out_res !== exp_res) begin
        $display("[US CHECK FAIL] %0dns: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
        err_us = err_us + 1;
      end
      else begin
        $display("[US CKECK PASS] %0dns: Result matches: %h * %h = %h (Expected %h)", 
                 $time, in_op1, in_op2, out_res, exp_res);
      end
      @(posedge clk);
    end
  endtask

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
  function automatic logic [TB_MUL_SIZE - 1 : 0] random_gen();
    for (int i = 0; i < TB_MUL_SIZE; i = i + 1) begin
      random_gen[i] = $random;
    end
    return random_gen;
  endfunction

  function automatic logic [2 * TB_MUL_SIZE - 1 : 0] unsign_extend_random();
    unsign_extend_random = {{TB_MUL_SIZE{1'b0}}, random_gen()};
    return unsign_extend_random;
  endfunction

  function automatic logic [2 * TB_MUL_SIZE - 1 : 0] sign_extend_random();
    automatic logic [TB_MUL_SIZE - 1 : 0] temp;
    temp = random_gen();
    sign_extend_random = {{TB_MUL_SIZE{temp[TB_MUL_SIZE - 1]}}, temp};
    return sign_extend_random;
  endfunction

endmodule