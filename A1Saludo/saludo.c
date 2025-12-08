#include <stdio.h>

// funcion de saludo personalizado
void saludoPersonalizado(char *nombre) { printf("Hola, %s!\n", nombre); }

int main() {
  printf("Hola, Mundo!!!\n");

  // Comentario de una linea
  /*
  Comentario de varias lineas
  */
  printf("Escribe tu nombre:\n");
  char nombre[100];
  scanf("%s", nombre);
  saludoPersonalizado(nombre);
  return 0;
}
