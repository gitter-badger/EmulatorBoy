#include "Intel8080Processor.hpp"

Intel8080Processor::Intel8080Processor() : Processor(), _instructions(_registers) {
    reset();
}

void Intel8080Processor::load() {

}

void Intel8080Processor::emulateCycle() {
    _instructions.execute(0x00);
}

void Intel8080Processor::reset() {
	_registers->reset();
}

void Intel8080Processor::printStateInfo() {
    printf("\t");
	printf("%c", _registers->conditionCodes.z ? 'z' : '.');
	printf("%c", _registers->conditionCodes.s ? 's' : '.');
	printf("%c", _registers->conditionCodes.p ? 'p' : '.');
	printf("%c", _registers->conditionCodes.cy ? 'c' : '.');
	printf("%c  ", _registers->conditionCodes.ac ? 'a' : '.');
	printf("A $%02x B $%02x C $%02x D $%02x E $%02x H $%02x L $%02x SP %04x\n", _registers->a, _registers->b,
           _registers->c, _registers->d, _registers->e, _registers->h, _registers->l, _registers->sp);
}

