module S1(
 input logic [31:0] X,
 output logic [31:0] us1
);

assign us1 = ({X[5:0],X[31:6]} ^ {X[10:0],X[31:11]} ^ {X[24:0],X[31:25]});

endmodule
