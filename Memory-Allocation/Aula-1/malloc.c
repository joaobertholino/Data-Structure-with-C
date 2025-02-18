/*
 * Toda variável é alocada na região de memoria chamada de STACK.
 * O espaço de memoria é alocado dinamicamente em runtime, ocupando
 * espaço somente quando esta sendo utilizada.
 *
 * Não é possível desalocar manualmente o espaço de memoria STACK, no entanto,
 * o espaço de memoria HEAP é de responsabilidade do desenvolvedor desalocar
 * memoria manualmente.
 */

/**
 * A função 'malloc' aloca contiguamente (sequencialmente) um espaço na memoria
 * HEAP do tamanho do tipo passado como argumento para a função, retornando um
 * ponteiro para o endereço base dessa alocação.
 *
 * No seguinte exemplo, esta sendo alocado um vetor de 5 posições, onde cada
 * posição tem o tamanho de um float (4 bytes).
 */
void ex_malloc() {
	int* v = malloc(5 * sizeof(int));
	v[0] = 30;
	v[1] = 40;
	v[2] = 50;
	v[3] = 60;
	v[4] = 70;

	for (int i = 0; i < 5; i++) {
		printf("(v + %d) = %p | %d\n", i, v + i, *(v + i));
	}

	puts("");
	free(v);
}
