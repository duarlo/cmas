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

suma(float arreg[],float arreg2[], int dim)
{float v3[dim];
int g;
    for(g=0;g<dim;g++)
        {
    v3[g]= arreg[g]+arreg2[g];}
    imprimir(v3,dim);

}

main()
{int tan,mar;
tan=pedirdimension();
mar=pedirdimension();
if(tan==mar)
{
float vector[tan], vector2[tan];
guardaarreglo(vector,tan);
guardaarreglo(vector2,tan);
p("la suma es:\n");
suma(vector,vector2,tan);
}
else
    p("Error");
}
