/*
  
@jxvtrl 

Exercicio Número 1d da Prova 1 de Introdução a Programação

*/

#include <stdio.h>
#include <math.h>

int main(){
    int x1=0,y1=0,x2,y2,x3,y3;
    float Perimetro,Area;
    int lado1,lado2,lado3;
    int D1,D2,D3;

    printf("Qual a primeira coordenada?\n");
    scanf("%d,%d", &x1, &y1);
    printf("Qual a segunda coordenada?\n");
    scanf("%d,%d", &x2, &y2);
    printf("Qual a terceira coordenada?\n");
    scanf("%d,%d", &x3, &y3);

    //Distancia de pontos = PontoInicial, Ponto2
    D1          = sqrt(((x2 - x1)^2)*((y2 - y1)^2));
    printf("D1: %d\n",D1);
    
    //Distancia de pontos = PontoInicial, Ponto3
    D2           = sqrt(((x3 - x1)^2)*((y3 - y1)^2));
    printf("D2: %d\n",D2);
    
    //Distancia de pontos = Ponto2, Ponto3
    if (y2>y3){
        D3          = sqrt(((x2 - x3)^2)*((y2 - y3)^2));
    printf("D3: %d\n",D3);
    }
    else{
        D3          = sqrt(((x3 - x2)^2)*((y3 - y2)^2));
    printf("D3: %d\n",D3);
    }
    
    lado1       = sqrt((D1^2)+(D2^2));
    printf("Lado1: %d\n",lado1);
    lado2       = sqrt((D2^2)+(D3^2));
    printf("Lado2: %d\n",lado2);
    lado3       = sqrt((D1^2)+(D3^2));
    printf("Lado3: %d\n",lado3);

    Perimetro   = ((lado1+lado2+lado3)/2);
    printf("Perimetro: %.2f\n", Perimetro);

    Area        = sqrt( Perimetro * (Perimetro-lado1) * (Perimetro-lado2) * (Perimetro-lado3) );
    printf("Area: %.2f\n", Area);


    //  Todos os lados iguais
    if (((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3))){    
        printf("Triangulo Equilatero.\n");
    }
    
    //  Todos os lados diferentes
    if (((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3))){    
        printf("Triangulo Escaleno.\n");
    }

    //  Um dos lados diferente dos outros
    if (((lado1 == lado2) && (lado1 != lado3)) || ((lado1 == lado3) && (lado1 != lado2)) || ((lado2==lado3) && (lado2 != lado1) ) ){ 
        printf("Triangulo Isosceles.\n");
    }

return 0;
}
