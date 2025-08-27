#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <cstdint>
#include <array>

// Function to convert a hex string to a byte array
std::vector<unsigned char> hex_to_bytes(const std::string& hex) {
    std::vector<unsigned char> bytes;
    for (unsigned int i = 0; i < hex.length(); i += 2) {
        std::string byteString = hex.substr(i, 2);
        unsigned char byte = (unsigned char) strtol(byteString.c_str(), NULL, 16);
        bytes.push_back(byte);
    }
    return bytes;
}

// Function to remove spaces from a string
std::string remove_spaces(const std::string& input) {
    std::string output;
    for (char c : input) {
        if (c != ' ') {
            output += c;
        }
    }
    return output;
}

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

    for (int i = 0; i < 16; ++i) {
        W[i] = (data[i * 4] << 24) | (data[i * 4 + 1] << 16) | (data[i * 4 + 2] << 8) | (data[i * 4 + 3]);
    }

    for (int i = 16; i < 64; ++i) {
        uint32_t s0 = rotate_right(W[i - 15], 7) ^ rotate_right(W[i - 15], 18) ^ (W[i - 15] >> 3);
        uint32_t s1 = rotate_right(W[i - 2], 17) ^ rotate_right(W[i - 2], 19) ^ (W[i - 2] >> 10);
        W[i] = W[i - 16] + s0 + W[i - 7] + s1;
    }

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

#include <vector>
#include <tuple>
#include <fstream>
#include <string>

