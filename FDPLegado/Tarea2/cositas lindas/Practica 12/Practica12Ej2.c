#include <stdio.h>
#include<string.h>
ultima(char* frase)
{
   return frase[ strlen(frase)-1 ];
}
main(){
    char frase[100];
    printf("Escribe una frase: ");
    gets(frase);
    printf("La ultima letra es: %c", ultima(frase));
}
