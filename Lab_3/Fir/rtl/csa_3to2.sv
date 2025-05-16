`timescale 1ns / 1ps
module csa_3to2 #(
  parameter WIDTH_1   = 4,
  parameter WIDTH_2   = 4,
  parameter WIDTH_3   = 4,
  parameter WIDTH_C   = max_width_return(WIDTH_1, WIDTH_2, WIDTH_3) + 1,
  parameter WIDTH_S   = max_width_return(WIDTH_1, WIDTH_2, WIDTH_3)
) (
  input  logic [WIDTH_1 - 1     : 0] in_op1,
  input  logic [WIDTH_2 - 1     : 0] in_op2,
  input  logic [WIDTH_3 - 1     : 0] in_op3,

  output logic [WIDTH_C - 1     : 0] out_c,
  output logic [WIDTH_S - 1     : 0] out_s 
);

  logic [WIDTH_S - 1 : 0] in_op1_ex;
  logic [WIDTH_S - 1 : 0] in_op2_ex;
  logic [WIDTH_S - 1 : 0] in_op3_ex;


  assign in_op1_ex = (WIDTH_S - WIDTH_1 > 0) ? {{(WIDTH_S - WIDTH_1){in_op1[WIDTH_1 - 1]}}, in_op1} : in_op1;
  assign in_op2_ex = (WIDTH_S - WIDTH_2 > 0) ? {{(WIDTH_S - WIDTH_2){in_op2[WIDTH_2 - 1]}}, in_op2} : in_op2;
  assign in_op3_ex = (WIDTH_S - WIDTH_3 > 0) ? {{(WIDTH_S - WIDTH_3){in_op3[WIDTH_3 - 1]}}, in_op3} : in_op3;

  logic [WIDTH_C - 2 : 0] c;
  logic [WIDTH_S - 1 : 0] s;

  generate
    for (genvar i = 0; i < WIDTH_S; i = i + 1) begin
      onebit_adder u_onebit_adder (
        .A    ( in_op1_ex[i] ),
        .B    ( in_op2_ex[i] ),
        .C    ( in_op3_ex[i] ),
        .COUT ( c[i]      ),
        .S    ( s[i]      )
        );
    end
  endgenerate

  assign out_s = s;
  assign out_c = {{c}, {1'b0}};


//------------------------ Function Define ------------------------------------------//
  /////////////////////////////////////////////////////////////////////////////////////
  // ** Find maximum width
  /////////////////////////////////////////////////////////////////////////////////////
  function int max_width_return(input int a, input int b, input int c);
    if (a >= b) begin
      if (a >= c) begin
        max_width_return = a;
      end else begin
        max_width_return = c;
      end
    end else begin
      if (b >= c) begin
        max_width_return = b;
      end else begin
        max_width_return = c;
      end
    end
  endfunction

endmodule