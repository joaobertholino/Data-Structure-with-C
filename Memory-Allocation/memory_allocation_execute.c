#include <stdio.h>
#include <stdlib.h>

#include "./Aula-1/calloc.c"
#include "./Aula-1/malloc.c"
#include "./Aula-2/static_vector.c"
#include "./Aula-3/ex_leak_memory.c"

void init_MA() {
	puts("malloc");
	ex_malloc();

	puts("calloc");
	ex_calloc();

	puts("Vetores estáticos e dinâmicos");
	exec_vectors();

	puts("Exercicio alocação de memoria");
	exec_ex();
}
