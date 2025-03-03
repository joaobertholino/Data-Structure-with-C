#include "./Aula-1/static-alloc.c"
#include "./Aula-1/dynamic-alloc.c"
#include "./Aula-2/dynamic_array-ex.c"
#include "./Aula-3/dynamic_array_contiguous_alloc.c"

void dynamic_array_exec(int argc, char** argv) {
	// puts("Introduction static arrays");
	// static_alloc();

	// puts("\nIntroduction for 2D and 3D arrays");
	// dynamic_alloc();
	// exec(argc, argv);
	exec_dynamic_array_contiguous_alloc();
}