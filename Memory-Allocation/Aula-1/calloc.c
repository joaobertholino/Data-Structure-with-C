void ex_calloc() {
	int* v = calloc(5, sizeof(int));
	v[0] = 10;
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;

	for (int i = 0; i < 5; i++) {
		printf("(v + %d) = %p | %d\n", i, v + i, *(v + i));
	}

	puts("");
	free(v);
}
