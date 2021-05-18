/* @jxvtrl */

#include <stdio.h>
char transforma(frase);
int main (){
 char frase[]="";
 printf("Escreva uma frase.\n");
 scanf(" %[^\n]", frase);
 transforma(frase);
 printf("%s \n", frase);
return 0;
}
char transforma(char frase[]){
 int i;
 for (i = 0; i < frase[i]; i++){
 if (frase[i] >= 'a' && frase[i] <= 'z'){
 frase[i] = (frase[i] - 'a') + 'A';
 }
 }
return frase;
}
