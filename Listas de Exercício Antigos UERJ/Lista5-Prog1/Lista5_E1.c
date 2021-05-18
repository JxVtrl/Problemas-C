/* @jxvtrl */

#include <stdio.h>
int main (){
    float inteiro,soma;
    int controle = inteiro;
    
    printf("Qual o inteiro?\n");
    scanf("%f", &inteiro);
    float inteirao = inteiro;
   
    while (inteiro > 0 )
    {
        
        soma = soma + inteiro;
        inteiro--;

        printf("Soma = %.0f\n", soma);
        printf("inteiro = %.0f\n\n", inteiro);
    }

    printf("A soma dos %.0f primeiros eh: %.0f", inteirao,soma);       
        
    return(0);
}
