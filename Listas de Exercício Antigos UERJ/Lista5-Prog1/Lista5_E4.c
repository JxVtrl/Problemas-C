/* @jxvtrl */

#include <stdio.h>
int fatorial(int n);

int main (){
    int numero;
    printf("Qual o numero deseja saber o fatorial? \n");
    scanf("%i", &numero);

    printf("O fatorial eh: %i\n", fatorial(numero));

    return(0);
}

int fatorial(int numero){
    if(numero == 1){
        return numero;
    }
    else{
        return numero * fatorial(numero-1);
    }
    return numero;}
