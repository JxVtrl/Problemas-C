/* @jxvtrl */

#include <stdio.h>
#include <math.h>

int main(){

float r, area, circunferencia;
const pi = 3.1416;

printf("Qual o valor do Raio: ");
scanf("%f", &r);

area = pi*r*r;
circunferencia = 2*pi*r;

printf("Area: %.1f\nCircunferencia: %.1f", area, circunferencia);

return 0;
}
