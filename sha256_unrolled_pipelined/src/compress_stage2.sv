module compress_stage2(
    input logic [31:0] a_dash,
    input logic [31:0] b_dash,
    input logic [31:0] e_dash,
    input logic [31:0] f_dash,
    
    input logic [31:0] p1,
    input logic [31:0] p2,
    input logic [31:0] p3,
    input logic [31:0] p4,
    input logic [31:0] p5,
    
    output logic [31:0] a_new,
    output logic [31:0] b_new,
    output logic [31:0] c_new,
    output logic [31:0] d_new,
    output logic [31:0] e_new,
    output logic [31:0] f_new,
    output logic [31:0] g_new,
    output logic [31:0] h_new
);

    assign f_new = p2;
    assign b_new = p1 + p3;    //1 addition stage
    assign c_new = a_dash;
    assign d_new = b_dash;
    assign g_new = e_dash;
    assign h_new = f_dash;
    
    logic [31:0] Ch, Maj, s0, s1;
    
    S1 S1(
        .X(p2)  ,
        .us1(s1));
    
    S0 S0(
        .X(b_new) ,
        .us0(s0));

    assign Ch = (p2 & e_dash) ^ ((~p2) & f_dash);
    assign Maj = (a_dash & b_dash) ^ (b_dash & b_new) ^ (a_dash & b_new);
    
    logic [31:0] t1, t2, t3;
    assign t1 = Ch + s1;
    assign t2 = p4 + t1;
    assign t3 = Maj + s0;
    assign a_new = t2 + t3;  //3 addition stages
    
    assign e_new = t1 + p5;




endmodule
