#include <stdio.h>
#define s scanf
#define p printf
main()
{
float mat[3][3],mat1[3][3],acum[3][3];
int k,l;
for(k=0;k<=2;k++)
{
    p(" fila %i\n",k+1);
    for(l=0;l<=2;l++)
    {
        p(" columna %i\n",l+1);
        s("%f",&mat[k][l]);
    }
}

for(k=0;k<=2;k++)
{
    p(" fila %i\n",k+1);
    for(l=0;l<=2;l++)
    {
        p(" columna %i\n",l+1);
        s("%f",&mat1[k][l]);
    }
}

for(k=0;k<=2;k++)
{
    for(l=0;l<=2;l++)
    {
        acum[k][l]=mat1[k][l]+mat[k][l];
    }

}
for(k=0;k<=2;k++)
{
 p("\n");
    for(l=0;l<=2;l++)
    {
        p("%f\t",acum[k][l]);
    }

}
}

