#ifndef EMULATORBOY_INCLUDE_INTEL8080PROCESSOR_HPP
#define EMULATORBOY_INCLUDE_INTEL8080PROCESSOR_HPP

#include <Predefs.hpp>
#include <Processor.hpp>
#include <Registers.hpp>
#include <Intel8080Instructions.hpp>

class Intel8080Processor : public Processor {
public:
    Intel8080Processor();
    void load();
    void emulateCycle();
    void reset();
    void printStateInfo();

private:
    std::shared_ptr<Intel8080Registers> _registers;
    Intel8080Instructions _instructions;
};

#endif