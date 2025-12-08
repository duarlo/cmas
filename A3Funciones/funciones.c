#include <math.h>
#include <stdio.h>

double leerdato() {
  int r = 0;
  double dato;
  while (r == 0) {
    printf("Dato:");
    r = scanf("%lf", &dato);
    if (r == 0) {
      printf("Dato no valido\n");
      while (getchar() != '\n')
        ; // Limpiar buffer solo si hubo error
    }
  }
  return dato;
}
double log(double y) {
  double resultado;
  resultado = log10(y);
  return resultado;
}
int main(void) {
  double x, n;
  n = leerdato();
  x = log(n);
  printf("El logaritmo de %g es %f\n", n, x);
}