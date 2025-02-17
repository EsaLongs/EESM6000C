//---------------------- Original Code -----------------------//
  always @(*) begin : EX22_PROC
    case (c)
      1'b0 : begin
        q = 1'b1;
        z = 1'b0;
      end
      default: begin
        q = 1'b0;
      end
    endcase
  end

  // This code will generate latch,for z doesn't be assigned 
  // any value in default part, which causes z always be 1'b0.

//---------------------- Modified Code -----------------------//
  always @(*) begin : EX22_PROC
    case (c)
      1'b0 : begin
        q = 1'b1;
        z = 1'b0;
      end
      default: begin
        q = 1'b0;
        z = 1'b1;
      end
    endcase
  end