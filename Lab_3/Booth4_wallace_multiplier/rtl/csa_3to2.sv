`timescale 1ns / 1ps
module csa_3to2 #(
  parameter WIDTH_1   = 32,
  parameter WIDTH_2   = 34,
  parameter WIDTH_3   = 38,
  parameter WIDTH_C   = mid_width(WIDTH_1, WIDTH_2, WIDTH_3),
  parameter WIDTH_S   = max_width(WIDTH_1, WIDTH_2, WIDTH_3)
) (
  input  logic [WIDTH_1 - 1     : 0] in_op1,
  input  logic [WIDTH_2 - 1     : 0] in_op2,
  input  logic [WIDTH_3 - 1     : 0] in_op3,

  output logic [WIDTH_C - 1 + 1 : 0] out_c,
  output logic [WIDTH_S - 1     : 0] out_s 
);

  localparam WIDTH_MIN = min_width(WIDTH_1, WIDTH_2, WIDTH_3);
  localparam WIDTH_MID = mid_width(WIDTH_1, WIDTH_2, WIDTH_3);
  localparam WIDTH_MAX = max_width(WIDTH_1, WIDTH_2, WIDTH_3);

  logic [WIDTH_C - 1 : 0] c;
  logic [WIDTH_S - 1 : 0] s;

  logic [WIDTH_MID - 1 : 0] op_mid;
  logic [WIDTH_MAX - 1 : 0] op_max;

  generate
    if (WIDTH_1 == WIDTH_MID) begin
      assign op_mid = in_op1;
    end else if (WIDTH_2 == WIDTH_MID) begin
      assign op_mid = in_op2;
    end else begin
      assign op_mid = in_op3;
    end

    if (WIDTH_1 == WIDTH_MAX) begin
      assign op_max = in_op1;
    end else if (WIDTH_2 == WIDTH_MAX) begin
      assign op_max = in_op2;
    end else begin
      assign op_max = in_op3;
    end
  endgenerate

  generate
    for (genvar i = 0; i < WIDTH_S; i = i + 1) begin
      if (i < WIDTH_MIN) begin
        onebit_adder u_onebit_adder (
          .A    ( in_op1[i] ),
          .B    ( in_op2[i] ),
          .C    ( in_op3[i] ),
          .COUT ( c[i]      ),
          .S    ( s[i]      )
        );
      end else begin
        if (WIDTH_C == WIDTH_S) begin
          assign s[i] = op_mid[i] ^^ op_max[i];
          assign c[i] = op_mid[i] && op_max[i];
        end else begin
          if (i < WIDTH_C) begin
            assign s[i] = op_mid[i] ^^ op_max[i];
            assign c[i] = op_mid[i] && op_max[i];
          end else begin
            assign s[i] = op_max[i]; 
          end        
        end
      end
    end
  endgenerate

  assign out_s = s;
  assign out_c = {{c}, {1'b0}};


//------------------------ Function Define ------------------------------------------//
  /////////////////////////////////////////////////////////////////////////////////////
  // ** Find minimum width
  /////////////////////////////////////////////////////////////////////////////////////
  function int min_width(input int a, input int b, input int c);
    if (a <= b) begin
      if (a <= c) begin
        return a;
      end else begin
        return c;
      end
    end else begin
      if (b <= c) begin
        return b;
      end else begin
        return c;
      end
    end
  endfunction

  /////////////////////////////////////////////////////////////////////////////////////
  // ** Find middle width
  /////////////////////////////////////////////////////////////////////////////////////
  function int mid_width(input int a, input int b, input int c);
    if (a <= b) begin
      if (a >= c) begin
        return a;
      end else begin
        if (b <= c) begin
          return b;
        end else begin
          return c;
        end
      end
    end else begin
      if (a <= c) begin
        return a;
      end else begin
        if (b <= c) begin
          return c;
        end else begin
          return b;
        end
      end
    end
  endfunction

  /////////////////////////////////////////////////////////////////////////////////////
  // ** Find maximum width
  /////////////////////////////////////////////////////////////////////////////////////
  function int max_width(input int a, input int b, input int c);
    if (a >= b) begin
      if (a >= c) begin
        return a;
      end else begin
        return c;
      end
    end else begin
      if (b >= c) begin
        return b;
      end else begin
        return c;
      end
    end
  endfunction

endmodule