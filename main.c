#include <math.h>
#include <stdio.h>
#include "./Aula-1/memoryAndAddress.c"
#include "./Aula-2/pointers.c"
#include "./Aula-3/sizeOfData.c"
#include "./Aula-4/pointersOfPointers.c"
#include "./Aula-5/pointersOfPointersEx.c"
#include "./Aula-6/pointersOfPointersMoreEx.c"
#include "./Aula-7/EndPointers.c"
#include "./Aula-8/functions.c"

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

	printf("Pointers of pointers examples\n");
	pointerOfPointerEx();

	printf("Pointers of pointers more examples\n");
	more_pointers();

	printf("End pointers examples\n");
	end_pointers();

	printf("Functions in C\n");
	int a = 10;
	int b = 20;


	printf("'a' primario %i\n", a);
	printf("'b' primario %i\n", b);
	printf("'&a' primario %p\n", &a);
	printf("'&b' primario %p\n\n", &b);
	sun(a, b);
	return EXIT_PROCESS;
}
