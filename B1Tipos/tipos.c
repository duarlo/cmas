#include <stdbool.h>
#include <stdio.h>

int main() {
  // Tipos de datos
  /**Los  tipos de datos en C se clasifican en:
   * 1. Tipos de datos primitivos
   * 2. Tipos de datos derivados
   */

  // Tipos de datos primitivos
  /**
   * 1. Enteros
   *      char
   *      short
   *      int
   *      long
   *      long long
   *      enum
   * 2. Reales
   *      float
   *      double
   *      long double
   */

  // Se este tipo de datos se pueden calificar mediante signed(el signo importa)
  // o unsigned (el signo no importa se considera siempre positivo) por defecto
  // al declarar una variable se utilizar signed

  // tipo char datos enteros que van desde -128 a 127
  char c = 'a';
  unsigned char uc = 'a';
  char oc = 0141;
  char hc = 0x61;
  char dc = 97;
  printf("Al asignar el valor de 'a' a una variable tipo char se obtiene: \" "
         "%c \"\n",
         c);
  printf("Al asignar el valor de 'a' a una variable tipo unsigned char se "
         "obtiene: \" %c \"\n",
         uc);
  printf("Al asignar el valor de '0141' a una variable tipo char (octal) se "
         "obtiene: \" %c \"\n",
         oc);
  printf("Al asignar el valor de '0x61' a una variable tipo char (hexadecimal) "
         "se obtiene: \" %c \"\n",
         hc);
  printf("Al asignar el valor de '97' a una variable tipo char (decimal) se "
         "obtiene: \" %c \"\n",
         dc);
  // otro tipo de datos enteros son los booleanos que solo pueden tener dos
  // valores true o false
  // es necesario incluir la libreria <stdbool.h> para usar bool
  bool b = false;
  printf("Al asignar el valor de false a una variable tipo bool se obtiene: \" "
         "%d \"\n",
         b);
  bool b2 = true;
  printf("Al asignar el valor de true a una variable tipo bool se obtiene: \" "
         "%d \"\n",
         b2);

  // tipo short datos enteros que van desde -32768 a 32767
  short s = 1;
  unsigned short us = 1;
  short os = 01;
  short hs = 0x1;
  short ds = 1;
  printf("Al asignar el valor de '1' a una variable tipo short se obtiene: \" "
         "%d \"\n",
         s);
  printf("Al asignar el valor de '1' a una variable tipo unsigned short se "
         "obtiene: \" %d \"\n",
         us);
  printf("Al asignar el valor de '01' a una variable tipo short (octal) se "
         "obtiene: \" %d \"\n",
         os);
  printf("Al asignar el valor de '0x1' a una variable tipo short (hexadecimal) "
         "se obtiene: \" %d \"\n",
         hs);
  printf("Al asignar el valor de '1' a una variable tipo short (decimal) se "
         "obtiene: \" %d \"\n",
         ds);
  //
  printf("\t\t");

  // tipo int datos enteros que van desde -2147483648 a 2147483647
  int i = 1;
  unsigned int ui = 1;
  int oi = 01;
  int hi = 0x1;
  int di = 1;
  printf("Al asignar el valor de '1' a una variable tipo int se obtiene: \" %d "
         "\"\n",
         i);
  printf("Al asignar el valor de '1' a una variable tipo unsigned int se "
         "obtiene: \" %d \"\n",
         ui);
  printf("Al asignar el valor de '01' a una variable tipo int (octal) se "
         "obtiene: \" %d \"\n",
         oi);
  printf("Al asignar el valor de '0x1' a una variable tipo int (hexadecimal) "
         "se obtiene: \" %d \"\n",
         hi);
  printf("Al asignar el valor de '1' a una variable tipo int (decimal) se "
         "obtiene: \" %d \"\n",
         di);
}