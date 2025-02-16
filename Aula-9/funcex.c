#include <stdio.h>

/**
 * Declarando o parametro do tipo ponteiro como const (constante), garantimos
 * que o valor contido no endereço de memoria que este ponteiro aponta não será
 * alterado.
 */
void sun(int x, int y, const int *z) {
  printf("'x' %d\n", x);
  printf("'y' %d\n", y);
  printf("'*z' %d\n", *z);

  int sun = x + y + *z;

  printf("'sun' %d\n\n", sun);
}

void replacement(int *x, int *y) {
  int aux = *x;
  *x = *y;
  *y = aux;
}

/**
 * scanf recebe um dado pelo stdin e atribui ao endereço de memoria passado como
 * argumento.
 */
void scan(int x, int y) {
  scanf("%d", &x);
  scanf("%d", &y);

  printf("'x' %d\n", x);
  printf("'y' %d\n", y);
  printf("'&x' %p\n", &x);
  printf("'&y' %p\n", &y);
}