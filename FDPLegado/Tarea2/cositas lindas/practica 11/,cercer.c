#include <stdio.h>
int main(){
      char *aux,*n;
      int w=0,cont=0,x,q,p,i,j,z;
       printf("Numero de alumnos\n");
       scanf("%i",&q);
       char *nombre[q];
       int calif[q];
       for(i=0;i<q;i++){
           nombre[i]="";
           calif[i]=0;
       }
       while(q>cont){
       n=(char *) malloc(sizeof(char)*10);
       printf("Ingresa nombre\n");
       scanf("%s",n);
       nombre[cont]=n;
       printf("Ingresa calificacion\n");
       scanf("%i",&p);
       calif[cont]=p;
       cont++;
       }
       while(w!=(q-1))
        {
           w=0;
           for(z=0;z<(q-1);z++)
            {
           if(calif[z]>=calif[z+1])
            {
           w++;
           }
           else
            {
            x=calif[z];
            calif[z]=calif[z+1];
            calif[z+1]=x;
            aux=nombre[z];
            nombre[z]=nombre[z+1];
            nombre[z+1]=aux;
           }
           }
       }
       for(j=0;j<q;j++)
        {
           printf("Nombre: %s Calificacion: %i\n",nombre[j],calif[j]);
       }
      return 0;
}
