#include <stdio.h>
#include "./Aula-1/memoryAndAddress.c"
#include "./Aula-2/pointers.c"
#include "./Aula-3/sizeOfData.c"
#include "./Aula-4/pointersOfPointers.c"
#include "./Aula-5/pointersOfPointersEx.c"
#include "./Aula-6/pointersOfPointersMoreEx.c"
#include "./Aula-7/EndPointers.c"
#include "./Aula-8/functions.c"
#include "./Aula-9/funcex.c"
#include "./Aula-10/vectors.c"
#include "./Aula-11/pointer_arithmetic.c"

void init(void) {
	puts("Memory Address examples");
	memoryAddress();

	puts("Pointers examples");
	pointer();

	puts("Data Types");
	dataSize();

	puts("Pointers of Pointers");
	pointersOfPointers();

	puts("Pointers of pointers examples");
	pointerOfPointerEx();

	puts("Pointers of pointers more examples");
	more_pointers();

	puts("End pointers examples");
	end_pointers();

	puts("Functions in C");
	int a = 10;
	int b = 20;
	int c;

	puts("PASSAGEM POR VALOR");
	puts("FORA DA FUNÇÃO");
	printf("'a' %i\n", a);
	printf("'b' %i\n", b);
	printf("'&a' %p\n", &a);
	printf("'&b' %p\n\n", &b);
	passage_through_values(a, b);

	puts("PASSAGEM POR REFERENCIA");
	puts("DENTRO DA FUNÇÃO");
	printf("'a' %i\n", a);
	printf("'b' %i\n", b);
	printf("'c' %d\n", c);
	printf("'&a' %p\n", &a);
	printf("'&b' %p\n", &b);
	printf("'&c' %p\n", &c);
	passage_through_reference(a, b, &c);

	printf("'&c' %p\n", &c);
	printf("'c' %d\n\n", c);

	puts("Função que retorna a suma e subtração de dois inteiros");
	int x = 10;
	int y = 20;
	int result_sub;

	int result_sum = sun_and_sub(x, y, &result_sub);
	printf("'x' %d\n", x);
	printf("'y' %d\n", y);
	printf("'result_sum' %d\n", result_sum);
	printf("'result_sub' %d\n\n", result_sub);

	puts("Evitando que funções alterem conteúdos de endereços de memoria");
	sun(x, y, &result_sum);

	puts("Troca de valores entre ponteiros");
	puts("ANTES DA FUNÇÃO");
	printf("'x' %d\n", x);
	printf("'y' %d\n", y);

	replacement(&x, &y);

	puts("\nDEPOIS DA FUNÇÃO");
	printf("'x' %d\n", x);
	printf("'y' %d\n\n", y);

	// puts("scanf e ponteiros");
	// scan(x, y);

	// puts("Vetores");
	// vectors();
	// vectorsScan();

	puts("Pointer Arithmetic");
	pointer_arithmetic();
}