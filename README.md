# SHA256
- Hardware Implementation of a SHA256 core using SystemVerilog and functionally stimulated by Verilator.<br>
- The SHA256 core will be tested by comparing the result with its C++ implementation.<br>
- The C++ implementation is tested with testvectors provided by NIST website.<br>
- The input for the SHA256 core is limited to 56 characters.
## Contents
- `sha256/`                   : Base implementation
- `sha256_unrolled/`          : 2x Unrolled implementation
- `sha256_unrolled_appli/`    : 2x Unrolled with cryto mining test stimulation
- `sha256_unrolled_pipelined/`: 2x Unrolled Pipelined implementation
- `UART/` : UART protocol to interact with SHA256 core
- `Driver_C++_testbench/` : Test vector to check for the robustnest and accuracy of the C++ SHA256 implementation
## Project Structure
- `quartus/` – FPGA project files
- `src/`     – Source code
- `tb/`      – Testbench files
### Usage
After cloning the repository, you can navigate to the `tb/` directory of each implementation and use the following `make` commands:
```bash
cd tb/
make build   # Compile the testbench and source files
make sim     # Run the simulation
make wave    # Open the waveform viewer
make clean   # Remove generated files and clean the workspace

