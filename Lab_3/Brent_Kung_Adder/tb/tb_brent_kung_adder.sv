//////////////////////////////////////////////////////////////////////////////////
// Company: Hong Kong University of Science and Technology
// Engineer: TANG Yue
// 
// Create Date: 08/03/2025 10:38:55
// Design Name: 
// Module Name: tb_brent_kung_adder
// Project Name: Brent Kung Adder Design
// Target Devices: 
// Tool Versions: Vivado 2023.1
// Description: https://github.com/EsaLongs/EESM6000C/tree/main/Lab_3/Brent_Kung_Adder
// Dependencies: 
// 
// Revision 0.01
//
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module tb_brent_kung_adder();
  // **** Define an enumerated type for different adder sizes
  typedef enum {SIZE_4 = 4, SIZE_16 = 16, SIZE_32 = 32, SIZE_128 = 128} adder_size_t;
  
  // **** Test configuration parameters
  int NUM_RANDOM_TESTS = 100;  // Number of random test cases per size
  adder_size_t sizes[] = '{SIZE_4, SIZE_16, SIZE_32, SIZE_128};  // Sizes to test

  // **** Golden model adder for reference
  function automatic logic[ADDR_SIZE:0] golden_adder(
    input logic [ADDR_SIZE-1:0] a,
    input logic [ADDR_SIZE-1:0] b,
    input logic cin
  );
    // **** Perform addition with an extra bit for carry-out
    return {1'b0, a} + {1'b0, b} + cin;
  endfunction

  // **** Task to test a single adder size
  task test_single_size(int size);
    localparam ADDR_SIZE = size;  // Local parameter for current size
    logic [ADDR_SIZE-1:0] a, b;   // Input operands
    logic [ADDR_SIZE-1:0] sum;    // Adder output
    logic cin, cout;              // Carry in/out signals
    int error_count = 0;          // Error counter

    // **** Instantiate the DUT (Design Under Test)
    brent_kung_adder_nbit #(.ADDER_SIZE(ADDR_SIZE)) dut (
      .in_op1(a),
      .in_op2(b),
      .out_res(sum),
      .cin(cin),
      .cout(cout)
    );

    initial begin
      $display("\n[%t] Testing %0d-bit adder...", $time, ADDR_SIZE);

      // **** Test boundary cases
      // **** Case 1: All zeros
      a = 0; b = 0; cin = 0;
      #10;
      check_result("All zeros");

      // **** Case 2: All ones + zeros
      a = {ADDR_SIZE{1'b1}}; b = 0; cin = 0;
      #10;
      check_result("All ones + zeros");

      // **** Case 3: Carry propagation test
      a = 1; b = {ADDR_SIZE{1'b1}}; cin = 0;
      #10;
      check_result("Carry propagation");

      // **** Random tests
      repeat(NUM_RANDOM_TESTS) begin
        a = $urandom_range(0, {ADDR_SIZE{1'b1}});  // Random operand 1
        b = $urandom_range(0, {ADDR_SIZE{1'b1}});  // Random operand 2
        cin = $urandom_range(0,1);                 // Random carry-in
        #10;
        check_result("Random test");
      end

      // **** Print test results
      $display("[%t] %0d-bit adder: %0d errors", $time, ADDR_SIZE, error_count);
    end

    // **** Task to check result against golden model
    task check_result(string test_name);
      automatic logic[ADDR_SIZE:0] expected = golden_adder(a, b, cin);  // Expected result
      if ({cout, sum} !== expected) begin
        $error("%s failed: a=%h b=%h cin=%b sum=%h (expected %h) cout=%b (expected %b)",
               test_name, a, b, cin, sum, expected[ADDR_SIZE-1:0], cout, expected[ADDR_SIZE]);
        error_count++;
      end
    endtask
  endtask

  // **** Main test procedure
  initial begin
    // **** Test all sizes in the sizes array
    foreach(sizes[i]) begin
      test_single_size(sizes[i]);
    end
    #100;
    $display("\nAll tests completed!");
    $finish;
  end
endmodule