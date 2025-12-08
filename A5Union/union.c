/*******operaciones aritmeticas*********/

#include <stdio.h>

int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
int multiplicacion(int a, int b) { return a * b; }
double division(int a, int b) { return (double)a / (double)b; }
int main(void) {
  int dato1, dato2;
  printf("Introduce dos datos: ");
  scanf("%d %d", &dato1, &dato2);
  printf("Suma: %d\n", suma(dato1, dato2));
  printf("Resta: %d\n", resta(dato1, dato2));
  printf("Multiplicacion: %d\n", multiplicacion(dato1, dato2));
  printf("Division: %f\n", division(dato1, dato2));
}