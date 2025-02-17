void vectors() {
	int v[5] = {0, 1, 2, 3, 4};

	for (int i = 0; i < 5; i++) {
		printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
	}

	printf("&v[6] = %p, v[6] = %d\n\n", &v[6], v[6]);
}

void vectorsScan() {
	int v[5];

	for (int i = 0; i < 5; i++) {
		scanf("%d", &v[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("&v[i] = %p, v[i] = %d\n", &v[i], v[i]);
	}
	puts("");
}
