/* @jxvtrl */

#include <stdio.h>
int main (){
    float area, raio;
    const float PI = 3.1415;   

    printf("Valor do Raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area do circulo: %.2f", area);

return(0);}