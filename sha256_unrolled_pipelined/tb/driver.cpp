#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cstring>
#include <cstdint>
#include <array>
#include <bitset>
#include <random>

#define MAX_SIM 200
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
    
	// Print 64 W (W[0] to W[63])
    const int columns = 4; 
    const int values_per_column = 16; 
    
    for (int i = 0; i < values_per_column; ++i) {
        for (int col = 0; col < columns; ++col) {
            int index = i + col * values_per_column;
            if (index < 64) { 
                std::cout << "W[" << std::setw(2) << std::dec << index << "] = "
                          << std::hex << std::setw(8) << std::setfill('0') << W[index] << " |  ";
            }
        }
        std::cout << "\n"; // Newline after each row
    }
    
    	std::cout << "\n------------";
        std::cout << "\ncompression:\n";
        std::cout << "------------\n";
    
    // Print out the final set of a,b,c,d,e,f and combine it with the H constants to get the final result
    constexpr std::array<uint32_t, 8> original_constants = {
    0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
    0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
	};
    
    std::cout << "\na = " << std::hex << std::setw(8) << std::setfill('0') << a <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[0] <<" (H0)"<< " = " << state[0]  <<  std::endl;
    std::cout << "b = " << std::hex << std::setw(8) << std::setfill('0') << b <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[1] <<" (H1)"<< " = " << state[1] <<  std::endl;
    std::cout << "c = " << std::hex << std::setw(8) << std::setfill('0') << c <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[2] <<" (H2)"<< " = " << state[2] <<  std::endl;
    std::cout << "d = " << std::hex << std::setw(8) << std::setfill('0') << d <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[3] <<" (H3)"<< " = " << state[3] <<  std::endl;
    std::cout << "e = " << std::hex << std::setw(8) << std::setfill('0') << e <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[4] <<" (H4)"<< " = " << state[4] <<  std::endl;
    std::cout << "f = " << std::hex << std::setw(8) << std::setfill('0') << f <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[5] <<" (H5)"<< " = " << state[5] <<  std::endl;
    std::cout << "g = " << std::hex << std::setw(8) << std::setfill('0') << g <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[6] <<" (H6)"<< " = " << state[6] <<  std::endl;
    std::cout << "h = " << std::hex << std::setw(8) << std::setfill('0') << h <<" + "<< std::hex << std::setw(8)<< std::setfill('0') << original_constants[7] <<" (H7)"<< " = " << state[7] <<  std::endl;
    
	std::cout << "\n----------------------\n";
    std::cout << "hash value generation:";
    std::cout << "\n----------------------\n\n";  
    std::cout << state[0] << " " << state[1] << " " << state[2] << " " << state[3] << " " << state[4] << " " << state[5] << " " << state[6] << " " << state[7] << std::endl;
	
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
    std::cout << std::setw(23) << "\nResult from implementation: ";
    for (int i = 7; i >= 0; --i) {
        std::cout << std::hex << std::setw(8) << std::setfill('0') << result_o[i];
        if (i > 0) {
            std::cout << ' ';
        }
    }
    std::cout << std::dec << std::endl;
}

