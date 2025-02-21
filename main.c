#include <stdio.h>

#include "./Introduction/execute-intro.c"
#include "./Memory-Allocation/memory_allocation_execute.c"
#include "./Dynamic-Array/dynamic_array.c"

#define EXIT_PROGRAM 0

int main(void) {
	// Introdução
	// init();

	// Memory Allocation
	init_MA();
	dynamic_array_exec();
	return EXIT_PROGRAM;
}
