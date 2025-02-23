module tb_adder ();

  parameter TB_ADDER_SIZE = 32;

  logic [TB_ADDER_SIZE - 1 : 0] in_op1;
  logic [TB_ADDER_SIZE - 1 : 0] in_op2;
  logic [TB_ADDER_SIZE - 1 : 0] out_res;
  logic cin;
  logic cout;

  brent_kung_adder_nbit #(.ADDER_SIZE  (TB_ADDER_SIZE)) tb_brent_kung_adder_nbit (
      .in_op1     ( in_op1  ),
      .in_op2     ( in_op2  ),
      .out_res    ( out_res ),
      .cin        ( cin     ),
      .cout       ( cout    )
  );

  localparam CLK_PERIOD = 10;

  logic clk;
  initial begin
      clk = 0;
      forever #(CLK_PERIOD / 2) clk = ~clk;
  end

  initial begin
    in_op1 = '0;
    in_op2 = '0;
    cin = 0;

    #(CLK_PERIOD * 2);

    for (int i = 0; i < 20; i++) begin
      in_op1 = $random;
      in_op2 = $random;
      cin = $random;

      #CLK_PERIOD;

      if (out_res == (in_op1 + in_op2 + cin)) begin
        $display("Test %0d passed: in_op1 = %h, in_op2 = %h, cin = %h, expected = %h, out_res = %h", i, in_op1, in_op2, cin, in_op1 + in_op2 + cin, out_res);
      end else begin
        $display("Test %0d failed: in_op1 = %h, in_op2 = %h, cin = %h, expected = %h, out_res = %h", i, in_op1, in_op2, cin, in_op1 + in_op2 + cin, out_res);
      end
    end

    $finish;
  end

endmodule