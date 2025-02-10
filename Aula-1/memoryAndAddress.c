#include <stdio.h>

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