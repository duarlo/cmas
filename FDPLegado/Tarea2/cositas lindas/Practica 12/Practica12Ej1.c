#include <stdio.h>
int n,i,r;
escribirTabladeMultiplicar()
{

printf ("Que tabla quieres?\n");
scanf ("%i", &n);
}
imprimirtabla()
{

for (i=1;i<=10;i=i+1)
    {
    r=n*i;
    printf ("%i x %i = %i\n", n, i, r);
    }
}
main ()
{
escribirTabladeMultiplicar();
imprimirtabla();
}
