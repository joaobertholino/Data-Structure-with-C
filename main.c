#include <stdio.h>
#include "./Aula-1/memoryAndAddress.c"
#include "./Aula-2/pointers.c"
#include "./Aula-3/sizeOfData.c"
#include "./Aula-4/pointersOfPointers.c"
#include "./Aula-5/pointersOfPointersEx.c"

#define EXIT_PROCESS 0

int main(void) {
	printf("Memory Address examples\n");
	memoryAddress();

	printf("Pointers examples\n");
	pointer();

	printf("Data Types\n");
	dataSize();

	printf("Pointers of Pointers\n");
	pointersOfPointers();

	printf("Pointers of pointers Examples\n");
	pointerOfPointerEx();
	return EXIT_PROCESS;
}
