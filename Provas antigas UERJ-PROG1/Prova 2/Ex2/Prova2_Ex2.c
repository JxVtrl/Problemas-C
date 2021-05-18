/*
  
@jxvtrl 

Exercicio Número 2 da Prova 2 de Introdução a Programação

*/


#include <stdio.h>

int main() {
    int vetor[10];
    int i=0,par=0,impar=0,n=9;
    for (i = 0; i != 10; i++){
        printf("\nQual o valor (%d): ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i] > 100 || vetor[i] < 0){
            printf("\nNumero invalido. Tente um numero entre 0 e 100.");
            printf("\nQual o valor (%d): ", i+1);
            scanf("%d", &vetor[i]);
        }   
    }

    for (n = 9; n >= 0; n--){
            printf("%d ", vetor[n]);
            if (vetor[n]%2==0){
                par++;
            }
            else {
                impar++;
            }
        }
        printf("\n\n%d valores pares e %d valores impares.", par,impar);


return 0;
}