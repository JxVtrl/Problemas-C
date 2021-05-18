/* @jxvtrl */

#include <stdio.h>
#include <math.h>

float x;
float f(float x);

int main(){
    printf("Qual o valor de X? ");
    scanf("%f", &x);
    f(x);
return 0;}

float f(float x){
    float fx=0;
    fx = 2+cos(2*sqrt(x));
    printf("%.2f", fx);
return fx;}