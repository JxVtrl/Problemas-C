/* @jxvtrl */

#include <stdio.h>
int main (){
    float AREA,Lado1,Lado2,Perimetro;

    printf("Qual a medida do primeiro lado? \n");
    scanf("%f", &Lado1);
    printf("Qual a medida do segundo lado? \n");
    scanf("%f", &Lado2);

    AREA=Lado1*Lado2;
    Perimetro=(Lado1*2)+(Lado2*2);

    printf("A Area da sala é: %.2f\nO Perimetro da sala é: %.2f", AREA, Perimetro);

return(0);}