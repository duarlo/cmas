#include <stdio.h>
#include <math.h>
main()
{
int K,X,AP,N;
float AS;
printf("el temino generico de la serie es: X^K/K!");
scanf("%d",&N);
printf("\nN=");
scanf("%d",&X);
K=0;
AP=0;
AS=0;
while(K<=N)
{
AS=AS+pow(X,K)/AP;
K=K+1;
AP=AP+K;

}
printf("sum=%i",AS);
}
