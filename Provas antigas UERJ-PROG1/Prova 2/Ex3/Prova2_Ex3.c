/*
  
@jxvtrl 

Exercicio Número 3 da Prova 2 de Introdução a Programação

*/


#include <stdio.h>
FILE *fp;
#define MAXL 30
#define MAXC 59


int main() {
    int i=0,j=0;
    char matrix[MAXL][MAXC];
    int vetorFreq[7];

    fp = fopen("imagem2_P2.txt","r");

    if (fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        return 1; 
    }

    for (i = 0; i <= 30 ; i++){
        for (j = 0; j <= 59; j++){
            fscanf(fp,"%s", &matrix[i][j]);
            printf("%s", matrix[i][j]);
            if (matrix[i][j]        == 87) // W
            {
                vetorFreq[0]++;
            }
            else if (matrix[i][j]   == 64) // @
            {
                vetorFreq[1]++;
            }
            else if (matrix[i][j]   == 35) // #
            {
                vetorFreq[2]++;
            }
            else if (matrix[i][j]   == 42) // *
            {
                vetorFreq[3]++;
            }
            else if (matrix[i][j]   == 58) // :
            {
                vetorFreq[4]++;
            }
            else if (matrix[i][j]   == 43) // +
            {
                vetorFreq[5]++;
            }
            else if (matrix[i][j]   == 61) // =
            {
                vetorFreq[6]++;
            }
        }  
    }
    printf("\nFrequencia dos caracteres\n\nW\t %d\n@\t %d\n#\t %d\n*\t %d\n:\t %d\n+\t %d\n=\t %d\n", vetorFreq[0],vetorFreq[1],vetorFreq[2],vetorFreq[3],vetorFreq[4],vetorFreq[5],vetorFreq[6]);
    fclose(fp);
return 0;
}


