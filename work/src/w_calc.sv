module w_calc(
 input logic [31:0] w_16,
 input logic [31:0] w_15,
 input logic [31:0] w_7,
 input logic [31:0] w_2,
 input logic w_rdy,
 output logic [31:0] w_o

);

logic [31:0] temp1,temp2;

s0 s0(
 .X(w_15),
 .Y(temp1)
);

s1 s1(
 .X(w_2),
 .Y(temp2)
);
always_latch begin
	if(w_rdy) begin
 		w_o = temp1 + temp2 + w_16 + w_7;
 	end
end
endmodule


