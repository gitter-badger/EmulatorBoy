#ifndef EMULATORBOY_INCLUDE_INTEL8080INSTRUCTIONS_HPP
#define EMULATORBOY_INCLUDE_INTEL8080INSTRUCTIONS_HPP

#include <map>
#include <Exceptions.hpp>
#include <Registers.hpp>
#include <Instruction.hpp>

class Instruction0x00 : public Instruction {
public:
    Instruction0x00() : Instruction(0x00, 2) {}
    void print(uint8_t* val) { printf("NOP"); }

    void execute(const std::shared_ptr<Registers>& registers, uint8_t* val) {
        // NOP - do nothing
    }
};

class Intel8080Instructions {
public:
    Intel8080Instructions(std::shared_ptr<Intel8080Registers> registers);
    void execute(uint8_t* opcode);
    void print(uint8_t* opcode);

private:
    std::shared_ptr<Intel8080Registers> _registers;
    const std::map<uint8_t, std::shared_ptr<Instruction>> _instructionMap = {
            { 0x00, std::make_shared<Instruction0x00>() },
    };
};

#endif