#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf
main()
{
int q,i,j,opt;
inicio:
p("escriba la dimension nxn de la matriz por favor\n");
s("%i",&q);
if(q==0)
{
p("datos no validos\n");
goto inicio;
}
else
{
float mat[q][q],r;
r=0;
p("escriba su matriz por favor\n");
for (i=0;i<q;i++)
{
	for(j=0;j<q;j++)
	{
		p("casilla [%i] [%i]\n",i+1,j+1);
		s("%f",&mat[i][j]);
	}
}
p("tu matriz es\n");
for (i=0;i<q;i++)
{
	for(j=0;j<q;j++)
	{
		p("%f",mat[i][j]);
	}
	p("\n");
}
for (i=0;i<q;i++)
{
	r=mat[i][i]+r;
}
p("su traza es %f\n",r);
p("desea repetir presione 1 para continuar \n");
s("%i",&opt);
if(opt==1)
{
	goto inicio;
}

}
}



