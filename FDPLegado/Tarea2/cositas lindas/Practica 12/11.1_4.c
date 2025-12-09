#include <stdio.h>
#define s scanf
#define p printf
int k,l,i4,j4;

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
        p("[%i] [%i]",i4,j4);
         s("%f",&mat[i4][j4]);
        }
    }
}
main()
{
   guarda_datos();
   imprime_datos();
acomoda_datos();
}
