/* @jxvtrl */

#include <stdio.h>
int main (){
int anoAtual = 2020, idade, anoNasce,S = 1,N = 2;
char controle;

printf("Qual sua idade? ");
scanf("%d", &idade);
printf("Ja fez aniversario esse ano? (S/N)");
scanf("%c", &controle);

switch (controle){
case ('N'):
    printf("controle: %c\n", controle);
    idade = idade + 1;
    anoNasce = anoAtual - idade;
    break;
case ('S'):
    printf("controle: %c\n", controle);
    anoNasce = anoAtual - idade;
break;
}
printf("Seu ano de nascimento é: %d", anoNasce);

return 0;
}