#include<stdio.h>
 int n, i, j;
char arreglo2 [50];
pedirdatos(){
 int n, i, j;
    printf ("Numero de alumnos\n");
    scanf ("%i", &n);
    int arreglo1 [n], aux;
    char arreglo2 [50];
    for (i=0;i<=n-1;i++)
    {
        printf ("Ingresa el nombre\n");
        scanf ("%s", &arreglo2 [i]);
        printf ("Ingresa la calificacion%i\n", i+1);
        scanf ("%i", &arreglo1 [i]);
    }

}
acomodadatos()
{
int arreglo1 [n], aux;
char arreglo2 [50];
printf ("Ordenados\n");
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            aux=0;
            if (arreglo1 [j]<arreglo1[j+1])
            {
                aux=arreglo1[j+1];
                arreglo1[j+1]=arreglo1 [j];
                arreglo1[j]=aux;
            }
        }

    }

}
imprimirdatos()
{
    int arreglo1 [n], aux;
char arreglo2 [50];
    for (i=0;i<=n-1;i++)
    printf ("%i\n", arreglo1 [i]);

}
main()
{
pedirdatos();
acomodadatos();
imprimirdatos();
}
