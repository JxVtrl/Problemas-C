/* @jxvtrl */

#include <stdio.h>
#include <math.h>
int main (){
    int N1,N2,N3;
    printf("Informe o inteiro x.\n");
    scanf("%d", &N1);
    printf("Informe um inteiro nao negativo.\n");
    scanf("%d", &N2);
 
    N3 = pow(N1,N2);
 
    printf("O resultado é: %d",N3);
 
    return(0);}