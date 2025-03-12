///////////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 20.02.2025 19:44 : 04
// Design Name: 
// Module Name: brent_kung_adder_nbit
// Project Name: Brent Kung Adder Design
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: This is a brent kung adder, you can set the value of ADDER_SIZE to be
//              2 ^ n (2, 4, 8, 16, 32, 64, 128 ....).
// 
// Dependencies: "gp_unit.sv" (used to get generate and propagate)
// 
// Revision: 0.01
// 
// Additional Comments: Nothing
// 
///////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module tb_brent_kung_adder();
  parameter TEST_DELAY   = 10;
  parameter int SIZES[4] = '{4, 16, 32, 128}; // The width that will be tested

  logic [SIZES[0] - 1 : 0] a4,   b4,   sum4;
  logic [SIZES[1] - 1 : 0] a16,  b16,  sum16;
  logic [SIZES[2] - 1 : 0] a32,  b32,  sum32;
  logic [SIZES[3] - 1 : 0] a128, b128, sum128;

  logic cin4, cout4, cin16, cout16, cin32, cout32, cin128, cout128;

  brent_kung_adder_nbit #( 4   ) dut4   (.in_op1( a4   ), .in_op2( b4   ), .cin( cin4   ), .out_res( sum4   ), .cout( cout4   ));
  brent_kung_adder_nbit #( 16  ) dut16  (.in_op1( a16  ), .in_op2( b16  ), .cin( cin16  ), .out_res( sum16  ), .cout( cout16  ));
  brent_kung_adder_nbit #( 32  ) dut32  (.in_op1( a32  ), .in_op2( b32  ), .cin( cin32  ), .out_res( sum32  ), .cout( cout32  ));
  brent_kung_adder_nbit #( 128 ) dut128 (.in_op1( a128 ), .in_op2( b128 ), .cin( cin128 ), .out_res( sum128 ), .cout( cout128 ));

  int err4 = 0;
  int err16 = 0;
  int err32 = 0;  
  int err128 = 0;  

  initial begin
    $display("Starting Brent-Kung Adder Test");
    test_4bit   ();
    test_16bit  ();
    test_32bit  ();
    test_128bit ();

    #100 $display("\nAll tests completed. Total errors = %0d", err4 + err16 + err32 + err128);
    $finish;
  end

