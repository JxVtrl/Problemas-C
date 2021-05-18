/* @jxvtrl */

#include <stdio.h>
int main() {
    int pontos,c;
    float x,y;

    printf("Quantos pontos?\n");
    scanf("%d",&pontos);

    for (c = 0; c<pontos; c++);{
        printf("Digite as coordenadas de um ponto.\n");
        scanf("%f %f",&x,&y);

        if(x>=0 && y>=0 && x*x+y*y<=1)
        printf("A coordenada (%.1f,%.1f) esta dentro da regiao H.\n",x,y);
        else
        printf("A coordenada (%.1f,%.1f) nao esta dentro da regiao H.",x,y);  
    }
 return 0;}
    