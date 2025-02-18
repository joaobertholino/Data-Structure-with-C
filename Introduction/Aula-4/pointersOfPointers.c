void pointersOfPointers() {
	int a = 10;
	int* b = &a;
	int** c = &b;
	int*** d = &c;
	int**** e = &d;

	printf("&a = %p, a = %d\n", &a, a);
	printf("&b = %p, b = %p\n", &b, b);
	printf("&c = %p, c = %p\n", &c, c);
	printf("&d = %p, d = %p\n", &d, d);
	printf("&e = %p, e = %p\n\n", &e, e);
}
