#include<stdio.h>
#define p printf
#define s scanf
pedirdimension()
{int i,dim;
p("LA DIMENSION DE LOS VECTORES TIENE QUE SER LA MISMA\n");
p("que dimension es el vector?\t");
s("%i",&dim);
return (dim);
}

guardaarreglo(float arreg[], float arreg2[],int dim)
{int i,g;
  for(i=0;i<dim;i++)
{ p("ingresa los valores del vector 1:\t");
s("%f",&arreg[i]);}
for(g=0;g<3;g++)
{p("ingresa los valores del vector 2\t");
s("%f", &arreg2[g]);
}
}

productopunto(float v1[],float v2[], int dim)
{int pp,g;
float acum;
    acum=0;
for(g=0;g<dim;g++)
   {pp= (v1[g]*v2[g]);
   acum=pp+acum;}
p("el producto punto es:%.2f",acum);
}
main()
{int tan;
tan=pedirdimension();
float vector1[tan], vector2[tan];
guardaarreglo(vector1,vector2,tan);
productopunto(vector1,vector2,tan);
}
