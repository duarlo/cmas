#include <stdio.h>
#define p printf
#define s scanf
main()
{
int mat[2][2],mat1[2][2],i2,j2;
p("escribe los valores de matriz 1\n");
for(i2=0;i2<2;i2++)
{
for(j2=0;j2<2;j2++)
{
p("escribe el valor de celda (%i)(%i)\n",i2+1,j2+1);
s("%i",&mat[i2][j2]);
}
}

p("tu matriz 1 es\n");
for(i2=0;i2<2;i2++)
{
p("\n");
for(j2=0;j2<2;j2++)
{
p("%i",mat[i2][j2]);
p("\t");
}
}
p("\n");
p("escribe los valores de matriz 2\n");
for(i2=0;i2<2;i2++)
{
for(j2=0;j2<2;j2++)
{
p("escribe el valor de celda (%i)(%i)\n",i2+1,j2+1);
s("%i",&mat1[i2][j2]);
}
}
p("tu matriz 2 es\n");
for(i2=0;i2<2;i2++)
{
p("\n");
for(j2=0;j2<2;j2++)
{
p("%i",mat1[i2][j2]);
p("\t");
}
}
p("\nla suma de tus diagolanes es para la matriz 1 %i",mat[1][1]+mat[2][2]);
p("\nla suma de tus diagolanes es para la matriz 2 %i",mat1[1][1]+mat1[2][2]);
}
