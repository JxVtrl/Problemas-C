/* @jxvtrl */

#include <stdio.h>
#include <string.h>
int main (){
    char s1[]="Raras araras em Araraquara", s2[]="ara";
    //char s1[]='\0', s2[]='\0';
    int i=0,j=0,controle=0,tempo;
    int tamanhoS1 = strlen(s1);
    int tamanhoS2 = strlen(s2);
    //printf("Qual a primeira frase?\n");
    //scanf("%c", s1);
    //printf("Qual a segunda frase?\n");
    //scanf("%c", s2);
    tempo=tamanhoS2;
    
    for(i = 0; s1[i] != '\0' ; i++){
        if (s1[i] == s2[j]){
            for (j = 0; s2[j] != '\0' ; j++){
                if(s2[j] ){
                    i++;
                    j++;
                    if (s1[i] == s2[j]){
                        tamanhoS2--;
                    }
                }
                else if (tamanhoS2 < 0){
                    controle++;
                    break;
                }
                tamanhoS2--;
            }
        }
        else if (s1[i] != s2[j]){
            break;
        }
    }
    printf("%d", controle);
return 0;
}
