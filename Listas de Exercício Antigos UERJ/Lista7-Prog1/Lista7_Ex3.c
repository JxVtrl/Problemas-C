/* @jxvtrl */

#include <stdio.h>
int main(){
    int cont = 0,n;
    printf("Escolha um numero a ser contado:\n");
    scanf("%i",&n);

    if(n == 0) cont = 1;
    else{
        while (n != 0){
            cont++;
            n = n / 10;
        }  
    }
    printf("%d\n", cont);
    
    
return 0;}