#include <stdio.h>
#define p printf
#define s scanf
main()
{
int d1,d2;
p("escriba la dimension mxn");
s("%i %i",d1,d2);
int mat2[d1][d2],mat3[d2][d1],i3,j3;
p("escribe los valores de matriz 1\n");
for(i3=0;i3<d1;i3++)
{
    for(j3=0;j3<d2;j3++)
    {
        p("escribe el valor de celda (%i)(%i)\n",i3+1,j3+1);
        s("%i",&mat2[i3][j3]);
    }
}
p("tu matriz es\n");
for(i3=0;i3<d1;i3++)
{
p("\n");
for(j3=0;j3<d2;j3++)
{
p("%i",mat2i3][j3);
p("\t");
}
}

