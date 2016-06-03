#include "EmulatorBoy.hpp"

int main(int argc, char* argv[]) {
    Intel8080Processor processor;
    processor.emulateCycle();
    processor.printStateInfo();
    return 0;
}
