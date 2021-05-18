/* @jxvtrl */

#include <stdio.h>
int main (){
    double valor;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    printf("O valor em notação cientifica é: %.1e", valor);

return(0);}