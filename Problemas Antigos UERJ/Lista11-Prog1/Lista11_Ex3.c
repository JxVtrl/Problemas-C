/* @jxvtrl */

#include <stdio.h>
#define MAX 25
int quadradoMagico(int vetorMatriz[MAX][MAX], int n){
    int i, j, iTemp, jTemp, controle = 0, soma, quadrado = 1;
    for (j = 0; j < n; j++){
        controle = controle + vetorMatriz[0][j];
    }
    i = 1;
    while (quadrado && i < n){
        soma = 0;
        for (j = 0; j < n; j++){
            soma = soma + vetorMatriz[i][j];
        }
        i = i + 1;
        quadrado = soma == controle;
    }
    j = 0;
    while (quadrado && j < n){
        soma = 0;
        for (i = 0; i < n; i++){
            soma = soma + vetorMatriz[i][j];
        }
        j = j + 1;
        quadrado = soma == controle;
    }
    if (quadrado){
        soma = 0;
        for (i = 0; i < n; i++){
            soma = soma + vetorMatriz[i][i];
        }
        quadrado = soma == controle;
        if (quadrado){
            soma = 0;
            for (i = 0; i < n; i++){
                soma = soma + vetorMatriz[i][n-i-1];
            }
            quadrado = soma == controle;
            if (quadrado){
                for (i = 0; i < n && quadrado; i++){
                    for (j = 0; j < n && quadrado; j++){
                        for (iTemp = i; iTemp < n && quadrado; iTemp++){
                            for (jTemp = j + 1; jTemp < n && quadrado; jTemp++){
                                quadrado = vetorMatriz[i][j] !=
                                    vetorMatriz[iTemp][jTemp];
                            }
                        }
                    }
                }               
            }
        }
    }

return quadrado;
}

int main (){
    int i, j, matriz[MAX][MAX], n;
    scanf("n = %d", &n);
    if (n < MAX){
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        if (quadradoMagico(matriz, n)){
            printf("Eh um quadrado magico\n");
        }
        else{
            printf("Nao eh um quadrado magico\n");
        }
    }
    else{
        printf("Matriz muito grande");
    }
    
return 0;
}