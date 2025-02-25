module onebit_adder (
  input  logic A, B, C,
  output logic COUT, S
);

  assign S = A ^^ B ^^ C;
  assign COUT = (A && B) || (B && C) || (C && A);

endmodule