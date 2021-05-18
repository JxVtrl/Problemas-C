/* @jxvtrl */

#include <stdio.h>
#include <assert.h>

int main (){
    int N1,N2;
    printf("Qual o primeiro numero? \n");
    scanf("%i", &N1);
    printf("Qual o segundo numero? \n");
    scanf("%i", &N2);

    printf("MDC = %i", mdc(N1,N2));    

return(0);}

int mdc(N1,N2){
    int resto;
    do{
    resto = N1 % N2;
    N1 = N2;
    N2 = resto;}
    while (resto != 0);
    
return(N1);}