std::string trim(const std::string& str) {
    const char* whitespace = " \t\n\r";
    size_t start = str.find_first_not_of(whitespace);
    size_t end = str.find_last_not_of(whitespace);
    return (start == std::string::npos || end == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

// Update the read_input_file function to trim whitespace
std::vector<std::tuple<std::string, std::string, std::string>> read_input_file(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<std::tuple<std::string, std::string, std::string>> test_cases;
    std::string line, message, digest;
    std::string current_count;

    // Read the file line by line
    while (std::getline(file, line)) {
        // Extract the count value
        if (line.find("COUNT = ") != std::string::npos) {
            current_count = line.substr(line.find("COUNT = ") + 8);
        }

        // Extract the message (M) and trim whitespace
        if (line.find("M = ") != std::string::npos) {
            message = trim(line.substr(line.find("M = ") + 4));
        }

        // Extract the intermediate message digest (MDi) and trim whitespace
        if (line.find("MDi = ") != std::string::npos) {
            digest = trim(line.substr(line.find("MDi = ") + 6));
            test_cases.push_back({current_count, message, digest});
        }

        // Extract the final message digest (MD) and trim whitespace
        if (line.find("MD = ") != std::string::npos) {
            digest = trim(line.substr(line.find("MD = ") + 5));
            test_cases.push_back({current_count, message, digest});
        }
    }

    return test_cases;
}


int main() {
    // The name of the input file containing test cases
    std::string filename = "SHA256Monte.txt";

    // Read the test cases from the input file
    auto test_cases = read_input_file(filename);

    if (test_cases.empty()) {
        std::cerr << "No test cases found in the input file." << std::endl;
        return 1;
    }

    std::string initial_seed = "6d1e72ad03ddeb5de891e572e2396f8da015d899ef0e79503152d6010a3fe691"; // Initial seed
    bool overall_success = true;
    int correct_count = 0;

    // Prompt the user for the target count
    int target_count;
    std::cout << "Enter the target count (-1 to print all counts): ";
    std::cin >> target_count;

    // Prompt the user for the number of iterations to print
    int print_iterations;
    std::cout << "Enter the number of iterations to print: ";
    std::cin >> print_iterations;

    for (size_t count = 0; count < test_cases.size() / 6; ++count) {
        if (target_count != -1 && count != target_count) {
            continue;
        }

        std::string seed = (count == 0) ? initial_seed : std::get<2>(test_cases[count * 6 - 1]);
        std::vector<std::string> previous_MDi;
        bool count_success = true;
        std::string MDi; // Declare MDi here

        for (int i = 3; i <= 1002; ++i) {
            std::string M;

            if (i == 3) {
                // i = 3: seed repeated three times
                M = seed + seed + seed;
            } else if (i == 4) {
                // i = 4: seed repeated twice followed by MDi from i = 3
                if (previous_MDi.size() >= 1) {
                    M = seed + seed + previous_MDi[0];
                } else {
                    std::cerr << "Error: Insufficient data in previous_MDi for iteration " << i << std::endl;
                    return 1;
                }
            } else if (i == 5) {
                // i = 5: seed followed by MDi from i = 3 and i = 4
                if (previous_MDi.size() >= 2) {
                    M = seed + previous_MDi[0] + previous_MDi[1];
                } else {
                    std::cerr << "Error: Insufficient data in previous_MDi for iteration " << i << std::endl;
                    return 1;
                }
            } else if (i == 6) {
                // i = 6: MDi from i = 3, i = 4, and i = 5
                if (previous_MDi.size() >= 3) {
                    M = previous_MDi[0] + previous_MDi[1] + previous_MDi[2];
                } else {
                    std::cerr << "Error: Insufficient data in previous_MDi for iteration " << i << std::endl;
                    return 1;
                }
            } else {
                // i >= 7: MDi from the previous three iterations
                if (previous_MDi.size() >= 3) {
                    M = previous_MDi[previous_MDi.size() - 3] + previous_MDi[previous_MDi.size() - 2] + previous_MDi[previous_MDi.size() - 1];
                } else {
                    std::cerr << "Error: Insufficient data in previous_MDi for iteration " << i << std::endl;
                    return 1;
                }
            }

            if (M.empty()) {
                std::cerr << "Error: Message (M) is empty at iteration " << i << std::endl;
                return 1;
            }

            // Convert the hexadecimal message to a byte array
            std::vector<unsigned char> message_bytes = hex_to_bytes(M);
            std::string message(message_bytes.begin(), message_bytes.end());

            // Calculate the SHA-256 hash of the message
            MDi = calculate_sha256(message);
            MDi = remove_spaces(MDi);  // Remove spaces from MDi
            previous_MDi.push_back(MDi);

            // Check if expected result is available in the input data
            if (i <= 7 && count * 6 + (i - 3) < test_cases.size()) {
                std::string expected_MDi = std::get<2>(test_cases[count * 6 + (i - 3)]);
                if (MDi != expected_MDi) {
                    overall_success = false;
                    count_success = false;
                    std::cerr << "Count: " << count << ", Iteration: " << i << " failed!" << std::endl;
                    std::cerr << "Expected: " << expected_MDi << std::endl;
                    std::cerr << "Actual:   " << MDi << std::endl;
                    break;
                } else {
                    correct_count++;
                }
                // Print the iteration, message, calculated hash, and expected hash
                std::cout << "Count: " << count << ", Iteration: " << i << std::endl;
                std::cout << "Message (M): " << M << std::endl;
                std::cout << "Expected: " << expected_MDi << std::endl;
                std::cout << "Actual:   " << MDi << std::endl;
                std::cout << "" << std::endl;
            }

            // Print the iteration, message, and calculated hash for specified iterations
            if ((i <= print_iterations || count_success == false) && i > 7) {
                std::cout << "Count: " << count << ", Iteration: " << i << std::endl;
                std::cout << "Message (M): " << M << std::endl;
                std::cout << "Actual:   " << MDi << std::endl;
                std::cout << "--------------------------" << std::endl;
            }
        }

        // Print the final MD after 1002 iterations and expected final MD
        std::string expected_final_MD = std::get<2>(test_cases[count * 6 + 5]);
        std::cout << "Final MD after 1002 iterations for COUNT = " << count << ": " << MDi << std::endl;
        std::cout << "Expected final MD: " << expected_final_MD << std::endl;
        std::cout << "---------------------" << std::endl;

        if (count_success) {
            seed = MDi; // Update seed for the next count
        }
    }

    // Final result
    if (overall_success) {
        std::cout << "Success! All hashes matched for available expected values." << std::endl;
    } else {
        double success_rate = (correct_count / static_cast<double>(test_cases.size())) * 100; 
        std::cout << "Success rate before failure: " << success_rate << "%" << std::endl;
        std::cerr << "Total correct before first failure: " << correct_count << std::endl;
    }

    return 0;
}
