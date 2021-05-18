/*
  
@jxvtrl 

Exercicio Número 1c da Prova 1 de Introdução a Programação

*/

#include <stdio.h>
#include <math.h>

int xInicial=0,yInicial=0;
int xFinal,yFinal,controle = 0,minx,miny;
int dx,dy,dmin,dist,menorX,menorY,dist1;
char deseja;
int temp1,temp2,temp3,temp4,temp5;
int pontos;

int main(){
    
    printf("Ponto de origem (0,0)\nQuantos pontos deseja informar? "); 
    scanf("%d", &pontos);
    if (pontos==0){
       printf("0,0 é a unica coordenada informada"); 
    }
    while (pontos>0){
        if (pontos == 1){
            printf("(%d) Digite o ponto x a adicionar: (",pontos);
            scanf("%d",&xFinal);

            system("cls");
            printf("Ponto de origem (0,0)\n");
            printf("(%d) Digite o ponto y a adicionar: (%d,",pontos,xFinal);
            scanf("%d",&yFinal);

            system("cls");
            printf("Ponto de origem (0,0)\n");
            printf("(%d) Ponto escolhido: (%d,%d)\n\n",pontos,xFinal,yFinal);

            dist= sqrt((xFinal-xInicial)*(xFinal-xInicial)+(yFinal-yInicial)*(yFinal-yInicial));
            printf("Distancia do ponto escolhido ate a origem: %d\n", dist);
        }
        else if (pontos > 1){
            printf("(%d) Digite o ponto x a adicionar: (",pontos);
            scanf("%d",&xFinal);

            system("cls");
            printf("Ponto de origem (0,0)\n");
            printf("(%d) Digite o ponto y a adicionar: (%d,",pontos,xFinal);
            scanf("%d",&yFinal);

            system("cls");
            printf("Ponto de origem (0,0)\n");
            printf("(%d) Ponto escolhido: (%d,%d)\n\n",pontos,xFinal,yFinal);

            dist= sqrt((xFinal-xInicial)*(xFinal-xInicial)+(yFinal-yInicial)*(yFinal-yInicial));
            temp1=dist;
            printf("Distancia do ponto escolhido ate a origem: %d", dist);
        }
    }
    
    while (controle > 0){
        printf("Restam (%i).\n", controle);
        printf("Digite o proximo ponto: \n");
        scanf("%i,%i",&xFinal,&yFinal);
        dx = xInicial-xFinal;
        dy = yInicial-yFinal;
        dist =  sqrt(pow(dx,2)+(pow(dy,2)));
        dist1 = dist;
        if (dist1 < dmin){
            dmin = dist;
            printf("Menor ponto: %d,%d\nDistancia do ponto de origem: %d", xFinal,yFinal, dmin);
        }
        dist = dmin;
        controle--;
    }
    printf("Menor ponto: %d,%d\nDistancia do ponto de origem: %d", menorX,menorY, dmin);
    
return 0;
}

