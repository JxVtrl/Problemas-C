/* @jxvtrl */

#include <stdio.h>
int primeiro,segundo,terceiro,temp;

int main(){
int continua = 1;
while (continua == 1){
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &primeiro,&segundo,&terceiro);

    Verifica();
    VerificaParImpar();
    printf("\nQuer continuar? (0/1) ");
    scanf("%d", &continua);

    system("cls");
}
return 0;
}
int Verifica(){
if (primeiro > segundo && primeiro > terceiro && segundo > terceiro){
    printf("Os numeros ordenados sao: %d %d %d", terceiro, segundo,primeiro);
    temp = primeiro;
}
else if (segundo > primeiro && primeiro > terceiro && segundo > terceiro){
    printf("Os numeros ordenados sao: %d %d %d", terceiro, primeiro,segundo);
    temp = segundo;
}
else if (segundo > primeiro && terceiro > primeiro && segundo > terceiro){
    printf("Os numeros ordenados sao: %d %d %d", primeiro, terceiro,segundo);
    temp = segundo;
}
else if (primeiro > segundo && primeiro > terceiro && terceiro > segundo){
    printf("Os numeros ordenados sao: %d %d %d", segundo, terceiro,primeiro);
    temp = primeiro;
}
else if (primeiro > segundo && terceiro > primeiro && terceiro > segundo){
    printf("Os numeros ordenados sao: %d %d %d", segundo, primeiro,terceiro);
    temp = terceiro;
}
else if (segundo > primeiro && terceiro > primeiro && terceiro > segundo){
    printf("Os numeros ordenados sao: %d %d %d", primeiro, segundo,terceiro);
    temp = terceiro;
}
else if (segundo == primeiro && terceiro > primeiro){
    printf("Os numeros ordenados sao: %d %d %d", primeiro, segundo,terceiro);
    temp = terceiro;
}
else if (terceiro == primeiro && segundo > primeiro){
    printf("Os numeros ordenados sao: %d %d %d", primeiro, terceiro,segundo);
    temp = segundo;
}
else if (terceiro == primeiro && segundo < primeiro){
    printf("Os numeros ordenados sao: %d %d %d", segundo, terceiro,primeiro);
    temp = primeiro;
}
else if (segundo == primeiro && terceiro < primeiro){
    printf("Os numeros ordenados sao: %d %d %d", terceiro, segundo,primeiro);
    temp = primeiro;
}
return 0;
}

int VerificaParImpar(){
if(temp%2 != 0){
    printf(" (Impar)");
}
else{
    printf(" (Par)");
}
return 0;
}