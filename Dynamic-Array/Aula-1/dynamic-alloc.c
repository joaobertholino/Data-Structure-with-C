void representation_dynamic() {
	int nrows = 2;
	int ncols = 3;

	int** m = nullptr;
	m = calloc(nrows, sizeof(int*));

	for (int i = 0; i < nrows; i++) {
		m[i] = calloc(ncols, sizeof(int));
	}
	free(*m);
	m = nullptr;
}

void dynamic_alloc() {
	representation_dynamic();
}
