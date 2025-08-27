module s1(
 input logic [31:0] X,
 output logic [31:0] Y
);

assign Y ={X[16:0],X[31:17]} ^ {X[18:0],X[31:19]} ^ {10'b0000000000, X[31 : 10]};

endmodule
