/* verilator lint_off UNUSED */
/* verilator lint_off MULTITOP */
module hash_detect_stop (
    input logic [255:0] hash_val_i,
    output logic stop_i
);
always_comb begin : proc_detect_0s
    if (hash_val_i[255:208] == 48'h0) begin
        stop_i = 1;
    end else begin
        stop_i = 0;
    end
end

endmodule
