#include <stdio.h>
#include <stdlib.h>
#incliude "definindo_tad.h"

int main () {
  Ponto *p, *q;
  float distancia;

  p = pto_cria(10, 21);
  q = pto_cria(7, 25);

  distancia = pto_distance(p, q);

  printf("A distancia entre os pontos eh: %f\n, distancia);

  pto_libera(p);
  pto_libera(q);

  return 0;
}
