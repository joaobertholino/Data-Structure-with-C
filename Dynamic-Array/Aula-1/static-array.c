void representation() {
	const int n_rows = 2;
	const int n_cols = 3;
	int m[2][3] = {{0, 1, 2}, {3, 4, 5}};

	for (int i = 0; i < n_rows; i++) {
		for (int j = 0; j < n_cols; j++) {
			printf("&m[%d][%d] == %p | m[%d][%d] == %d\n", i, j, &m[i][j], i, j, m[i][j]);
		}
	}

	// &m == m == &m[0][0]
	printf("&m == %p | m == %p | &m[0][0] == %p\n", &m, m, &m[0][0]);
}

void static_array() {
	representation();
}