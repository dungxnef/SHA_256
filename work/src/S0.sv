module S0(
 input logic [31:0] X,
 output logic [31:0] us0
);

assign us0 = ({X[1:0],X[31:2]} ^ {X[12:0],X[31:13]} ^ {X[21:0],X[31:22]});

endmodule
