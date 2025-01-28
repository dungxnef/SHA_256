module compress_stage1(
 input logic [31:0] k_i1,
 input logic [31:0] w_i1,
 input logic [31:0] k_i2,
 input logic [31:0] w_i2,
 
 input logic [31:0] a,
 input logic [31:0] b,
 input logic [31:0] c,
 input logic [31:0] d,
 input logic [31:0] e,
 input logic [31:0] f,
 input logic [31:0] g,
 input logic [31:0] h,
 
 output wire [31:0] a_dash,
 output wire [31:0] b_dash,
 output wire [31:0] e_dash,
 output wire [31:0] f_dash, 
    
 output wire [31:0] p1,
 output wire [31:0] p2,
 output wire [31:0] p3,
 output wire [31:0] p4,
 output wire [31:0] p5
);

    assign a_dash = a;
    assign b_dash = b;
    assign e_dash = e;
    assign f_dash = f;

logic [31:0] ch, maj, us1, us0;
logic [31:0] t1, t2, t3, t4, t5, t6; 

S1 S1(
	.X(e),
	.us1(us1)
);

S0 S0(
	.X(a),
	.us0(us0)
);
	
assign ch = (e & f) ^ ((~e) & g);
assign maj = (a & b) ^ (a & c) ^ (b & c);

assign t1 = w_i2 + k_i2;

assign p4 = t1 + g;          //2 addition stages 
assign p5 = p4 + c;          //3 addition stages

assign t2 = w_i1 + k_i1;     
assign t3 = t2   + h;       
assign t4 = us1   + ch;
assign p3 = t3   + t4;       //3 addition stages

assign t5 = h + d;
assign t6 = t5 + t2;
assign p2 = t4 + t6;         //3 addition stages

assign p1 = us0 + maj;        //1 addition stage
    
    
endmodule

