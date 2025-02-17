// End else begin must be together on one line
if (condition) begin
  foo = bar;
end else begin
  foo = bum;
end

// Include whitespace on both sides of all binary operators
assign a = ((addr & mask) == My_addr) ? b[1] : !b[0];

// There must not be a space between dimensions
logic [7:0][3:0] data[128][2];