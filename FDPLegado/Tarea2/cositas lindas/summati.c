#include <stdio.h>
#define s scanf
#define p printf
main ()
{
int i,j;
float matriz[3][3],matriz2[3][3],acum[3][3],k;
  p ("Matriz 1\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {

        p ("Dame numero");
        s ("%f", &matriz[i][j]);
    }
}
p ("Matriz 2\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
    {
        p ("Dame numero");
        s ("%f", &matriz2[i][j]);
    }
}

for (i=0;i<3;i++)
{

    for (j=0;j<3;j++)
    {
       acum[i][j]=matriz[i][j]+matriz2[i][j];
    }
}
for(i=0;i<=2;i++)
{
 p("\n");
    for(j=0;j<=2;j++)
    {
        p("%f\t",acum[i][j]);
    }

}
}



