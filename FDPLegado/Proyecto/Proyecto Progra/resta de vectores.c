#include<stdio.h>
#define p printf
#define s scanf

pedirdimension()
{int i,dim;
p("que dimension es el vector?\t");
s("%i",&dim);
return (dim);
}
imprimir(float arreg[],int dim)
{ int i;
for(i=0;i<dim;i++)
p("%.2f\t",arreg[i]);
}
guardaarreglo(float arreg[], int dim)
{int i;
  for(i=0;i<dim;i++)
{ p("ingresa el valor:\t");
s("%f",&arreg[i]);
}
}

resta1(float arreg[],float arreg2[], int dim)
{float v3[dim];
int g;
    for(g=0;g<dim;g++)
        {
    v3[g]= arreg[g]-arreg2[g];}
    imprimir(v3,dim);

}
resta2(float arreg[],float arreg2[], int dim)
{float v3[dim];
int g;
    for(g=0;g<dim;g++)
        {
    v3[g]= arreg2[g]-arreg[g];}
    imprimir(v3,dim);

}

main()
{int opc,tan,mar;
    p("en que orden quieres realizar la operacion?\n 1)v1-v2\n 2)v2-v1\n");
s("%i",&opc);
if (opc==1)
{tan=pedirdimension();
mar=pedirdimension();
if(tan==mar)
{
float vector[tan], vector2[tan];
guardaarreglo(vector,tan);
guardaarreglo(vector2,tan);
p("la resta es:\n");
resta1(vector,vector2,tan);
}
else
    p("Error");
}
else
{tan=pedirdimension();
mar=pedirdimension();
if(tan==mar)
{
float vector[tan], vector2[tan];
guardaarreglo(vector,tan);
guardaarreglo(vector2,tan);
p("la resta es:\n");
resta2(vector,vector2,tan);
}
else
    p("Error");}
}
