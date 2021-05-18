/* @jxvtrl */

#include <stdio.h>
int main(){
int num1,num2,soma,diferenca,produto,quad;

printf("Insira o primeiro numero: ");
scanf("%d", &num1);

printf("Insira o segundo numero: ");
scanf("%d", &num2);

soma = num1 + num2;
diferenca = num1 - num2;
produto = num1 * num2;
quad = (num1 + num2)*(num1 + num2);

printf("=======================\nPrimeiro numero: %d\n", num1);
printf("=======================\nSegundo numero: %d\n=======================\n", num2);
printf("Sua soma é: %d\nSua diferença é: %d\nSeu produto é: %d\nSeu quadrado é: %d",soma,diferenca,produto,quad);

return 0;
}