#ifndef EMULATORBOY_INCLUDE_REGISTERS_HPP
#define EMULATORBOY_INCLUDE_REGISTERS_HPP

class Registers {
public:
    virtual void reset() = 0;
};

struct ConditionCodes {
    uint8_t cy:1;
    uint8_t pad:1;
    uint8_t p:1;
    uint8_t pad2:1;
    uint8_t ac:1;
    uint8_t pad3:1;
    uint8_t z:1;
    uint8_t s:1;
};

class Intel8080Registers : public Registers {
public:
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    uint16_t sp;
    uint16_t pc;
    uint8_t* memory;
    ConditionCodes conditionCodes;
    uint8_t interruptEnable;

    void reset() {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        h = 0;
        l = 0;
        sp = 0xFFFF;
        pc = 0;
        memory = nullptr;  //TODO: reset memory properly
        conditionCodes.cy = 0;
        conditionCodes.pad = 0;
        conditionCodes.p = 0;
        conditionCodes.pad2 = 0;
        conditionCodes.ac = 0;
        conditionCodes.pad3 = 0;
        conditionCodes.z = 0;
        conditionCodes.s = 0;
        interruptEnable = 0;
    }
};

#endif