//    Lines           Columns          Value address
//     int**     =>     int*     =>     &int{value}
void representation_dynamic_2D() {
	int nrows = 2;
	int ncols = 3;
	int count = 0;

	int** m = calloc(nrows, sizeof(int *));
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

void freeMemoryMatriz3D(int*** m, int n_slices, int n_rows) {
	for (int k = 0; k < n_slices; k++) {
		for (int i = 0; i < n_rows; i++) {
			free(*(*(m + k) + i));
		}
		free(*(m + k));
	}
	free(m);
	m = nullptr;
}

void representation_dynamic_3D() {
	puts("Representação de alocação de matrizes dinâmicas tridimensionais");

	int n_slices = 2;
	int n_rows = 2;
	int n_cols = 3;

	int*** m = calloc(n_slices, sizeof(int **));

	for (int k = 0; k < n_slices; k++) {
		*(m + k) = calloc(n_rows, sizeof(int *));
		for (int i = 0; i < n_rows; i++) {
			*(*(m + k) + i) = calloc(n_cols, sizeof(int));
		}
	}

	int count = 0;
	printf("&m = %p, m = %p\n\n", &m, m);

	for (int k = 0; k < n_slices; k++) {
		printf("&m[%d] = %p, m[%d] = %p\n", k, &m[k], k, m[k]);
		for (int i = 0; i < n_rows; i++) {
			printf("&m[%d][%d] = %p, m[%d][%d] = %p\n",
				k, i, &m[k][i], k, i, m[k][i]);

			for (int j = 0; j < n_cols; j++) {
				m[k][i][j] = count++;

				printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n",
					k, i, j, &m[k][i][j],
					k, i, j, m[k][i][j]);
			}
			puts("");
		}
	}
	freeMemoryMatriz3D(m, n_slices, n_rows);
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
	printf("from hello3: %s\n\n", hello3);
}

void dynamic_alloc() {
	representation_dynamic_2D();
	representation_dynamic_3D();
	other_exemple();
}
