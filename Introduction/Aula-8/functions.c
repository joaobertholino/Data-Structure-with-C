/**
 * Passagem por valor = É feito uma cópia do argumento/valor, que pode ser usada
 * e alterada dentro da função sem afetar a váriável da qual ela foi gerada.
 */
int passage_through_values(int x, int y) {
	x++;
	y++;

	puts("\nDENTRO DA FUNÇÃO");
	printf("'x' %d\n", x);
	printf("'y' %d\n", y);
	printf("'&x' %p\n", &x);
	printf("'&y' %p\n\n", &y);
	return x + y;
}

/**
 * Passagem por reference = É feito passando um ponteiro como argumento para a
 * função, do qual passa a ser possível alterar valores contidos no endereço de
 * memoria que o ponteiro aponta.
 */
void passage_through_reference(int x, int y, int *z) {
	*z = x + y;

	puts("\nDENTRO DA FUNÇÃO");
	printf("'x' %d\n", x);
	printf("'y' %d\n", y);
	printf("'*z' %d\n", *z);
	printf("'&z' %p\n\n", &z);
}

int sun_and_sub(int x, int y, int *z) {
	*z = x - y;
	return x + y;
}
