/**
 * Libera memoria alocada dinamicamente.
 */
void memory_free(double** dptr) {
	free(*dptr);
	*dptr = nullptr;
}

/**
 * Aloca um espaço de memoria de tamanho n * sizeof(double) e retorna.
 */
double* vector_one(const int n) { return malloc(n * sizeof(double)); }

/**
 * Recebe um ponteiro que aponta para um ponteiro do tipo double, aloca um espaço
 * de memoria de tamanho n * sizeof(double) e 'retorna' por meio da referencia recebida.
 */
void vector_two(const int n, double** vptr) {
	*vptr = malloc(n * sizeof(double));
}

void use_vector_one() {
	puts("RETORNO COMUM");
	double* v = vector_one(3);
	for (int i = 0; i < 3; i++) {
		*(v + i) = 10.5;
		printf("%p | %f\n", v + i, *(v + i));
	}
	memory_free(&v);
}

void use_vector_two() {
	puts("\nRETORNO POR PASSAGEM POR REFERENCIA");
	double* v;
	vector_two(3, &v);

	for (int i = 0; i < 3; i++) {
		*(v + i) = 40.5;
		printf("%p | %f\n", v + i, *(v + i));
	}
	memory_free(&v);
	puts("");
}

void exec_ex() {
	use_vector_one();
	use_vector_two();
}