//------------------------ Task Define ----------------------------------------------//
  /////////////////////////////////////////////////////////////////////////////////////
  // 4-bit test
  /////////////////////////////////////////////////////////////////////////////////////
  task test_4bit();
    $display("\nTesting 4-bit adder...");
    
    // **** Sample 1: 0 + 0
    a4 = 0; b4 = 0; cin4 = 0; #TEST_DELAY;
    check_4bit("0+0+0", a4, b4, cin4, sum4, cout4, err4);
    
    // **** Sample 2: max + 1
    a4 = '1; b4 = 1; cin4 = 0; #TEST_DELAY;
    check_4bit("max+1", a4, b4, cin4, sum4, cout4, err4);
    
    // **** Random sample
    repeat(10) begin
      a4 = $urandom; 
      b4 = $urandom;
      cin4 = $random % 2;
      #TEST_DELAY;
      check_4bit("random", a4, b4, cin4, sum4, cout4, err4);
    end
    
    $display("4-bit adder: %0d errors", err4);
  endtask

  // **** 4-bit check
  task automatic check_4bit(
    input string                   msg,
    input logic [SIZES[0] - 1 : 0] a,
    input logic [SIZES[0] - 1 : 0] b,
    input logic                    cin,
    input logic [SIZES[0] - 1 : 0] sum,
    input logic                    cout,
    ref   int                      err4
  );
    automatic logic [4 : 0] gold = {1'b0, a} + {1'b0, b} + cin;
    if ({cout, sum} !== gold) begin
      $error("4-bit %s failed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
             msg, a, b, sum, gold[SIZES[0] - 1 : 0], cout, gold[4]);
      err4++;
    end else $display("16-bit %s succeed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
                      msg, a, b, sum, gold[SIZES[0] - 1 : 0], cout, gold[4]);
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // 16-bit test
  /////////////////////////////////////////////////////////////////////////////////////
  task test_16bit();
    $display("\nTesting 16-bit adder...");
    
    // **** Sample 1: 0 + 0
    a16 = 0; b16 = 0; cin16 = 0; #TEST_DELAY;
    check_16bit("0+0+0", a16, b16, cin16, sum16, cout16, err16);
    
    // **** Sample 2: max + 1
    a16 = '1; b16 = 1; cin16 = 0; #TEST_DELAY;
    check_16bit("max+1", a16, b16, cin16, sum16, cout16, err16);
    
    // **** Random sample
    repeat(10) begin
      a16 = $urandom; 
      b16 = $urandom;
      cin16 = $random % 2;
      #TEST_DELAY;
      check_16bit("random", a16, b16, cin16, sum16, cout16, err16);
    end
    
    $display("16-bit adder: %0d errors", err16);
  endtask

  // **** 16-bit check
  task automatic check_16bit(
    input string                   msg,
    input logic [SIZES[1] - 1 : 0] a,
    input logic [SIZES[1] - 1 : 0] b,
    input logic                    cin,
    input logic [SIZES[1] - 1 : 0] sum,
    input logic                    cout,
    ref   int                      err16
  );
    automatic logic [16 : 0] gold = {1'b0, a} + {1'b0, b} + cin;
    if ({cout, sum} !== gold) begin
      $error("16-bit %s failed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
             msg, a, b, sum, gold[SIZES[1] - 1 : 0], cout, gold[16]);
      err16++;
    end else $display("16-bit %s succeed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
                      msg, a, b, sum, gold[SIZES[1] - 1 : 0], cout, gold[16]);
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // 32-bit test
  /////////////////////////////////////////////////////////////////////////////////////
  task test_32bit();
    $display("\nTesting 32-bit adder...");
    
    // **** Sample 1: 0 + 0
    a32 = 0; b32 = 0; cin32 = 0; #TEST_DELAY;
    check_32bit("0+0+0", a32, b32, cin32, sum32, cout32, err32);
    
    // **** Sample 2: max + 1
    a32 = '1; b32 = 1; cin32 = 0; #TEST_DELAY;
    check_32bit("max+1", a32, b32, cin32, sum32, cout32, err32);
    
    // **** Random sample
    repeat(10) begin
      a32 = $urandom; 
      b32 = $urandom;
      cin32 = $random % 2;
      #TEST_DELAY;
      check_32bit("random", a32, b32, cin32, sum32, cout32, err32);
    end
    
    $display("32-bit adder: %0d errors", err32);
  endtask

  // **** 32-bit check
  task automatic check_32bit(
    input string                   msg,
    input logic [SIZES[2] - 1 : 0] a,
    input logic [SIZES[2] - 1 : 0] b,
    input logic                    cin,
    input logic [SIZES[2] - 1 : 0] sum,
    input logic                    cout,
    ref   int                      err32
  );
    automatic logic [32 : 0] gold = {1'b0, a} + {1'b0, b} + cin;
    if ({cout, sum} !== gold) begin
      $error("32-bit %s failed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
             msg, a, b, sum, gold[SIZES[2] - 1 : 0], cout, gold[32]);
      err32++;
    end else $display("32-bit %s succeed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
                      msg, a, b, sum, gold[SIZES[2] - 1 : 0], cout, gold[32]);
  endtask

  /////////////////////////////////////////////////////////////////////////////////////
  // 128-bit test
  /////////////////////////////////////////////////////////////////////////////////////
  task test_128bit();
    $display("\nTesting 128-bit adder...");
    
    // **** Sample 1: 0 + 0
    a128 = 0; b128 = 0; cin128 = 0; #TEST_DELAY;
    check_128bit("0+0+0", a128, b128, cin128, sum128, cout128, err128);
    
    // **** Sample 2: max + 1
    a128 = '1; b128 = 1; cin128 = 0; #TEST_DELAY;
    check_128bit("max+1", a128, b128, cin128, sum128, cout128, err128);
    
    // **** Random sample
    repeat(10) begin
      a128 = $urandom; 
      b128 = $urandom;
      cin128 = $random % 2;
      #TEST_DELAY;
      check_128bit("random", a128, b128, cin128, sum128, cout128, err128);
    end
    
    $display("128-bit adder: %0d errors", err128);
  endtask

  // **** 128-bit check
  task automatic check_128bit(
    input string                   msg,
    input logic [SIZES[3] - 1 : 0] a,
    input logic [SIZES[3] - 1 : 0] b,
    input logic                    cin,
    input logic [SIZES[3] - 1 : 0] sum,
    input logic                    cout,
    ref   int                      err128
  );
    automatic logic [128 : 0] gold = {1'b0, a} + {1'b0, b} + cin;
    if ({cout, sum} !== gold) begin
      $error("128-bit %s failed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
             msg, a, b, sum, gold[SIZES[3] - 1 : 0], cout, gold[128]);
      err128++;
    end else $display("128-bit %s succeed: a=%h b=%h sum=%h (exp %h) cout=%b (exp %b)",
                      msg, a, b, sum, gold[SIZES[3] - 1 : 0], cout, gold[128]);
  endtask

endmodule