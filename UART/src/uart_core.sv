//////////////////////////////////////////////////////////////////////////////////
//Top Module for the Complete UART System
//
// Setup for 9600 Baud Rate
//
// For 9600 baud with 50MHz FPGA clock: 
// 9600 * 16 = 153,600
// 50 * 10^6 / 153,600 = ~326      (counter limit M)
// log2(326) = 9                   (counter bits N) 
//
// For 19,200 baud rate with a 50MHz FPGA clock signal:
// 19,200 * 16 = 307,200
// 50 * 10^6 / 307,200 = ~163      (counter limit M)
// log2(163) = 8                    (counter bits N)
//
// For 115,200 baud with 50MHz FPGA clock:
// 115,200 * 16 = 1,843,200
// 50 * 10^6 / 1,843,200 = ~28     (counter limit M)
// log2(28) = 5                     (counter bits N) 
//
// For 1500 baud with 50MHz FPGA clock:
// 1500 * 16 = 24,000
// 50 * 10^6 / 24,000 = ~2084     (counter limit M)
// log2(2083) = 12                  (counter bits N) 
//
// Comments:
// - Many of the variable names have been changed for clarity
//////////////////////////////////////////////////////////////////////////////////

/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off MULTITOP *
/* verilator lint_off WIDTH */
module uart_core
    #(
        parameter   DBITS = 8,         // number of data bits in a word
                    SB_TICK = 16,      // number of stop bit / oversampling ticks
                    BR_LIMIT = 28,    // baud rate generator counter limit M
                    BR_BITS = 5,       // number of baud rate generator counter bits N
                    FIFO_EXP = 6       // exponent for number of FIFO addresses (2^6 = 64)
    )
    (
        input logic clk,               	      // FPGA clock
        input logic rst_ni,                   // reset
        input logic read_uart,                // button
        input logic write_uart,               // button
        input logic rx,                       // serial data in
        input logic [DBITS-1:0] write_data,   // data from Tx FIFO
        output logic rx_full,                 // do not write data to FIFO
        output logic rx_empty,                // no data to read from FIFO
        output logic tx,                      // serial data out
        output logic [DBITS-1:0] read_data    // data to Rx FIFO
    );
    
    // Connection Signals
    logic tick;                          // sample tick from baud rate generator
    logic rx_done_tick;                  // data word received
    logic tx_done_tick;                  // data transmission complete
    logic tx_empty;                      // Tx FIFO has no data to transmit
    logic tx_fifo_not_empty;             // Tx FIFO contains data to transmit
    logic [DBITS-1:0] tx_fifo_out;       // from Tx FIFO to UART transmitter
    logic [DBITS-1:0] rx_data_out;       // from UART receiver to Rx FIFO
	 
    
    // Instantiate Modules for UART Core
    baud_rate_generator 
        #(
            .M(BR_LIMIT), 
            .N(BR_BITS)
         ) 
        BAUD_RATE_GEN   
        (
            .clk(clk), 
            .reset(rst_ni),
            .tick(tick)
         );
    
    uart_receiver
         #(
            .DBITS(DBITS),
            .SB_TICK(SB_TICK)
         )
          UART_RX_UNIT
         (
            .clk(clk),
            .reset(rst_ni),
            .rx(rx),
            .sample_tick(tick),
            .data_ready(rx_done_tick),
            .data_out(rx_data_out)
         );
    
    uart_transmitter
         #(
            .DBITS(DBITS),
            .SB_TICK(SB_TICK)
         )
           UART_TX_UNIT
         (
            .clk(clk),
            .reset(rst_ni),
            .tx_start(tx_fifo_not_empty),
            .sample_tick(tick),
            .data_in(tx_fifo_out),
            .tx_done(tx_done_tick),
            .tx(tx)
         );
    
    fifo
        #(
            .DATA_SIZE(DBITS),
            .ADDR_SPACE_EXP(FIFO_EXP)
         )
         FIFO_RX_UNIT
         (
            .clk(clk),
            .reset(rst_ni),
            .write_to_fifo(rx_done_tick),
	        .read_from_fifo(read_uart),
	        .write_data_in(rx_data_out),
	        .read_data_out(read_data),
	        .empty(rx_empty),
	        .full(rx_full)            
	      );
	   
    fifo
        #(
            .DATA_SIZE(DBITS),
            .ADDR_SPACE_EXP(FIFO_EXP)
         )
         FIFO_TX_UNIT
         (
            .clk(clk),
            .reset(rst_ni),
            .write_to_fifo(write_uart),
	        .read_from_fifo(tx_done_tick),
	        .write_data_in(write_data),
	        .read_data_out(tx_fifo_out),
	        .empty(tx_empty),
	        .full()                // intentionally disconnected
	      );
    
    // Signal Logic
    assign tx_fifo_not_empty = ~tx_empty;
  
endmodule
