module w_calc(
 input logic [31:0] w_16,
 input logic [31:0] w_15,
 input logic [31:0] w_7,
 input logic [31:0] w_2,
 input logic w_rdy,
 output logic [31:0] w_o

);

logic [31:0] sigma0,sigma1;

s0 s0(
 .X(w_15),
 .Y(sigma0)
);

s1 s1(
 .X(w_2),
 .Y(sigma1)
);

always_comb begin
	if(w_rdy) w_o = sigma1 + sigma0 + w_16 + w_7;
 	else
 	 w_o = 0;
 	 
end
endmodule

