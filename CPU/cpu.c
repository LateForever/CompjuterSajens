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


