/* @jxvtrl */

#include <stdio.h>
int main(){
int i,j,aluno;
float n1,n2,n3,media,mediatotal;
FILE *notas, *aprovados, *reprovados;
notas = fopen("notas.txt", "r");
aprovados = fopen("aprovados.txt", "a");
reprovados = fopen("reprovados.txt", "a");

if (notas == NULL){
    printf("Erro na abertura do arquivo.\n");
return 1;
}
for (i = 0; i < 15; i++){
    fscanf(notas, "%d %f %f %f", &aluno,&n1,&n2,&n3);
    media = (n1+n2+n3)/3;
    mediatotal = mediatotal + media;
    if (media>=5){ // SE APROVADO
        fprintf(aprovados,"Aluno %d - Media: %.2f\n", aluno, media);
    }
    else if (media < 5){ // SE REPROVADO
        fprintf(reprovados,"Aluno %d - Media: %.2f\n", aluno, media);
    }
}

printf("Media total do curso: %.2f", mediatotal/15);
fclose(notas);
fclose(aprovados);
fclose(reprovados);
return 0;
}