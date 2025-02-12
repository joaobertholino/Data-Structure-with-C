#include <stdio.h>

void pointerOfPointerEx() {
	int a = 10;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;

	// Trushing pointers until you reach the simple variable 'A', whose value is 10.
	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, *b);
	printf("&c = %p, c = %d\n", &c, **c);
	printf("&d = %p, d = %d\n", &d, ***d);
	printf("&e = %p, e = %d\n\n", &e, ****e);

	****e = 20;

	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %d\n", &b, *b);
	printf("&c = %p, c = %d\n", &c, **c);
	printf("&d = %p, d = %d\n", &d, ***d);
	printf("&e = %p, e = %d\n\n", &e, ****e);
}
