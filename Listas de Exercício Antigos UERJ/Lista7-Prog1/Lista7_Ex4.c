/* @jxvtrl */

#include <stdio.h>
int Chico=0,Marisa=0,Renato=0,Branco=0,Nulo=0,confirma,voto,continua=0;
int n,maior=0,menor=0,soma=0;

int main(){ 
LerVoto();
VerificaSenha();
return 0;}


int LerVoto(){
    while (1){
        printf("\nVote em algum candidato.\n===================\nChico         - 18\n===================\nMarisa        - 28\n===================\nRenato        - 38\n===================\nBranco        - 0\n===================\nOutro numero  - NULO\n\n");
        scanf("%d", &voto);   
        VerificaSenha();
        
        
        printf("\nVoce digitou: %d\n", voto);
        printf("Aperte 1 para confirmar, ou outro numero para cancelar.\n");
        scanf("%d", &confirma);

        while (confirma != 1 ){
            printf("\nVoto CANCELADO\n\n");
            printf("Vote em algum candidato.\n===================\nChico         - 18\n===================\nMarisa        - 28\n===================\nRenato        - 38\n===================\nBranco        - 0\n===================\nOutro numero  - NULO\n\n");
            scanf("%d", &voto);
            
               
            
            printf("\nVoce digitou: %d\n", voto);
            printf("Aperte 1 para confirmar, ou outro numero para cancelar.\n");
            scanf("%d", &confirma);
                    
        }
        
        if (confirma==1){
            VerificaSenha();
            printf("\n\nPARABENS, SEU VOTO FOI COMPUTADO.\n");
            if (voto == 18){
                printf("\nVoce votou no CHICO.\n");
                Chico++;
                Continua();
            }
            else if (voto == 28){
                printf("\nVoce votou na MARISA.\n");
                Marisa++;
                Continua();
            }
            else if (voto == 38){
                printf("\nVoce votou no RENATO.\n");
                Renato++;
                Continua();
            }
            else if (voto == 0){
                printf("\nVoce votou no BRANCO.\n");
                Branco++;
                Continua();
            }          
            else{
                Nulo++;
                Continua();
            }    
        }   
    }
return 0;}

int VerificaSenha(){
    if (voto == 456821){
        printf("\nA votacao foi encerrada!.\n");
        GeraRelatorio();
    }
    

return 0;}

int GeraRelatorio(){

    printf("\n\nAPURACAO DE VOTOS\n\nChico         - %d\n\nMarisa        - %d\n\nRenato        - %d\n\nBranco        - %d\n\n",Chico,Marisa,Renato,Branco);
    if (Chico > Marisa && Chico > Renato){
        Chico = Chico + Branco;
        printf("CHICO GANHA A ELEICAO COM %d VOTOS.\n", Chico);
    }
    else if (Marisa > Chico && Marisa > Renato){
        Marisa = Marisa + Branco;
        printf("MARISA GANHA A ELEICAO COM %d VOTOS.\n", Marisa);
    }
    else if (Renato > Chico && Renato > Marisa){
        Renato = Renato + Branco;
        printf("RENATO GANHA A ELEICAO COM %d VOTOS.\n", Renato);
    }
    system("PAUSE");

return 0;}

int Continua(){
    continua=0;
    while (continua == 0){
    printf("\n\n\n\n\n\n\nPROXIMA PESSOA A VOTAR.\n\n");
    LerVoto();}
return 0;}

