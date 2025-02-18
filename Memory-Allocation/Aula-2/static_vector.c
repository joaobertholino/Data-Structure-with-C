#include "../Aula-3/reef.c"

void sum_vector_with_scalar(int *vs, int n, int scalar) {
	for (int i = 0; i < n; i++) {
		*(vs + i) += scalar;
	}
}

void print_vector(const int *v, int n) {
	for (int i = 0; i < n; i++) {
		printf("&v[%d] = %p, v[%d] = %d\n", i, (v + i), i, *(v + i));
	}
	puts("");
}

void with_calloc() {
	int *vh = calloc(5, sizeof(int));

	for (int i = 0; i < 5; i++) {
		*(vh + i) = i * 100;
	}

	print_vector(vh, 5);
	sum_vector_with_scalar(vh, 5, 9);
	print_vector(vh, 5);

	// Desalocando o vetor dinâmico
	reef_vector(&vh);
}

void exec_vectors() {
	puts("VETORES ESTÁTICOS");
	int vs[5] = {1, 2, 3, 4, 5};

	print_vector(vs, 5);
	sum_vector_with_scalar(vs, 5, 9);
	print_vector(vs, 5);

	puts("VETORES DINÂMICOS");
	with_calloc();
}
