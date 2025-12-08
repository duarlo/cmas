#include <locale.h>
#include <stdio.h>

#define N 10

int main(void) {
  setlocale(0, "");
  char car = 'A';
  int ent = 0, r = 0;
  double real = 0.0;
  char cadena[80] = "hola";
  float m[N];
  printf("%c\n", car);
  printf("%d\n", ent);
  printf("%f\n", real);
  printf("%s\n", cadena);

  printf("Hola amiguito ");
  printf("/n");
  printf("Cadena de Caracteres:");
  scanf("%s", cadena);
  printf("La Variable \"candena\" contiene:%s\n", cadena);

  printf("Introduce datos para la matriz:\n");
  for (int i = 0; i < N; i++) {
    printf("Elemento %d:", i);
    scanf("%f", &m[i]);
  }

  printf("\n");
  for (int i = 0; i < N; i++) {
    printf("m[%d]=%f\n", i, m[i]);
  }
}
