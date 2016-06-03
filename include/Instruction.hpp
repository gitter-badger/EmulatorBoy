#ifndef EMULATORBOY_INCLUDE_INSTRUCTION_HPP
#define EMULATORBOY_INCLUDE_INSTRUCTION_HPP

/**
 * A base class for a generic instruction.
 */
class Instruction {
    Operation(unsigned char opcode, unsigned int opbytes) : _opcode(opcode), _opbytes(opbytes) {}

    template <typename T>  // T must be a Register object
    virtual void execute(const std::shared_ptr<T>& registers, unsigned char* val) = 0;

    virtual void print(unsigned char* val) = 0;

    inline unsigned char getOpcode() const { return _opcode; }
    inline unsigned int getOpbytes() const { return _opbytes; }

private:
    unsigned char _opcode;
    unsigned int _opbytes;
};

#endif