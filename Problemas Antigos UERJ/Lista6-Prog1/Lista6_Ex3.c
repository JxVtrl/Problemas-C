/* @jxvtrl */

#include <stdio.h>
int main() {
    int i,c,primo=0;

    printf("Digite um valor a ser verificado.\n");
    scanf("%d",&i);

    for (c = 2; c <= i/2; c++){
        printf("controle = %d\n", c);
        if (i%c == 0)
        primo++;}
        
    if (primo == 0)
        printf("%d eh primo.\n",i);
    else
        printf("%d nao eh primo.\n",i);
    
    return 0;}
    