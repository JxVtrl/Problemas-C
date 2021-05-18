/*
  
@jxvtrl 

Exercicio Número 1b da Prova 1 de Introdução a Programação

*/

#include <stdio.h>
int lado1,lado2,lado3;

int main(){
    printf("Qual o primeiro lado?\n");
    scanf("%i",&lado1);
    printf("Qual o segundo lado?\n");
    scanf("%i",&lado2);
    printf("Qual o terceiro lado?\n");
    scanf("%i",&lado3);

    //  Todos os lados iguais
    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){    
        printf("Triangulo Equilatero.\n");
    }
    
    //  Todos os lados diferentes
    if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){    
        printf("Triangulo Escaleno.\n");
    }

    //  Um dos lados diferente dos outros
    if (lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 ||lado2==lado3 && lado2 != lado1){ 
        printf("Triangulo Isosceles.\n");
    }
    
return 0;
}