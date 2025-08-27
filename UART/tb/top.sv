module top(
    input clk,       	    // basys 3 FPGA clock signal
    input rst_ni,            // btnR    
    input rx,               // USB-RS232 Rx
    input btn,              // btnL (read and write FIFO operation)
    output tx,              // USB-RS232 Tx
    output [3:0] an,        // 7 segment display digits
    output [0:6] seg,       // 7 segment display segments
    output [7:0] LED        // data byte display
    );
    
    uart_interface dut
        (
            .clk(clk),
            .rst_ni(rst_ni),
            .rx(rx),
            .btn(btn),
            .tx(tx),
            .an(an),
            .seg(seg),
            .LED(LED)
        );
    
endmodule
