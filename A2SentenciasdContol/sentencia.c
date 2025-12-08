#include <math.h>
#include <stdio.h>

int main(void) {
  int r = 0;
  double x, n;
  while (r == 0) {
    printf("Dato:");
    r = scanf("%lf", &n);
    if (r == 0) {
      printf("Dato no valido\n");
      while (getchar() != '\n')
        ; // Limpiar buffer solo si hubo error
    }
  }
  x = log10(n);
  printf("El logaritmo de %g es %f\n", n, x);
}
