/* @jxvtrl */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m;
    int numero;
    int total=0;

    printf("\nn = ");
    scanf("%d", &n);
    srand(time(NULL));
    m = n;
    printf("Primeira sequencia: \t");

    for(n;n>0;n--){
        numero=rand()%9;
        printf("%d ", numero);
        total = total + (numero*pow(10,n));
    }
    printf("\nSegunda sequencia: \t");

    for(m;m>0;m--){
        numero=rand()%9;
        printf("%d ", numero);
        total = total + (numero*pow(10,m));
    }

    printf("\nSoma:\t\t\t%d", total/10);
return 0;
}