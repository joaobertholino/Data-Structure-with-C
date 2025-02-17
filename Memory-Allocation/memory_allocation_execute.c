#include <stdio.h>
#include <stdlib.h>

#include "./Aula-1/calloc.c"
#include "./Aula-1/malloc.c"

void init_MA() {
	puts("malloc");
	ex_malloc();

	puts("calloc");
	ex_calloc();
}
