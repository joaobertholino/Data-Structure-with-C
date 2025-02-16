/*
 * Passagem por valor = É feito uma cópia do argumento/valor, que pode ser usada
 * e alterada dentro da função sem afetar a váriável da qual ela foi gerada.
 */
int sun(int x, int y) {
  x++;
  y++;

  printf("'x' secondary %d\n", x);
  printf("'y' secondary %d\n", y);
  printf("'&x' secondary %p\n", &x);
  printf("'&y' secondary %p\n\n", &y);
  return x + y;
}