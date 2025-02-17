#include <stdio.h>

void end_pointers() {
	int a;
	int b;
	int *p1;
	int *p2;

	a = 4;
	b = 3;
	p1 = &a;
	p2 = p1;
	*p2 = *p1 + 3;
	b = b * *p1;
	(*p2)++;
	p1 = &b;

	printf("*p1 = %d *p2 = %d\n", *p1, *p2); // *p1 = 21 / *p2 = 8
	printf("a = %d b = %d\n\n", a, b); // a = 8 / b = 21
	printf("&p1 = %p &p2 = %p\n", &p1, &p2);
	printf("&a = %p &b = %p\n\n", &a, &b);
}
