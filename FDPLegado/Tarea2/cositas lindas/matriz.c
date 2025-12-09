#include <stdio.h>
#define s scanf
#define p printf
main ()
{
int i,j;
float matriz[3][3],k;
for (i=0;i<3;i++)
{


    for (j=0;j<3;j++)
    {
        p ("Dame numero");
        s ("%f", &matriz[i][j]);
    }


}
for (i=0;i<3;i++)

{

    p("\n");
    for (j=0;j<3;j++)
    {
        p ("%.2f\t ", matriz[i][j]);
    }
}
for (i=0;i<3;i++)
{


    for (j=0;j<3;j++)
    {
       k=k+matriz[i][j];
    }

}

 p ("\nSuma= %f", k);
}
