/* @jxvtrl */

#include <stdio.h>

int main() {
    int numero,numero1,reverso;
    printf("Digite um numero para verificar se eh palindromo\n");
    scanf("%d", &numero);

    numero1 = numero;
    reverso = 0;
    while (numero1 != 0){
        reverso = reverso *10 + numero1%10;
        numero1 = numero1 / 10;}

    if(reverso == numero)
    printf("%d eh palindromo\n", numero);
    else
    printf("%d nao eh palindromo\n", numero);


    return 0;
}