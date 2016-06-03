#include "Intel8080Instructions.hpp"

Intel8080Instructions::Intel8080Instructions(std::shared_ptr<Intel8080Registers> registers)
        : _registers(std::move(registers)) {}

/**
 * Executes the instruction with the given opcode and increments the PC.
 */
void Intel8080Instructions::execute(uint8_t* opcode) {
    if (_instructionMap.find(*opcode) != _instructionMap.end()) {
        auto instruction = _instructionMap.at(*opcode);
        instruction->execute(_registers, opcode);  // Execute the instruction with the given opcode
        _registers->pc += instruction->getOpbytes();  // Increment the PC by the number of bytes the instruction takes
    }
    else {
        std::string str(reinterpret_cast<char*>(opcode));
        throw UnsupportedInstructionException("The instruction \'" + str + "\' is not implemented");
    }
}

/**
 * Calls the print function on the appropriate Instruction object.
 */
void Intel8080Instructions::print(uint8_t* opcode) {
    if (_instructionMap.find(*opcode) != _instructionMap.end()) {
        printf("%04x ", _registers->pc);
        _instructionMap.at(*opcode)->print(opcode);
    }
    else {
        std::string str(reinterpret_cast<char*>(opcode));
        throw UnsupportedInstructionException("The instruction \'" + str + "\' is not implemented");
    }
}
