//---------------------- Original Code -----------------------//
module myreg (q, d, clk, rst_n);
  parameter Trst = 1,
            Tckq = 1,
            SIZE = 4,
            VERSION = "1.1";
  output [SIZE-1:0] q;
  input  [SIZE-1:0] d;
  input             clk, rst_n;
  reg [SIZE-1:0] q;
  always @(posdege clk or negedge rst_n)
  if (!rst_n) q <= #Trst 0;
  else q <= #Tckq d;
endmodule

//---------------------- Instantiate Code -----------------------//
module bad_wrapper (q, d, clk, rst_n);
  output [7:0] q;
  input  [7:0] d;
  input        clk, rstn;
  
  myreg #(.SIZE(8), .Tckq(2)) r1 (
    .q(q),
    .d(d),
    .clk(clk),
    .rst_n(rst_n)
  );
    
endmodule