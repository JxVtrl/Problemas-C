/* @jxvtrl */

#include <stdio.h>
int main (){
    int valor1,valor2,valor3,valor4,matricula1;
    char X1,X2,X3,X4;
    unsigned long long int matricula;
    printf("Informe sua matricula: ");
    scanf("%lld", &matricula);

    valor1 = matricula % 100;

    matricula1 = matricula / 100;

    valor2 = matricula1 % 100;
    matricula1 = matricula1 / 100;
    valor3 = matricula1 % 100;
    matricula1 = matricula1 / 100;
    valor4 = matricula1 % 100;
    matricula1 = matricula1 / 100;
    
    if (valor1 == 10){
        valor1 = 99;}
    if(valor2 == 10){
        valor2 = 99;}
    if(valor3 == 10){
        valor3 = 99;}
    if(valor4 == 10){
        valor4 = 99;}

    printf("%d,%d,%d,%d", valor1,valor2,valor3,valor4);

    X1 = putchar(valor1);  
    X2 = putchar(valor2);
    X3 = putchar(valor3);
    X4 = putchar(valor4);

    printf("\nCaro usuário,\nSeu login é: %lld\nSua senha é: %c%c%c%c",matricula,X1,X2,X3,X4);


return(0);}