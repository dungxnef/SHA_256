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

#include <fstream>
#include <sstream>
std::string trim(const std::string& str) {
    const char* whitespace = " \t\n\r";
    size_t start = str.find_first_not_of(whitespace);
    size_t end = str.find_last_not_of(whitespace);
    return (start == std::string::npos || end == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

std::vector<std::tuple<int, std::string, std::string>> read_rsp_file(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<std::tuple<int, std::string, std::string>> test_cases;
    std::string line, msg, md;
    int len = 0;

    while (std::getline(file, line)) {
        if (line.find("Len = ") != std::string::npos) {
            len = std::stoi(line.substr(line.find("Len = ") + 6));
        } else if (line.find("Msg = ") != std::string::npos) {
            msg = trim(line.substr(line.find("Msg = ") + 6));
        } else if (line.find("MD = ") != std::string::npos) {
            md = trim(line.substr(line.find("MD = ") + 5));
            test_cases.push_back({len, msg, md});
        }
    }

    return test_cases;
}

#include <tuple>

std::vector<std::tuple<int, std::string, std::string>> read_rsp_file(const std::string& filename);

std::string calculate_sha256(const std::string& input);
std::vector<unsigned char> hex_to_bytes(const std::string& hex);
std::string remove_spaces(const std::string& str);

int main() {
    // Prompt the user to choose between the two input files
    std::string filename;
    std::cout << "Choose the input file:" << std::endl;
    std::cout << "1. SHA256LongMsg.rsp" << std::endl;
    std::cout << "2. SHA256ShortMsg.rsp" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        filename = "SHA256LongMsg.rsp";
    } else if (choice == 2) {
        filename = "SHA256ShortMsg.rsp";
    } else {
        std::cerr << "Invalid choice. Exiting." << std::endl;
        return 1;
    }

    // Read the test cases from the input file
    auto test_cases = read_rsp_file(filename);

    if (test_cases.empty()) {
        std::cerr << "No test cases found in the input file." << std::endl;
        return 1;
    }

    bool overall_success = true;
    int correct_count = 0;

    for (const auto& test_case : test_cases) {
        int len = std::get<0>(test_case);
        std::string msg = std::get<1>(test_case);
        std::string expected_md = std::get<2>(test_case);

        // Convert the hexadecimal message to a byte array
        std::vector<unsigned char> message_bytes = hex_to_bytes(msg);
        std::string message(message_bytes.begin(), message_bytes.end());

        // Calculate the SHA-256 hash of the message
        std::string actual_md = calculate_sha256(message);
        actual_md = remove_spaces(actual_md);  // Remove spaces from actual_md

        // Compare the calculated hash with the expected hash
        if (actual_md != expected_md) {
            overall_success = false;
            std::cerr << "Length: " << len << " failed!" << std::endl;
            std::cerr << "Expected: " << expected_md << std::endl;
            std::cerr << "Actual:   " << actual_md << std::endl;
        } else {
            correct_count++;
        }

        // Print the length, message, expected hash, and actual hash
        std::cout << "Length: " << len << std::endl;
        std::cout << "Message (M): " << msg << std::endl;
        std::cout << "Expected: " << expected_md << std::endl;
        std::cout << "Actual:   " << actual_md << std::endl;
        std::cout << "--------------------------" << std::endl;
    }

    // Final result
    if (overall_success) {
        std::cout << "Success! All hashes matched for available expected values." << std::endl;
    } else {
        double success_rate = (correct_count / static_cast<double>(test_cases.size())) * 100; 
        std::cout << "Success rate: " << success_rate << "%" << std::endl;
        std::cerr << "Total correct: " << correct_count << std::endl;
    }

    return 0;
}
