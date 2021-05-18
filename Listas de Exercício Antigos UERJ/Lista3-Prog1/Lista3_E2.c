/* @jxvtrl */

#include <stdio.h>
int main (){
int dia,mes,ano;

printf("Digite o dia do seu nascimento: ");
scanf("%d", &dia);

printf("Digite o mes do seu nascimento: ");
scanf("%d", &mes);

printf("Digite o ano do seu nascimento: ");
scanf("%d", &ano);

printf("Você nasceu em: %d/%d/%d", dia,mes,ano);
return 0;
}