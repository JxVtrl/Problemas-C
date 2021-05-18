/* @jxvtrl */

#include <stdio.h>
int main(){
    int cont = 0,n,primeiro,numeros;
    printf("Quantos numeros voce quer que sejam contados?\n");
    scanf("%i",&numeros);

    do{
        printf("\nEscolha o numero a ser contado: (%d)\n",numeros);
        scanf("%i",&n);
        numeros--;
        if(n == 0) 
        cont = 1;
        else{
            for (cont = 1; n>=10 ; cont++){
            n = n / 10;}
        primeiro=n;}

    printf("%d digitos\n%d era o primeiro digito.", cont,primeiro);
    } while (numeros>0);
      

return 0;}