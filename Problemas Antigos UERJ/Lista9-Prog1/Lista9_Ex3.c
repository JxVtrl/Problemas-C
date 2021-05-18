/* @jxvtrl */

#include <stdio.h>
#include <math.h>
float a, b, c, xmais, xmenos, AchaRaiz,x1, x2, delta;
int main(){
printf("Entre com a: ");
scanf("%f", &a);

printf("Entre com b: ");
scanf("%f", &b);

printf("Entre com c: ");
scanf("%f", &c);

segundoGrau();
return 0;
}

int segundoGrau(){
delta = b*b - 4*a*c;
if(delta < 0){
    printf("\nNao existe raiz real.\n");
}
else{
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    if(x1==x2){
        printf("\nExiste uma raiz: %.1f.\n", x1);
    }
    else{
        printf("\nExistem duas raizes: %.1f e %.1f.\n", x1, x2);
    }
}
return 0;
}