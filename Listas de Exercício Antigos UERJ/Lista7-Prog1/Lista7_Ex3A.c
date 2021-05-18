/* @jxvtrl */

#include <stdio.h>
int main(){
    int cont = 0,n,primeiro;
    
    printf("Escolha um numero a ser contado:\n");
    scanf("%i",&n);

    if(n == 0) 
    cont = 1;
    else{
        for (cont = 1; n>=10 ; cont++){
            n = n / 10;}
        primeiro=n;}

    printf("%d digitos\n%d era o primeiro digito.", cont,primeiro);

return 0;}