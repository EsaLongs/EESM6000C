`timescale 1ns / 1ps

module tb_booth4_multiplier_nbit ();

  parameter TB_MUL_SIZE = 64;
  parameter TB_ADDER_SIZE = 2 * TB_MUL_SIZE;
  
  logic [TB_MUL_SIZE - 1 : 0] in_op1;
  logic [TB_MUL_SIZE - 1 : 0] in_op2;
  logic [TB_ADDER_SIZE - 1 : 0] out_res;
  logic [TB_ADDER_SIZE - 1 : 0] tb_res;

  logic [TB_ADDER_SIZE - 1 : 0] in_op1_ex;
  logic [TB_ADDER_SIZE - 1 : 0] in_op2_ex;

  logic in_op1_signed;
  logic in_op2_signed;

  logic in_valid;
  logic out_ready;

  logic in_ready;
  logic out_valid;

  logic clk;
  logic rst_n;

  logic test1_pass;
  logic test2_pass;
  logic test3_pass;
  logic test4_pass;

  // Instantiate the booth4_multiplier module
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

  initial begin
    clk = 0;
    forever #5 clk = ~clk;  // 10ns period clock signal
  end

  // Reset signal generation
  initial begin
    rst_n = 0;

    #20; // Hold the reset for 20ns

    rst_n = 1;
  end

  // Test sequence
  initial begin
    integer i;
    for (i = 0; i < 100; i = i + 1) begin
      // Initialize the input signals
      in_op1 = 'b0;
      in_op2 = 'b0;
      in_op1_signed = 1'b0;
      in_op2_signed = 1'b0;
      in_valid = 1'b0;
      in_ready = 1'b0;

      // Test Case 1: Unsigned Multiplication
      #200;
      in_op1 = $random;
      in_op2 = $random;
      in_op1_ex = {{TB_MUL_SIZE{1'b0}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{1'b0}}, in_op2};
      // We need to extend here because 32 bit * 32 bit is still 32 bit in vivado
      
      tb_res = $unsigned($unsigned(in_op1_ex) * $unsigned(in_op2_ex));

      in_op1_signed = 1'b0;
      in_op2_signed = 1'b0;
      #100;

      // Begin calculation
      in_valid = 1'b1;
      
      #((TB_MUL_SIZE / 2) * 20);
      test1_pass = 1'b0;
      if ($unsigned(out_res) === tb_res) begin
          $display("Test Case 1 (Unsigned * unsigned) passed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $unsigned(out_res));
          test1_pass = 1'b1;
      end else begin
          $display("Test Case 1 (Unsigned * unsigned) failed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $unsigned(out_res));
      end
      
      // Finish sending
      in_ready = 1'b1;

      #10;

      in_valid = 1'b0;
      in_ready = 1'b0;

      // Test Case 2: Signed Multiplication
      #200;
      in_op1 = $random;
      in_op2 = $random;
      in_op1_ex = {{TB_MUL_SIZE{in_op1[TB_MUL_SIZE - 1]}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{in_op2[TB_MUL_SIZE - 1]}}, in_op2};
      
      tb_res = $signed($signed(in_op1_ex) * $signed(in_op2_ex));

      in_op1_signed = 1'b1;
      in_op2_signed = 1'b1;
      
      #100;
      // Begin calculation
      in_valid = 1'b1;
      
      #((TB_MUL_SIZE / 2) * 20);
      test2_pass = 1'b0;
      if ($signed(out_res) === tb_res) begin
          $display("Test Case 2 (Signed * signed) passed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $signed(out_res));
          test2_pass = 1'b1;
      end else begin
          $display("Test Case 2 (Signed * signed) failed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $signed(out_res));
      end
      
      // Finish sending
      in_ready = 1'b1;
      
      #10;

      in_valid = 1'b0;
      in_ready = 1'b0;


    // Test Case 3: Unsignd * Signed Multiplication
      #200;
      in_op1 = $unsigned($random);
      in_op2 = $signed($random);
      in_op1_ex = {{TB_MUL_SIZE{1'b0}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{in_op2[TB_MUL_SIZE - 1]}}, in_op2};
      
      tb_res = $signed($unsigned(in_op1_ex) * $signed(in_op2_ex));
      
      in_op1_signed = 1'b0;
      in_op2_signed = 1'b1;
      
      #100;
      // Begin calculation
      in_valid = 1'b1;
      
      #((TB_MUL_SIZE / 2) * 20);      
      test3_pass = 1'b0;
      if ($signed(out_res) === tb_res) begin
          $display("Test Case 3 (Unsigned * signed) passed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $signed(out_res));
          test3_pass = 1'b1;
      end else begin
          $display("Test Case 3 (Unsigned * signed) failed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $signed(out_res));
      end
      
      // Finish sending
      in_ready = 1'b1;

      #10;
      in_valid = 1'b0;
      in_ready = 1'b0;

    // Test Case 4: Signd * unsigned Multiplication
      #200;
      in_op1 = $signed($random);
      in_op2 = $unsigned($random);
      in_op1_ex = {{TB_MUL_SIZE{in_op1[TB_MUL_SIZE - 1]}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{1'b0}}, in_op2};
      
      tb_res = $signed($signed(in_op1_ex) * $unsigned(in_op2_ex));

      in_op1_signed = 1'b1;
      in_op2_signed = 1'b0;
      
      #100;
      // Begin calculation
      in_valid = 1'b1;
      
      #((TB_MUL_SIZE / 2) * 20);
      test4_pass = 1'b0;
      if ($signed(out_res) === tb_res) begin
          test4_pass = 1'b1;
          $display("Test Case 4 (Signed * unsigned) passed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $signed(out_res));
      end else begin
          $display("Test Case 4 (Signed * unsigned) failed! op1 %d, op2 %d, Expected %d, Got %d", in_op1, in_op2, tb_res, $signed(out_res));
      end
      
      // Finish sending
      in_ready = 1'b1;

      #10;
      in_valid = 1'b0;
      in_ready = 1'b0;

      if (test1_pass && test2_pass && test3_pass && test4_pass) $display("All tests pass!");
      
      // End the simulation
      #20;
      $finish;
      
    end
  end
  
endmodule