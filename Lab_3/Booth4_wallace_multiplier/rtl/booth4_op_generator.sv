module onebit_adder (
  input  logic A, B, C,
  output logic Cout, S
);

  assign S = A ^^ B ^^ C;
  assign C = (A && B) || (B && C) || (C && A);

endmodule