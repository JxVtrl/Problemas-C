/* @jxvtrl */

#include <stdio.h>
int main (){
int i, j, n;
int cont = 0;
int mult = 0;

printf("Digite o numero de multiplos a serem impressos: \n");
scanf("%d", &n);

printf("Qual os dois inteiros?\n");
scanf("%d %d", &i, &j);
printf("\nn = %d\ni = %d\nj = %d\n",n,i,j);

printf("Os %d primeiros multiplos de %d ou de %d sao:", n, i, j);
while (cont < n){
    if(mult%i == 0 || mult%j == 0){
    printf(" %d", mult);
    cont++;    
    }
    mult++;}
return(0);
}