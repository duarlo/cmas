#include <stdio.h>
#define s scanf
#define p printf
int k,l,i4,j4;
int n,i,r;

 int n, i, j;
char arreglo2 [50];
acomoda_datos()
{
float mat[k][l];
  p("la traspuesta es\n");
    for(j4=0;j4<l;j4++)
    {
         for (i4=0;i4<k;i4++)
        {
         p("%f",mat[i4][j4]);
        }
        p("\n");
    }
}
imprime_datos()
{
float mat[k][l];
 p("tu matriz es\n");
     for (i4=0;i4<k;i4++)
    {
        for(j4=0;j4<l;j4++)
        {
         p("%f",mat[i4][j4]);
        }
        p("\n");
    }
}
guarda_datos()
{
p("escriba la dimension de su matriz\n");
s("%i %i",&k,&l);
float mat[k][l];
    for (i4=0;i4<k;i4++)
    {
        for(j4=0;j4<l;j4++)
        {
         s("%f",&mat[i4][j4]);
        }
    }
}

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
ultima(char* frase)
{
{
 printf("Escribe una frase: ");
    gets (frase);}
   return frase[ strlen(frase)-1 ];
}
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
    int opcm;
    inicio:
    p("selecione una opcion 1-4\n");
    s("%i",&opcm);
    switch (opcm)
    {
    case 1:
escribirTabladeMultiplicar();
imprimirtabla();
        break;

        case 2:
            {
    char frase [100];
    gets (frase);
    printf("La ultima letra es: %c", ultima(frase));}
        break;
        case 3:
pedirdatos();
acomodadatos();
imprimirdatos();
        break;
        case 4:
         guarda_datos();
   imprime_datos();
acomoda_datos();
         break;

         default: p("error\n"); goto inicio;
    }

}
