/* @jxvtrl */

#include <stdio.h>
int n=0;
int negativos(int vet[],n);
int main(){
    printf("Quantos numeros para adicionar?\n");
    scanf("%d", &n);
    int vet[n];
    int controle=0;
    while(n > 0){
        printf("Proximo numero: ");
        scanf("%d", &vet[n]);
        if (vet[n] < 0){
            controle++;
        }
        n--;
    }
printf("Quantidade de numeros negativos no vetor: %d", controle);

return 0;
}

