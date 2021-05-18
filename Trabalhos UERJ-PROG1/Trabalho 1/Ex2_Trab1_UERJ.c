/*
  
@jxvtrl 

Exercicio Número 2 do Trabalho 1 de Introdução a Programação

*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int EscolhaMaquina, random;
char EscolhaUsuario;

int Tesoura=0, Papel=0 , Pedra=0, Lagarto=0, Spock=0,valido=0;

int main(){
    srand(time(NULL));
    Maquina();
return 0;}

int Maquina(){

    // Escolhe um número aleátorio de 1 até 5
    random = ((rand() % 5) + 1);

    // Maquina escolhe Tesoura
    if (random == 1){
        Tesoura = random;
        EscolhaMaquina = Tesoura;
    }

    // Maquina escolhe Papel
    else if (random == 2){
        Papel = random;
        EscolhaMaquina = Papel;
    }
    // Maquina escolhe Pedra
    else if (random == 3){
        Papel = random;
        EscolhaMaquina = Pedra;
    }
    // Maquina escolhe Lagarto
    else if (random == 4){
        Papel = random;
        EscolhaMaquina = Lagarto;
    }
    // Maquina escolhe Spock
    else if (random == 5){
        Papel = random;
        EscolhaMaquina = Spock;
    }
    
    Usuario();

return 0;}    
    
int Usuario(){  
    
    while ( valido == 0 ){
        printf("\nEscolha entre:\nTESOURA (T)\tPAPEL (P)\tPEDRA (D)\tLAGARTO (L)\tSPOCK (S)\n");
        scanf("%c", &EscolhaUsuario);
        
        // TESOURA :  Segundo a tabela ASCII o "T" equivale a 84 e "t" equivale a 116
        if ( (EscolhaUsuario == 84) || (EscolhaUsuario == 116) ){
        printf("\n\nVocê escolheu a Tesoura\n");
        EscolhaUsuario = 1;
        valido++;  
        }

        // PAPEL :  Segundo a tabela ASCII o "P" equivale a 80 e "p" equivale a 112
        else if (EscolhaUsuario == 80 || EscolhaUsuario == 112){
        printf("\n\nVocê escolheu o Papel\n");
        EscolhaUsuario = 2;
        valido++;
        }

        // PEDRA :  Segundo a tabela ASCII o "D" equivale a 68 e "d" equivale a 100
        else if (EscolhaUsuario == 68 || EscolhaUsuario == 100){
        printf("\n\nVocê escolheu a Pedra\n");
        EscolhaUsuario = 3;
        valido++;
        }

        // LAGARTO :  Segundo a tabela ASCII o L equivale a 76 e l equivale a 108
        else if (EscolhaUsuario == 76 || EscolhaUsuario == 108){
        printf("\n\nVocê escolheu o Lagarto\n");
        EscolhaUsuario = 4;
        valido++;
        }
        
        // SPOCK :  Segundo a tabela ASCII o S equivale a 83 e s equivale a 115
        else if (EscolhaUsuario == 83 || EscolhaUsuario == 115){
        printf("\n\nVocê escolheu o Spock\n");
        EscolhaUsuario = 5;
        valido++;
        }

        // Opção inválida.
        else{
        printf("Você inseriu uma opção inválida!");
        }
    }
    MostraMaquina();
return 0;}

int MostraMaquina()
{
  // Mostra ao usuário a escolha da máquina!
  if (EscolhaMaquina == 5){
    printf("\n\nMáquina escolhe Spock\n\n");
  }
  else if (EscolhaMaquina == 4){
    printf("\n\nMáquina escolhe Lagarto\n\n");
  }
  else if (EscolhaMaquina == 3){
    printf("\n\nMáquina escolhe Pedra\n\n");
  }
  else if (EscolhaMaquina == 2){
    printf("\n\nMáquina escolhe Papel\n\n");
  }
  else if (EscolhaMaquina == 1){
    printf("\n\nMáquina escolhe Tesoura\n\n");
  }

    Resultado();

return 0;}

int Resultado(){

  //  Tesoura Corta Papel
  if ( EscolhaUsuario == 1 && EscolhaMaquina == 2){
    printf("\nTesoura Corta Papel");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 2 && EscolhaMaquina == 1){
    printf("\nTesoura Corta Papel");
    printf("\n\nVishh... A Máquina ganhou!");
  }
  

  //  Papel cobre pedra
  else if ( EscolhaUsuario == 2 && EscolhaMaquina == 3 ){
    printf("\nPapel cobre pedra");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 3 && EscolhaMaquina == 2 ){
    printf("\nPapel cobre pedra");
    printf("\n\nVishh... A Máquina ganhou!");
  }


  //  Pedra esmaga lagarto
  else if ( EscolhaUsuario == 3 && EscolhaMaquina == 4 ){
    printf("\nPedra esmaga lagarto");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 4 && EscolhaMaquina == 3 ){
    printf("\nPedra esmaga lagarto");
    printf("\n\nVishh... A Máquina ganhou!");
  }


  //  Lagarto envenena Spock
  else if ( EscolhaUsuario == 4 && EscolhaMaquina == 5 ){
    printf("\nLagarto envenena Spock");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 5 && EscolhaMaquina == 4 ){
    printf("\nLagarto envenena Spock");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Spock esmaga (ou derrete) tesoura
  else if ( EscolhaUsuario == 5 && EscolhaMaquina == 1 ){
    printf("\nSpock esmaga (ou derrete) tesoura");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 1 && EscolhaMaquina == 5 ){
    printf("\nSpock esmaga (ou derrete) tesoura");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Tesoura decapita lagarto
  else if ( EscolhaUsuario == 1 && EscolhaMaquina == 4 ){
    printf("\nTesoura decapita lagarto");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 4 && EscolhaMaquina == 1 ){
    printf("\nTesoura decapita lagarto");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Lagarto come papel
  else if ( EscolhaUsuario == 4 && EscolhaMaquina == 2 ){
    printf("\nLagarto come papel");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 2 && EscolhaMaquina == 4 ){
    printf("\nLagarto come papel");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Papel refuta Spock
  else if ( EscolhaUsuario == 2 && EscolhaMaquina == 5 ){
    printf("\nPapel refuta Spock");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 5 && EscolhaMaquina == 2 ){
    printf("\nPapel refuta Spock");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Spock vaporiza pedra
  else if ( EscolhaUsuario == 5 && EscolhaMaquina == 3 ){
    printf("\nSpock vaporiza pedra");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 3 && EscolhaMaquina == 5 ){
    printf("\nSpock vaporiza pedra");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Pedra amassa tesoura
  else if ( EscolhaUsuario == 3 && EscolhaMaquina == 1 ){
    printf("\nPedra amassa tesoura");
    printf("\n\nParabéns, Você ganhou!");
  }

  else if ( EscolhaUsuario == 1 && EscolhaMaquina == 3 ){
    printf("\nPedra amassa tesoura");
    printf("\n\nVishh... A Máquina ganhou!");
  }

  //  Houve um Empate
  else{
    printf("\n\nHouve um empate!  Você e a Máquina escolheram o mesmo item!");
  }
  
  return 0;
}