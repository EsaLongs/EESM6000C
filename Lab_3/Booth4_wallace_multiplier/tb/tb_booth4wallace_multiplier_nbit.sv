`timescale 1ns / 1ps

module tb_booth4wallace_multiplier_nbit;

  parameter TB_MUL_SIZE = 32;
  parameter TB_ADDER_SIZE = 2 * TB_MUL_SIZE;
  
  logic [TB_MUL_SIZE - 1 : 0] in_op1;
  logic [TB_MUL_SIZE - 1 : 0] in_op2;
  logic [TB_ADDER_SIZE - 1 : 0] out_res;
  logic [TB_ADDER_SIZE - 1 : 0] tb_res1;
  logic [TB_ADDER_SIZE - 1 : 0] tb_res2;
  logic [TB_ADDER_SIZE - 1 : 0] tb_res3;
  logic [TB_ADDER_SIZE - 1 : 0] tb_res4;


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

  booth4wallace_multiplier_nbit #(
    .MUL_SIZE   ( TB_MUL_SIZE   ),
    .ADDER_SIZE ( TB_ADDER_SIZE )
  ) uut (
    .in_op1        ( in_op1        ),
    .in_op2        ( in_op2        ),
    .out_res       ( out_res       ),
    .in_op1_signed ( in_op1_signed ),
    .in_op2_signed ( in_op2_signed ),
    .in_valid      ( in_valid      ),
    .out_ready     ( out_ready     ),
    .in_ready      ( in_ready      ),
    .out_valid     ( out_valid     ),
    .clk           ( clk           ),
    .rst_n         ( rst_n         )
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

  localparam LOOP_NUM = 4;

  // Test sequence
  initial begin
    integer i;
    in_valid = 1'b1;
    in_ready = 1'b1;
    in_op1 = 'b0;
    in_op2 = 'b0;
    in_op1_signed = 1'b0;
    in_op2_signed = 1'b0;

    #20;
    
    for ( i = 0; i < LOOP_NUM; i = i + 1) begin
      // Test Case 1: Unsigned Multiplication
      in_op1 = $random;
      in_op2 = $random;
      in_op1_ex = {{TB_MUL_SIZE{1'b0}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{1'b0}}, in_op2};
      in_op1_signed = 1'b0;
      in_op2_signed = 1'b0;

      #10;

      // Test Case 2: Signed Multiplication
      in_op1 = $random;
      in_op2 = $random;
      in_op1_ex = {{TB_MUL_SIZE{in_op1[TB_MUL_SIZE - 1]}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{in_op2[TB_MUL_SIZE - 1]}}, in_op2};
      in_op1_signed = 1'b1;
      in_op2_signed = 1'b1;

      #10;

      // Test Case 3: Unsignd * Signed Multiplication
      in_op1 = $unsigned($random);
      in_op2 = $signed($random);
      in_op1_ex = {{TB_MUL_SIZE{1'b0}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{in_op2[TB_MUL_SIZE - 1]}}, in_op2};
      in_op1_signed = 1'b0;
      in_op2_signed = 1'b1;

      #10;

      // Test Case 4: Signd * unsigned Multiplication
      in_op1 = $signed($random);
      in_op2 = $unsigned($random);
      in_op1_ex = {{TB_MUL_SIZE{in_op1[TB_MUL_SIZE - 1]}}, in_op1};
      in_op2_ex = {{TB_MUL_SIZE{1'b0}}, in_op2};

      in_op1_signed = 1'b1;
      in_op2_signed = 1'b0;

      #10;

    end
  
  end
  
  // Check Result

  initial begin

    integer i;

    test1_pass = 1'b0;
    test2_pass = 1'b0;
    test3_pass = 1'b0;
    test4_pass = 1'b0;

    // Wait rstn
    #20;

    // Wait 2 cycles to start
    #20;

    for (i = 0; i < LOOP_NUM; i = i + 1) begin
      if ($unsigned(out_res) === tb_res1) begin
          $display("Test Case 1 (Unsigned * unsigned) passed! op1 %d, op2 %d, Expected %d, Got %d", $unsigned(in_op1), $unsigned(in_op2), $unsigned(tb_res1), $unsigned(out_res));
          test1_pass = 1'b1;
      end else begin
          $display("Test Case 1 (Unsigned * unsigned) failed! op1 %d, op2 %d, Expected %d, Got %d", $unsigned(in_op1), $unsigned(in_op2), $unsigned(tb_res1), $unsigned(out_res));
      end

      #10;

      if ($signed(out_res) === tb_res2) begin
          $display("Test Case 2 (Signed * signed) passed! op1 %d, op2 %d, Expected %d, Got %d", $signed(in_op1), $signed(in_op2), $signed(tb_res2), $signed(out_res));
          test2_pass = 1'b1;
      end else begin
          $display("Test Case 2 (Signed * signed) failed! op1 %d, op2 %d, Expected %d, Got %d", $signed(in_op1), $signed(in_op2), $signed(tb_res2), $signed(out_res));
      end

      #10;  
        
      if ($signed(out_res) === tb_res3) begin
          $display("Test Case 3 (Unsigned * signed) passed! op1 %d, op2 %d, Expected %d, Got %d", $unsigned(in_op1), $signed(in_op2), $signed(tb_res3), $signed(out_res));
          test3_pass = 1'b1;
      end else begin
          $display("Test Case 3 (Unsigned * signed) failed! op1 %d, op2 %d, Expected %d, Got %d", $unsigned(in_op1), $signed(in_op2), $signed(tb_res3), $signed(out_res));
      end
      
      #10;
      
      if ($signed(out_res) === tb_res4) begin
          test4_pass = 1'b1;
          $display("Test Case 4 (Signed * unsigned) passed! op1 %d, op2 %d, Expected %d, Got %d", $signed(in_op1), $unsigned(in_op2), $signed(tb_res4), $signed(out_res));
      end else begin
          $display("Test Case 4 (Signed * unsigned) failed! op1 %d, op2 %d, Expected %d, Got %d", $signed(in_op1), $unsigned(in_op2), $signed(tb_res4), $signed(out_res));
      end

      if (test1_pass && test2_pass && test3_pass && test4_pass) $display("All tests pass!");
      
      #10;

    end

    $finish;

  end

  // Delay assign tb_res to help check

  initial begin

    integer i;

    #25;

    for (i = 0; i < LOOP_NUM; i = i + 1) begin

      tb_res1 = #10 ($unsigned(in_op1_ex) * $unsigned(in_op2_ex));
      
      #30;

    end

  end

  initial begin
    integer i;

    #35;

    for (i = 0; i < LOOP_NUM; i = i + 1) begin

      tb_res2 = #10 ($signed(in_op1_ex) * $signed(in_op2_ex));
    
      #30;

    end
  end

  initial begin
    integer i;

    #45;

    for (i = 0; i < LOOP_NUM; i = i + 1) begin
      
      tb_res3 = #10 ($unsigned(in_op1_ex) * $signed(in_op2_ex));

      #30;

    end
  end

  initial begin
    integer i;

    #55;

    for (i = 0; i < LOOP_NUM; i = i + 1) begin
      
      tb_res4 = #10 ($signed(in_op1_ex) * $unsigned(in_op2_ex));
      
      #30;

    end
  end

endmodule