#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define instructions set
#define MEMORY_SIZE 256
#define NUM_INSTRUCTIONS 6
#define ADD    0x01
#define SUB    0x02
#define MOV    0x03
#define LOAD   0x04
#define STORE  0x05

// Define Registers
typedef struct {
	uint8_t a;
	uint8_t b;
	uint8_t c;
	uint8_t d;
	uint16_t ip; // Instructions pointer
} CPU;

// Define memory
typedef struct {
	uint8_t data[MEMORY_SIZE]
} Memory;

typedef void (*Instruction)(CPU*, Memory*);

// ADD Method
void add(CPU* cpu, Memory* memory) {
	uint8_t o1 = memory->data[cpu->ip + 1];
	uint8_t o2 = memory->data[cpu->ip + 2];

	cpu->a = o1 + o2;
	cpu->ip += 3;
}
