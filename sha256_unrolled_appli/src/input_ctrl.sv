module input_ctrl(
    input logic clk,
    input logic padded_i,
    input logic [7:0] data_i,
    output logic stop,
    output logic ready
);

    logic [7:0] prev_data_i; // Register to store the previous data_i

    always_ff @(posedge clk) begin
        // Store the current data_i as previous data_i for the next clock cycle
        prev_data_i <= data_i;
    end

    always_latch begin
        // Maintain the stop signal until padded_i is high
        if (padded_i) begin
            stop = 0;
            // ready = 0;
        end else if ((prev_data_i >= 8'd32 && prev_data_i <= 8'd126) && (data_i == 8'd0)) begin
            stop = 1;
        end
    end

    always_latch begin
        // Maintain the stop signal until padded_i is high
        if (data_i >= 8'd32 && data_i <= 8'd126) begin
            ready = 1;
        end
    end


endmodule
