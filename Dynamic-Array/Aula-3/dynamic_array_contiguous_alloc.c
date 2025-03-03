#define n_rows 3
#define n_cols 4

/**
 * Para acessar o elemento m[i][j] deve-se executar a seguinte operação:\n
 * i * n_cols + j
 * \n\n
 * i => A linha a qual deseja acessar.\n
 * n_cols => O numero total de colunas da matrix.\n
 * j => A coluna a qual deseja acessar.
 */
void dynamic_array_contiguous() {
	int* m = calloc(n_rows * n_cols, sizeof(int));
	for (int i = 0; i < n_rows; i++) {
		for (int j = 0; j < n_cols; j++) {
			const int p = i * n_cols + j;
			m[p] = (i + 1) * 10;
			printf("m[%d][%d] = %d\n", i, j, m[p]);
		}
		puts("");
	}
}

void exec_dynamic_array_contiguous_alloc() {
	dynamic_array_contiguous();
}
