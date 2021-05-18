/* @jxvtrl */

#include <stdio.h>
#include <math.h>
int main(){
    float x=0,fx;
    FILE *saida;
    saida = fopen("saida.txt", "w");
    if (saida == NULL){
        printf("Erro na abertura do arquivo.\n");
return 1;
}

for(x=0; x<=100; x++){
    fx = 2+cos(2*sqrt(x));
    fprintf(saida,"%.0f\t%f\n", x, fx);
}

fclose(saida);
return 0;
}