#define base 0
#define multiply 10

// Função para desalocar a memoria da matrix
void destroy_memory_matrix(int n_lines, int*** m) {
	int** aux = *m;
	for (int i = 0; i < n_lines; i++) {
		free(aux[i]);
	}
	free(aux);
	*m = nullptr;
}

// Função para alocar memoria dinamicamente para a matrix e atribuir valores
// de tipo 'int', imprimindo no stdout os endereços de memoria de cada posição
// e os valores ali contidos.
void resolution(int n_lines, int n_cols) {
	int** m = calloc(n_lines, sizeof(int *));

	for (int i = 0; i < n_cols; i++) {
		*(m + i) = calloc(n_cols, sizeof(int));
		for (int j = 0; j < n_cols; j++) {
			*(*(m + i) + j) = (i + 1) * multiply;
			printf("&m[%d][%d] = %p, m[%d][%d] = %d\n",
				i, j, *(m + i) + j, i, j, *(*(m + i) + j));
		}
		puts("");
	}

	printf("&m[0] = %p, m[0] = %p\n", (m + base), *(m + base));
	destroy_memory_matrix(n_lines, &m);
	printf("'m' is NULL? %d\n", m == nullptr);
}

void exec(int argc, char** argv) {
	if (argc != 3) {
		printf("ERROR\n%s n_lines n_cols\n", *argv + 0);
		exit(0);
	}
	puts("PASSEI");
	resolution(atoi(*(argv + 1)), atoi(*(argv + 2)));
}
