#include <stdio.h>
#include <stdlib.h>

#define EXIT_PROCESS 0

void memoryAddress() {
	int a, b, c; // Declaring tree variable of int type
	a = 10; // Attributing value to 'a'

	printf("%p - %d\n", &a, a);
	printf("%p - %d\n", &b, b);
	printf("%p - %d\n\n", &c, c);

	a = 20; // Attributing value to 'a'
	c = b + a; // Attributing sun of 'b' and 'a' to 'c'

	printf("%p - %d\n", &a, a);
	printf("%p - %d\n", &b, b);
	printf("%p - %d\n\n", &c, c);
}

// Pointers have 8 bytes (64 bits)
void pointer() {
	int a = 10;
	int *p1 = nullptr;
	int *p2 = nullptr;

	printf("&a = %p, a = %d\n", &a, a);
	printf("&p1 = %p, p1 = %p\n", &p1, p1);
	printf("&p2 = %p, p2 = %p\n\n", &p2, p2);

	p1 = &a;
	p2 = p1;
	*p2 = 4;

	printf("&a = %p, a = %d\n", &a, a);
	printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
	printf("&p2 = %p, p2 = %p, *p2 = %d\n\n", &p2, p2, *p2);
}

void dataSize() {
	printf("Types\n");

	int a = 10;
	printf("a = %a\n\n", a);
	printf("sizeof(a) = %ld bytes\n", sizeof(a));
	printf("sizeof(int) = %ld bytes\n", sizeof(int));
	printf("sizeof(short) = %ld bytes\n", sizeof(short));
	printf("sizeof(long) = %ld bytes\n", sizeof(long));
	printf("sizeof(unsigned long) = %ld bytes\n", sizeof(unsigned long));
	printf("sizeof(unsigned long long) = %ld bytes\n", sizeof(unsigned long long));
	printf("sizeof(float) = %ld bytes\n", sizeof(float));
	printf("sizeof(double) = %ld bytes\n\n", sizeof(double));

	printf("Pointers\n");
	printf("sizeof(void *) = %ld bytes\n", sizeof(void *));
	printf("sizeof(int *) = %ld bytes\n", sizeof(int *));
	printf("sizeof(int **) = %ld bytes\n", sizeof(int **));
	printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***));
	printf("sizeof(float *) = %ld bytes\n\n", sizeof(float *));
}

void pointersOfPointers() {
	int a = 10;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;

	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %p\n", &b, b);
	printf("&c = %p, c = %p\n", &c, c);
	printf("&d = %p, d = %p\n", &d, d);
	printf("&e = %p, e = %p\n", &e, e);
}

int main(void) {
	printf("Memory Address examples\n");
	memoryAddress();

	printf("Pointers examples\n");
	pointer();

	printf("Data Types\n");
	dataSize();

	printf("Pointers of Pointers\n");
	pointersOfPointers();
	return EXIT_PROCESS;
}
