//    Lines           Columns          Value address
//     int**     =>     int*     =>     &int{value}
void representation_dynamic_2D() {
	int nrows = 2;
	int ncols = 3;
	int count = 0;

	int** m = calloc(nrows, sizeof(int*));
	for (int i = 0; i < nrows; i++) {
		m[i] = calloc(ncols, sizeof(int));
	}

	printf("&m = %p, m = %p\n\n", &m, m);

	for (int i = 0; i < nrows; i++) {
		printf("&m[%d] = %p, m[%d] %p\n", i, &m[i], i, m[i]);

		for (int j = 0; j < ncols; j++) {
			m[i][j] = count++;
			printf("&m[%d][%d] = %p, m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
		}
		puts("");
	}
}

void representation_dynamic_3D() {
}

void other_exemple() {
	puts("Other exemple for pointers and strings");

	char hello[] = "Hello World";
	printf("from main: %d\n", &hello);

	char* hello2 = malloc(sizeof(hello));
	strcpy(hello2, hello);
	printf("hello2: %x\n", hello2);

	char* hello3 = hello2 + 6;
	printf("from hello2: %s\n", hello2);
	printf("from hello3: %s\n", hello3);
}

void dynamic_alloc() {
	representation_dynamic_2D();
	representation_dynamic_3D();
	other_exemple();
}