void set_random(Vtop* dut, vluint64_t sim_unit) {
//    static std::string data = generate_random_string();		//	 Generate random string with random length from 0 to 55
//	static std::string data = generate_random_string_n_length(55); 	// Generate random string with n length . Can choose n from 0 to 55
 	static std::string data = "abc";			// Set specific string for input

    static size_t index = 0;
    static bool input_started = false;
    static bool delay_passed = false;
    static bool result_printed = false;  // Flag to track if result has been printed

    // Control signals and delay management
    if (sim_unit < 5) {
        dut->rst_ni = 0;
        dut->ready = 0;  // Ensure ready is 0 when rst_ni is 0
        dut->data_i = 0;
        dut->stop = 0;  // Ensure stop is reset during initialization
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
                // Assert ready when the input starts and keep it at 1
                if (current_char != 0) {
                    dut->ready = 1;
                }
                // Ensure stop is 0 while processing input characters
                dut->stop = 0;
            } else {
                // Set stop to 1 at the end of the input and if the last input was valid
                dut->data_i = 0;
                // Only set stop = 1 if the last character was valid and not a space
                if (index > 0 && static_cast<uint8_t>(data[index - 1]) != 32) {  // ASCII value 32 is for a space
                    dut->stop = 1;
                } else {
                    dut->stop = 0;
                }
            }
        } else {
            // Set data_i to 0 if input hasn't started
            dut->data_i = 0;
            dut->stop = 0;  // Ensure stop is not set before valid input starts
        }
    }
	
    // Monitor the rdy_o signal and print Statiscis along with result_o when it becomes 1
    if (dut->rdy_o == 1 && !result_printed) {
    	std::cout << "\n--------";
        std::cout << "\nmessage:\n";
        std::cout << "--------\n";
        
		// Print the original string
		size_t bit_length = data.length() * 8;
		std::string binary_bit_length = std::bitset<32>(bit_length).to_string();
		binary_bit_length = binary_bit_length.substr(binary_bit_length.find('1'));       
		std::cout << "input:        " << data << std::endl;
		
	   	// Print each character 
		std::cout << "characters:   [";
		for (size_t i = 0; i < data.length(); ++i) {
			std::cout << data[i];
			if (i < data.length() - 1) {
			std::cout << ",";
			}
		}
		std::cout << "]" << std::endl;	
	
		// Print the ASCII values of each character in the input string in the format
		std::cout << "ASCII values: [";
		for (size_t i = 0; i < data.length(); ++i) {
				std::cout << static_cast<int>(data[i]);
				 if (i < data.length() - 1) {
		    	 	std::cout << ",";
		    	 }
		}
		std::cout << "]" << std::endl;
		
		// Print the message binary string
		std::string concatenated_binary;
		for (size_t i = 0; i < data.length(); ++i) {
			std::bitset<8> binary_value(data[i]);
			concatenated_binary += binary_value.to_string();  // Concatenate the binary string
		}
		std::cout << "message:      " << concatenated_binary << std::endl;
	
		std::cout << "\n--------";
		std::cout << "\npadding: (512 bits)\n";
		std::cout << "--------\n";
		
		std::cout<< "input length: " << data.length() << " characters (" << data.length() * 8 << " bits) "<< binary_bit_length << "\n"<< std::endl;
		size_t length = data.size();
		size_t padLen = (length % 64 < 56) ? (56 - length % 64) : (120 - length % 64);
		size_t totalLen = length + padLen + 8;
		
		unsigned char* paddedData = new unsigned char[totalLen];
		std::memcpy(paddedData, data.c_str(), length);

		paddedData[length] = 0x80;
		std::memset(paddedData + length + 1, 0, padLen - 1);

		uint64_t bitLen = length * 8;
		for (int i = 0; i < 8; ++i) {
			paddedData[totalLen - 1 - i] = bitLen >> (i * 8);
		}

		// Print the padded data in binary format
		std::cout << "message:      ";
		for (size_t i = 0; i < totalLen; ++i) {
			std::bitset<8> binary_value(paddedData[i]);
			std::cout << binary_value;
		}
		std::cout << std::endl;
		

		delete[] paddedData;

		std::cout << "\n----------------";
		std::cout << "\nmessage schedule\n";
		std::cout << "----------------\n\n";

		// Compute and print SHA-256 of the data string using software
		std::string hash_value = calculate_sha256(data);
		// Print SHA - 256 result_o as a 256-bit value in hexadecimal
		
		// Print Clock Cycles
		std::cout << "\nClock Cycles: " << std::dec << static_cast<int>(dut->clk_cycle_o) << " cycles" << std::endl;

		print_result_o(dut->result_o);
		std::cout << "Result from software:       " << hash_value << std::endl;

		// Compare the two results
		std::ostringstream result_o_ss;
		for (int i = 7; i >= 0; --i) {
		    result_o_ss << std::hex << std::setw(8) << std::setfill('0') << dut->result_o[i];
		    if (i > 0) {
		        result_o_ss << ' ';
		    }
		}

		if (result_o_ss.str() == hash_value) {
		    std::cout << "\nGot expected result 😍️ Congrats🎊️\n" << std::endl;
		} else {
		    std::cout << "\nResult mismatch 🥲️" << std::endl;
		}

		// Set flags to prevent re-printing
		result_printed = true;
//	    dut->rst_ni = 0;  // Set rst_ni to 0 when rdy_o is 1
		dut->ready = 0;   // Ensure ready is 0 when rst_ni is 0
	}
}
