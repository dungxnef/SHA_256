module s0(
 input logic [31:0] X,
 output logic [31:0] Y
);


assign Y = {X[6:0],X[31:7]} ^ {X[17:0],X[31:18]}^ {3'b000, X[31 : 3]};


endmodule
