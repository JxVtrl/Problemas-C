/* @jxvtrl */

#include <stdio.h>
int main (){
    int comprimento, voltas, abastecimentos,consumo, total,novo,litros;
    printf("Qual o comprimento da pista? (em metros) ");
    scanf("%i", &comprimento);
    printf("Numero de voltas? ");
    scanf("%i", &voltas);
    printf("Consumo do carro? (Quantos km faz 1L)");
    scanf("%i", &consumo);
    printf("Quantos abastecimentos? ");
    scanf("%i", &abastecimentos);
    

    total = comprimento * voltas;
    consumo = consumo * 1000;
    novo = total / abastecimentos;
    litros = novo / consumo;
     
    printf("Litros necessarios ate abastecer: %i", litros);
    
return(0);}