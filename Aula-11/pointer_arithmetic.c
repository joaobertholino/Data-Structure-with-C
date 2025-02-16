#include <stdio.h>

void pointer_arithmetic() {
  int v[5] = {10, 20, 30, 40, 50};

  // v = Endereço de memoria do primeiro elemento do vetor
  printf("%p\n", v);
  printf("%p\n", &v[0]);

  // v[0] = Valor contido na primeira posição do vetor
  printf("%d\n", v[0]);

  // Somando a qtd de bytes do tipo declarado ao endereço de memoria do primeiro
  // elemento do vetor, resultando no endereço de memoria do elemento seguinte
  printf("%p\n", v + 1);
  printf("%p\n", &v[1]);
}