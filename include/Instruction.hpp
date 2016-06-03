#ifndef EMULATORBOY_INCLUDE_INSTRUCTION_HPP
#define EMULATORBOY_INCLUDE_INSTRUCTION_HPP

#include <memory>
#include <Registers.hpp>

/**
 * A base class for a generic instruction.
 */
class Instruction {
public:
    explicit Instruction(uint8_t opcode, unsigned int opbytes) : _opcode(opcode), _opbytes(opbytes) {}

    virtual void print(uint8_t* val) = 0;
    virtual void execute(const std::shared_ptr<Registers>& registers, uint8_t* val) = 0;

    inline uint8_t getOpcode() const { return _opcode; }
    inline unsigned int getOpbytes() const { return _opbytes; }

private:
    uint8_t _opcode;
    unsigned int _opbytes;
};

#endif