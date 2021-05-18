/* @jxvtrl */

#include <stdio.h>
int main (){
    float VALOR,total;
    float desconto = 0.2;

    printf("Valor do produto: ");
    scanf("%f", &VALOR);

    total= VALOR - (desconto*VALOR);

    printf("Valor com desconto: %.1f", total);


return(0);}