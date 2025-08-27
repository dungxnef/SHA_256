#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cstring>
#include <cstdint>
#include <array>
#include <bitset>
#include <random>
#include <x86intrin.h> // For __rdtsc()

//  #define MAX_SIM 200
#define MAX_SIM 10000000
#define DELAY_BEFORE_INPUT 10 


/////////////////////////////////////////////////
//  ____  _   _    _        ____  ____   __    //
// / ___|| | | |  / \      |___ \| ___| / /_   //
// \___ \| |_| | / _ \ _____ __) |___ \| '_ \  //
//  ___) |  _  |/ ___ \_____/ __/ ___) | (_) | //
// |____/|_| |_/_/   \_\   |_____|____/ \___/  //
// 											   //
/////////////////////////////////////////////////                                            


constexpr uint32_t rotate_right(uint32_t value, unsigned int shift) {
    return (value >> shift) | (value << (32 - shift));
}
constexpr std::array<uint32_t, 64> K = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
};

void sha256_transform(uint32_t state[8], const unsigned char data[64]) {
    uint32_t W[64];
    uint32_t a, b, c, d, e, f, g, h;
    
/////////////////////////////////////////////////////////////////////////////////////////////   
//  __  __                                  _____                            _             //
// |  \/  | ___  ___ ___  __ _  __ _  ___  | ____|_  ___ __   __ _ _ __  ___(_) ___  _ __  //
// | |\/| |/ _ \/ __/ __|/ _` |/ _` |/ _ \ |  _| \ \/ / '_ \ / _` | '_ \/ __| |/ _ \| '_ \ //
// | |  | |  __/\__ \__ \ (_| | (_| |  __/ | |___ >  <| |_) | (_| | | | \__ \ | (_) | | | |//
// |_|  |_|\___||___/___/\__,_|\__, |\___| |_____/_/\_\ .__/ \__,_|_| |_|___/_|\___/|_| |_|//
//                             |___/                  |_|                                  //
/////////////////////////////////////////////////////////////////////////////////////////////
	 // Initialize the first 16 words (W[0] to W[15]) from the data input
    for (int i = 0; i < 16; ++i) {
        W[i] = (data[i * 4] << 24) | (data[i * 4 + 1] << 16) | (data[i * 4 + 2] << 8) | (data[i * 4 + 3]);
    }
    
	// Calculate W[16] to W[63] from first 16 words (W[0] to W[15])
    for (int i = 16; i < 64; ++i) {
        uint32_t s0 = rotate_right(W[i - 15], 7) ^ rotate_right(W[i - 15], 18) ^ (W[i - 15] >> 3);
        uint32_t s1 = rotate_right(W[i - 2], 17) ^ rotate_right(W[i - 2], 19) ^ (W[i - 2] >> 10);
        W[i] = W[i - 16] + s0 + W[i - 7] + s1;
    }
    
///////////////////////////////////////////////////////////////////////////////////////////    
//  ____  _            _       ____                                        _             //
// | __ )| | ___   ___| | __  / ___|___  _ __ ___  _ __  _ __ ___  ___ ___(_) ___  _ __  //
// |  _ \| |/ _ \ / __| |/ / | |   / _ \| '_ ` _ \| '_ \| '__/ _ \/ __/ __| |/ _ \| '_ \ //
// | |_) | | (_) | (__|   <  | |__| (_) | | | | | | |_) | | |  __/\__ \__ \ | (_) | | | |//
// |____/|_|\___/ \___|_|\_\  \____\___/|_| |_| |_| .__/|_|  \___||___/___/_|\___/|_| |_|//
//                                                |_|                                    //
///////////////////////////////////////////////////////////////////////////////////////////
    a = state[0];
    b = state[1];
    c = state[2];
    d = state[3];
    e = state[4];
    f = state[5];
    g = state[6];
    h = state[7];

    for (int i = 0; i < 64; ++i) {
        uint32_t S1 = rotate_right(e, 6) ^ rotate_right(e, 11) ^ rotate_right(e, 25);
        uint32_t ch = (e & f) ^ (~e & g);
        uint32_t temp1 = h + S1 + ch + K[i] + W[i];
        uint32_t S0 = rotate_right(a, 2) ^ rotate_right(a, 13) ^ rotate_right(a, 22);
        uint32_t maj = (a & b) ^ (a & c) ^ (b & c);
        uint32_t temp2 = S0 + maj;

        h = g;
        g = f;
        f = e;
        e = d + temp1;
        d = c;
        c = b;
        b = a;
        a = temp1 + temp2;
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////	
//  _   _           _      __     __    _               ____                           _   _             //
// | | | | __ _ ___| |__   \ \   / /_ _| |_   _  ___   / ___| ___ _ __   ___ _ __ __ _| |_(_) ___  _ __  //
// | |_| |/ _` / __| '_ \   \ \ / / _` | | | | |/ _ \ | |  _ / _ \ '_ \ / _ \ '__/ _` | __| |/ _ \| '_ \ //
// |  _  | (_| \__ \ | | |   \ V / (_| | | |_| |  __/ | |_| |  __/ | | |  __/ | | (_| | |_| | (_) | | | |//
// |_| |_|\__,_|___/_| |_|    \_/ \__,_|_|\__,_|\___|  \____|\___|_| |_|\___|_|  \__,_|\__|_|\___/|_| |_|//
//                                                                                                       //
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    state[4] += e;
    state[5] += f;
    state[6] += g;
    state[7] += h;

	
}

std::string calculate_sha256(const std::string& input) {
    uint32_t state[8] = {
        0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
        0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
    };

    size_t length = input.size();
    size_t padLen = (length % 64 < 56) ? (56 - length % 64) : (120 - length % 64);
    size_t totalLen = length + padLen + 8;

    unsigned char* paddedData = new unsigned char[totalLen];
    std::memcpy(paddedData, input.c_str(), length);

    paddedData[length] = 0x80;
    std::memset(paddedData + length + 1, 0, padLen - 1);

    uint64_t bitLen = length * 8;
    for (int i = 0; i < 8; ++i) {
        paddedData[totalLen - 1 - i] = bitLen >> (i * 8);
    }

    for (size_t i = 0; i < totalLen; i += 64) {
        sha256_transform(state, paddedData + i);
    }

    delete[] paddedData;

    std::ostringstream oss;
    for (int i = 0; i < 8; ++i) {
        oss << std::hex << std::setw(8) << std::setfill('0') << state[i];
        if (i != 7) oss << ' ';
    }
    return oss.str();
}


// Generate a random string with a random length between 1 and 55
std::string generate_random_string() {
    const std::string characters = " `~!@#$%^&*)\\(-_=+}{][/|?.,>;':<0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::random_device rd; // Seed for the random number engine
    std::mt19937 generator(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> length_distribution(1, 55); // Length range between 1 and 55
    std::uniform_int_distribution<> char_distribution(0, characters.size() - 1);

    size_t length = length_distribution(generator); // Random length
    std::string random_string;
    for (size_t i = 0; i < length; ++i) {
        random_string += characters[char_distribution(generator)];
    }

    return random_string;
}

// Generate random string with n length 
    std::string generate_random_string_n_length(size_t length) {
    const std::string characters = " ~!@#$%^&*)\(-_=+}{][/|?.,>;':<0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::random_device rd; // Seed for the random number engine
    std::mt19937 generator(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> distribution(0, characters.size() - 1);

    std::string random_string;
    for (size_t i = 0; i < length; ++i) {
        random_string += characters[distribution(generator)];
    }
    return random_string;
}

// Assuming VlWide<8> is a template class with a specific definition
typedef VlWide<8> VlWide8;  // Define VlWide with 8 words
// Function to print the result
void print_result_o(const VlWide8& result_o) {
    for (int i = 7; i >= 0; --i) {
        std::cout << std::hex << std::setw(8) << std::setfill('0') << result_o[i];
        if (i > 0) {
            std::cout << ' ';
        }
    }
    std::cout << std::dec << std::endl;
}

void set_random(Vtop* dut, vluint64_t sim_unit) {
   static std::string base = generate_random_string();        // Generate random string with random length from 0 to 55
//  static std::string base = generate_random_string_n_length(55);  // Generate random string with n length . Can choose n from 0 to 55
    // static std::string base = "abc";  // Base string
    static int counter = 0;  // Counter to append numbers to the base string
    static std::string data = base + std::to_string(counter);  // Initial input string

    static size_t index = 0;
    static bool input_started = false;
    static bool delay_passed = false;
    static bool result_printed = false;  // Flag to track if result has been printed
    static bool update_ready = false;  // Flag to update input after reset

    // Control signals and delay management
    if (sim_unit < 5) {
        dut->rst_ni = 0;
        dut->data_i = 0;
        delay_passed = false;  // Reset delay flag
    } else {
        dut->rst_ni = 1;

        // Manage the start of input after a delay
        if (!input_started) {
            if (sim_unit >= DELAY_BEFORE_INPUT) {
                delay_passed = true;
                input_started = true;
            }
        }

        if (input_started) {
            // Manage actual data
            if (index < data.size()) {
                uint8_t current_char = static_cast<uint8_t>(data[index]);
                dut->data_i = current_char;
                index++;
            } else {
                // Set stop to 1 at the end of the input and if the last input was valid
                dut->data_i = 0;
            }
        } else {
            // Set data_i to 0 if input hasn't started
            dut->data_i = 0;
        }
    }

    // Monitor the rdy_o signal and print Statistics along with result_o when it becomes 1
    if (dut->rdy_o == 1 && !result_printed) {
        // Print the original string
        std::cout << data << " ";
        print_result_o(dut->result_o);
        std::cout << std::endl;

        // Check for two leading zeros in the result
        std::ostringstream result_stream;
        for (int i = 7; i >= 0; --i) {
            result_stream << std::hex << std::setw(8) << std::setfill('0') << dut->result_o[i];
        }
        std::string result_str = result_stream.str();
        if (result_str.find("000") == 0) {
            std::cout << "Simulation stopped due to leading '000' in result." << std::endl;
            std::exit(0);  // Stop the simulation
        }

        // Set flags to prevent re-printing
        result_printed = true;

        // Prepare to update the input string after the reset cycle
        update_ready = true;
    }

    // If reset has completed and ready to update
    if (update_ready && dut->rst_ni == 1) {
        // Increment counter and update input
        counter++;
        data = base + std::to_string(counter);

        // Reset flags and index for the next input cycle
        index = 0;
        input_started = false;
        delay_passed = false;
        result_printed = false;
        update_ready = false;  // Reset update flag
    }
}


