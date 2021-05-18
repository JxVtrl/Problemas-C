/* @jxvtrl */

#include <stdio.h>
int controle = 1;
int main (){
    int numero;
    printf("Qual o numero inteiro positivo? \n");
    scanf("%d", &numero);
    verifica(numero);
    return(0);}

void verifica(numero){
        while (controle < numero){
            printf("%d\n", controle);
            controle++;
            controle++;}
        while (controle < numero){
            printf("%d\n", controle);
            controle++;
            controle++;}
    return 0;}



