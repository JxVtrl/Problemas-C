/*
  
@jxvtrl 

Exercicio Número 3 da Prova 1 de Introdução a Programação

*/

#include <stdio.h>
#include <math.h>


int escolha,x,m,n,z,w;
float resp;
int main(){
    
    printf("Exercicio - Prova 1\n\n");
    printf("\t>> Bases Iguais e Expoentes Diferentes<<\n");
    printf("1) x^m * x^n\n");
    printf("2) x^m / x^n\n");
    printf("3) (x^m)^n\n");
    printf("4) x^(-n)\n");
    scanf("%i", &escolha);
    
    potencia();
    
return 0;}

int potencia(){
    
    if(escolha == 1){
        printf("Voce escolheu a expressão 1!\n");
        printf("1) x^m * x^n\n");

        printf("Digite o valor de x: \n");
        scanf("%i", &x);
        printf("Digite o valor de m: \n");
        scanf("%i", &m);
        printf("Digite o valor de n: \n");
        scanf("%i", &n);

        z = m+n;
        resp = pow(x,z);
        
        printf("A resposta da expressão é %.0f.\n", resp);
    }
    
    else if (escolha ==2){
        printf("Voce escolheu a expressão 2!\n");
        printf("2) x^m / x^n\n");

        printf("Digite o valor de x: \n");
        scanf("%i", &x);
        printf("Digite o valor de m: \n");
        scanf("%i", &m);
        printf("Digite o valor de n: \n");
        scanf("%i", &n);

        z = m-n;
        resp = pow(x,z);
        
        printf("A resposta da expressão é %.0f.\n", resp);
    }
    else if (escolha ==3){
        printf("Voce escolheu a expressão 3!\n");
        printf("3) (x^m)^n\n");

        printf("Digite o valor de x: \n");
        scanf("%i", &x);
        printf("Digite o valor de m: \n");
        scanf("%i", &m);
        printf("Digite o valor de n: \n");
        scanf("%i", &n);

        z = pow(x,(m*n));
        resp = z;
        printf("A resposta da expressão é %.0f.\n", resp);

    }
    else if (escolha ==4){
        printf("Voce escolheu a expressão 4!\n");
        printf("4) x^(-n)\n");
        printf("Digite o valor de x (x != 0) : \n");
        scanf("%i", &x);
        
        while(x==0){
            printf("X nao pode ser 0\n");
            printf("Digite o valor de x (x != 0) : \n");
            scanf("%i", &x);
        }

        printf("Digite o valor de n: \n");
        scanf("%i", &n);

        z = pow(x,-n);
        
        resp = z;
        printf("A resposta da expressão é %f.\n", resp);
    }
return 0;}