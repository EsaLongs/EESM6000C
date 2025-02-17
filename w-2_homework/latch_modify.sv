//---------------------- Original Code -----------------------//
  //---------------------- Code 1 ----------------------------//
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

  //---------------------- Code 2 ----------------------------//
  always @(*) begin
    case (d)
      2'b00 : z <= 1'b1;
      2'b01 : z <= 1'b0;
      2'b10 : begin
              z <= 1'b1;
              s <= 1'b1;
      end 
      default : begin
              z <= 1'b0;
              s <= 1'b0;
      end
    endcase
  end

  // This code will generate latch,for s doesn't be assigned 
  // any value when (d == 2'b00) or (d == 2'b01).

//---------------------- Modified Code -----------------------//
  //---------------------- Code 1 ----------------------------//
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

  //---------------------- Code 2 ----------------------------//
  always @(*) begin
    case (d)
      2'b00 : begin
              z <= 1'b1;
              s <= 1'b0;
      end
      2'b01 : begin
              z <= 1'b0;
              s <= 1'b0;
      end
      2'b10 : begin
              z <= 1'b1;
              s <= 1'b1;
      end 
      default : begin
              z <= 1'b0;
              s <= 1'b0;
      end
    endcase
  end