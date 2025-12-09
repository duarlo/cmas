#include<stdio.h>
#include<ctype.h>
#include<conio.h>
 main ()
 {
 char cadena[50];
 int i;
 printf ("Ingrese texto en mayuscula\n");
 scanf ("%s", &cadena);
 for (i=0;cadena[i];i++)
 {
cadena[i]=tolower(cadena[i]);
 }
 printf("%s\n",cadena);
 }
