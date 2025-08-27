module baud_rate_generator
    #( 
        parameter   N = 5,     // number of counter bits
                    M = 28     // counter limit value
    )
    (
        input logic clk,       // basys 3 clock
        input logic reset,            // reset
        output logic tick             // sample tick
    );
    
    // Counter Register
    logic [N-1:0] counter;        // counter value
    logic [N-1:0] next;          // next counter value
    
    // Register Logic
    always @(posedge clk, posedge reset)
        if(reset)
            counter <= 0;
        else
            counter <= next;
            
    // Next Counter Value Logic
    assign next = (counter == (M-1)) ? 0 : counter + 1;
    
    // Output Logic
    assign tick = (counter == (M-1)) ? 1'b1 : 1'b0;
       
endmodule
