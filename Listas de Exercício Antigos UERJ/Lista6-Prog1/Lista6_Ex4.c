/* @jxvtrl */

#include <stdio.h>

int main() {
    int Senha,Chance;
    int TentaSenha;

    
    printf("\a\nJOGADOR 1\n\nENTRE COM UMA SENHA ENTRE 0 E 100.\n");
    scanf("%d",&Senha);
    Chance = 5;
    
    do{
        printf("Tentativa numero: %d\n\n", Chance);
        Chance--;
        scanf("%d",&TentaSenha);

        if(TentaSenha > Senha)
            printf("O valor eh MENOR! \n");
        else
            if (TentaSenha < Senha)
                printf("O valor eh MAIOR\n");
            else
                printf("Parabéns, você adivinhou a senha em %d tentativas!\n",5-Chance);
            
    }while(TentaSenha != Senha && Chance!= 0);

    printf("Suas chances acabaram =( VOCE PERDEU.");

return 0;}
       
   
