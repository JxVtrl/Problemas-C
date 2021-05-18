/*
  
@jxvtrl 

Exercicio Número 1a da Prova 1 de Introdução a Programação

*/

#include <stdio.h>
#include <math.h>

int X1,Y1,X2,Y2,D1,D2;
float resultado;

int main(){ // Achar a distancia Euclidiana entre os pontos
    printf("Qual a primeira coordenada de pontos? (X1,Y1) <- Separado por virgula, sem espaço\n");
    scanf("%i,%i", &X1,&Y1);
    printf("Qual a segunda coordenada de pontos? (X2,Y2) <- Separado por virgula, sem espaço\n");
    scanf("%i,%i", &X2,&Y2);
    D1 = X1-Y1;
    D2 = X2-Y2;
    resultado = sqrt((D1^2)+(D2^2));

    printf("\nDistancia Euclidiana : %.2f", resultado);

return 0;
}