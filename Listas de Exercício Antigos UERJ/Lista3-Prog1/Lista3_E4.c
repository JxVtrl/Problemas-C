/* @jxvtrl */

#include <stdio.h>
int main (){
int num,antes,depois;

printf("Informe um numero: ");
scanf("%d", &num);

antes = num - 1;
depois = num + 1;
printf("O numero antecessor é: %d\nO numero informado é: %d\nO numero sucessor é: %d\n ",antes, num, depois);
return 0;
}