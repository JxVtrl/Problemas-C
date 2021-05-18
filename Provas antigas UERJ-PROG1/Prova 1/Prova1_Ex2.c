/*
  
@jxvtrl 

Exercicio Número 2 da Prova 1 de Introdução a Programação

*/

#include <stdio.h>

int main(){
    int x,y,contador = 1,primeiro,segundo;
    printf("Entre com o primeiro numero a ser verificado.\n");
    scanf("%d", &x);
    printf("Entre com o segundo numero a ser verificado.\n");
    scanf("%d", &y);
    for (contador = 1; contador <= 9; contador++){
        primeiro    = contador(x,contador);
        segundo     = contador(y,contador);
        if(y != 0){
            contador=0;
        }
    }

return 0;}

int contador(int num){
    int c=0, resto;
    while(num!=0){
        resto = num%10;
        num = num/10;
        if (resto == ){
            c++;
        }
    }

return c;}