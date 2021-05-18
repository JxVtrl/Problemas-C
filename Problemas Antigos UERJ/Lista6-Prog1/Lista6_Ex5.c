/* @jxvtrl */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Senha,Chance,continua;
    int TentaSenha,robo;

    printf("\nDeseja jogar sozinho(1) ou com outro jogador(0)?\n");
    scanf("%d",&robo);
    srand(time(NULL));

    if (robo==1){
        Senha = rand()%100;
        //printf("\n%d\n", Senha);
        do{Chance = 5;
            do{
                printf("O computador escolheu um numero entre 0 e 100. Adivinhe-o!\n", Chance);
                printf("Tentativa numero: %d\n\n", Chance);
                Chance--;
                scanf("%d",&TentaSenha);

                if(Chance == 0){
                printf("Suas chances acabaram =( VOCE PERDEU, TENTE NOVAMENTE DEPOIS.");
                printf("\nA senha era: %d", Senha);}

                else if(TentaSenha-1 == Senha){
                        printf("TA QUENTE!\n");}

                    else if(TentaSenha+1 == Senha){
                        printf("TA QUENTE!\n");}

                        else if(TentaSenha > Senha){
                            printf("O valor eh MENOR! \n");}

                            else if(TentaSenha < Senha){
                                printf("O valor eh MAIOR\n");}

                                else
                                printf("Parabéns, você adivinhou a senha em %d tentativas!\n",5-Chance);
            
            }while(TentaSenha != Senha || Chance!= 0);

        printf("\n\nDeseja continuar? pressione qualquer numero diferente de 0.\n");
        scanf("%d", &continua);}
        while(continua);
    }

    else do{
        printf("\a\nJOGADOR 1\nENTRE COM UMA SENHA ENTRE 0 E 100.\n");
        scanf("%d",&Senha);
        Chance = 5;
        printf("\a\nJOGADOR 2\nVoce tem 5 chances para acertar o numero escolhido pelo outro jogador.\n");
        if (Senha > 100)
            printf("Valor fora da faixa esperada(0 E 100)");

        else do{
            printf("\nTentativa numero: %d\n\n", Chance);
            Chance--;
            scanf("%d",&TentaSenha);

            if(Chance == 0){

            printf("Suas chances acabaram =( VOCE PERDEU, TENTE NOVAMENTE DEPOIS.");
            printf("\nA senha era: %d", Senha);}

            else if(TentaSenha-1 == Senha){
                    printf("TA QUENTE!\n");}

                else if(TentaSenha+1 == Senha){
                    printf("TA QUENTE!\n");}

                    else if(TentaSenha > Senha){
                        printf("O valor eh MENOR! \n");}

                        else if(TentaSenha < Senha){
                            printf("O valor eh MAIOR\n");}
                            
                            else
                            printf("Parabéns, você adivinhou a senha em %d tentativas!\n",5-Chance);

            }while(TentaSenha != Senha || Chance!= 0);

        printf("\n\nDeseja continuar? pressione qualquer numero diferente de 0.\n");
        scanf("%d", &continua);}
        while(continua);
    
return 0;}
       