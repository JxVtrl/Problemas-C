/* @jxvtrl */

#include <stdio.h>
int ano;

int VerificaAno(ano){

    if (ano%4 == 0 && ((ano%100) != 0 || (ano%400) == 0)){
        printf("%d Eh um ano bissexto.",ano);}
    else{    
        printf("%d nao eh um ano bissexto.",ano);}

return (ano);}

int main() {

    printf("Entre com o ano a ser verificado: \n");
    scanf("%i", &ano);

    VerificaAno(ano);

return 0;}