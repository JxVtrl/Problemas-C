/*
  
@jxvtrl 

Exercicio Número 1 da Prova 2 de Introdução a Programação

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define MAX 20

int main() {
    int i=0,j=0;
    char palavra[MAX], inverso[MAX];

    printf("\nDigite uma palavra: ");
    gets(palavra);
    printf("%s", palavra);

    int tam = strlen(palavra);


    printf("\nTamanho: %d", tam);

    for (i = tam-1; i >= 0; i--, j++)
    {
        printf("%c", palavra);
        inverso[j] = palavra[i];
    }
    inverso[j] = '\0';

    if (strcmp(palavra,inverso)==0){
        printf("\nA palavra %s e palindromo\n", palavra);
    }
    else{
        printf("\nA palavra %s nao e palindromo\n", palavra);
    }

return 0;
}
     