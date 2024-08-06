#define MAX_SIM 200

void set_random(Vtop* dut, vluint64_t sim_unit) {
    // Static variables to hold the string and current index
    static std::string data = "RedBlockBlue";
    static size_t index = 0;

    // Reset and control signals
    if (sim_unit < 5) {
        dut->rst_ni = 0;
    } else {
        dut->rst_ni = 1;

        // Assign ASCII value of the character from the data string to data_i
        if (index < data.size()) {
            dut->data_i = static_cast<uint8_t>(data[index]);
            index++;
            dut->stop = 0;
            
        } else {
            // Set data_i to 0 and stop to 1 when the end of the string is reached
            dut->data_i = 0;
            dut->stop = 1;
        }
    }
}

