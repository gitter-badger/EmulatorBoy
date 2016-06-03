#ifndef EMULATORBOY_INCLUDE_PROCESSOR_HPP
#define EMULATORBOY_INCLUDE_PROCESSOR_HPP

#include <Predefs.hpp>

/**
 * A base class for every different type of Processor to inherit from.
 */
class Processor {
public:
    explicit Processor() {}
    virtual void reset() = 0;
    virtual void printStateInfo() = 0;
};

#endif