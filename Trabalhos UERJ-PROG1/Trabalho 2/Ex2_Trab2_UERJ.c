/*
  
@jxvtrl 

Exercicio Número 2 do Trabalho 2 de Introdução a Programação

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Janeiro      Linha 6 até 12                  Coluna 22
// Fevereiro    Linha 30                        Coluna 22 até 30
// Marco        Linha 28                        Coluna 7 até 11
// Abril        Linha 16 até 20                 Coluna 2
// Maio         Linha 3 até 6                   Coluna 11
// Junho        Linha 12 até 16                 Coluna 4
// Julho        Linha 13                        Coluna 3 até 7
// Agosto       Linha 16                        Coluna 2 até 7
// Setembro     Linha 9                         Coluna 21 até 28
// Outubro      Linha 7 até 13                  Coluna 15
// Novembro     Linha 23 até 30                 Coluna 30 
// Dezembro     Linha 21 até 28                 Coluna 11

char Matriz_CP [30][30];
int comando;
int Jan, Fev, Mar, Abr, Maio, Jun, Jul, Ago, Set, Out, Nov, Dez;
char FRASE_MAIUSCULA[255];

int Ler_Matriz_Entrada()
{
    FILE *entrada_matriz = fopen("exercicio2_trabalho2_entrada.txt", "r");
    int i, j;

    if (entrada_matriz == NULL)
    {
        // Caso a abertura não for possivel ele irá retornar a estrutura
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }

    // Leitura dos arquivos dentro de exercicio2_trabalho2_entrada.txt
    for (i=0; i<30; i++)
    {
        for (j=0; j<30; j++)
        {
            fscanf(entrada_matriz, "%i", &Matriz_CP[i][j]);
        }
    }

    return 0;
}

void Visualizar_Matriz()
{
    int i, j;

    printf(". . . . . . . . . . . . Caca Palavra . . . . . . . . . . . . \n");

    for (i=0; i<30; i++)
    {
        printf("\n");
        for (j=0; j<30; j++)
        {
            printf("%c ", Matriz_CP[i][j]);
        }  
    }
}

void Hud_Game()
{
    printf("\n\n\n. . . . . . . . . . . . Busca Palavras . . . . . . . . . . . . \n\n");
            
    printf("\tJANEIRO             JULHO\n");
    printf("\tFEVEREIRO           AGOSTO\n");
    printf("\tMARCO               SETEMBRO\n");
    printf("\tABRIL               OUTUBRO\n");
    printf("\tMAIO                NOVEMBRO\n");
    printf("\tJUNHO               DEZEMBRO\n");
}

int Verifica_Ganhador()
{
    if ( (Jan==1) && (Fev==1) && (Mar==1) && (Abr==1) && (Jun==1) && (Jul==1) && (Ago==1) && (Set==1) && (Out==1) && (Nov==1) && (Dez==1))
    {
        printf("\n\nParabens, voce encontrou todos os meses.");
        return 1;
    }

    return 0;
}

void Maiscula()
{
    char letra;
    scanf("%c", &letra);
    int posicao=0;

    printf("Digite uma palavra: ");

    while (scanf("%c", &letra) != 10)
    {
        if (letra == 10)  // Quebra de linha (10 = Espaço Vazio)
        {
            break;
        }
        
        FRASE_MAIUSCULA[posicao] = letra;
        posicao++;
    
    }
    
    int i;

    
    for (i=0; i<posicao; i++)
    {
        if (FRASE_MAIUSCULA[i] >= 97 && FRASE_MAIUSCULA[i] <= 122)
        {
            FRASE_MAIUSCULA[i] = FRASE_MAIUSCULA[i] - 32;
        }
        else if ( (FRASE_MAIUSCULA[i] == -121) || (FRASE_MAIUSCULA[i] == -128) || (FRASE_MAIUSCULA[i] == 128) || (FRASE_MAIUSCULA[i] == 135) )
        {
            FRASE_MAIUSCULA[i] = 67;
        }
        else
        {
            FRASE_MAIUSCULA[i] = FRASE_MAIUSCULA[i];
        }
        
    }
    
}

void Busca_Palavra()
{   
    Maiscula();

    // Janeiro
    if ((FRASE_MAIUSCULA[0] == 'J') && (FRASE_MAIUSCULA[1] == 'A') && (FRASE_MAIUSCULA[2] == 'N') && (FRASE_MAIUSCULA[3] == 'E') && (FRASE_MAIUSCULA[4] == 'I') && (FRASE_MAIUSCULA[5] == 'R') && (FRASE_MAIUSCULA[6] == 'O'))
    {
        // Janeiro      Linha 6 até 12                  Coluna 22
        printf("Procure na linha 6, coluna 22, de modo vertical");
        Jan = 1;
    }
    
    // Fevereiro
    else if ((FRASE_MAIUSCULA[0] == 'F') && (FRASE_MAIUSCULA[1] == 'E') && (FRASE_MAIUSCULA[2] == 'V') && (FRASE_MAIUSCULA[3] == 'E') && (FRASE_MAIUSCULA[4] == 'R') && (FRASE_MAIUSCULA[5] == 'E') && (FRASE_MAIUSCULA[6] == 'I') && (FRASE_MAIUSCULA[7] == 'R') && (FRASE_MAIUSCULA[8] == 'O'))
    {
        // Fevereiro    Linha 30                        Coluna 22 até 30
        printf("Procure na linha 30, coluna 22, de modo horizontal");
        Fev = 1;
    }
    
    // Marco
    else if ((FRASE_MAIUSCULA[0] == 'M') && (FRASE_MAIUSCULA[1] == 'A') && (FRASE_MAIUSCULA[2] == 'R') && (FRASE_MAIUSCULA[3] == 'C') && (FRASE_MAIUSCULA[4] == 'O') ) 
    {
        // Marco        Linha 28                        Coluna 7 até 11
        printf("Procure na linha 28, coluna 7, de modo horizontal");
        Mar = 1;
    }
    
    // Abril
    else if ((FRASE_MAIUSCULA[0] == 'A') && (FRASE_MAIUSCULA[1] == 'B') && (FRASE_MAIUSCULA[2] == 'R') && (FRASE_MAIUSCULA[3] == 'I') && (FRASE_MAIUSCULA[4] == 'L') )
    {
        // Abril        Linha 16 até 20                 Coluna 2
        printf("Procure na linha 16, coluna 2, de modo vertical");
        Abr = 1;
    }
    
    // Maio
    else if ((FRASE_MAIUSCULA[0] == 'M') && (FRASE_MAIUSCULA[1] == 'A') && (FRASE_MAIUSCULA[2] == 'I') && (FRASE_MAIUSCULA[3] == 'O') )
    {
        // Maio         Linha 3 até 6                   Coluna 11
        printf("Procure na linha 3, coluna 11, de modo vertical");
        Maio = 1;
    }
    
    // Junho
    else if ((FRASE_MAIUSCULA[0] == 'J') && (FRASE_MAIUSCULA[1] == 'U') && (FRASE_MAIUSCULA[2] == 'N') && (FRASE_MAIUSCULA[3] == 'H') && (FRASE_MAIUSCULA[4] == 'O') )
    {
        // Junho        Linha 12 até 16                 Coluna 4
        printf("Procure na linha 12, coluna 4, de modo vertical");
        Jun = 1;
    }
    
    // Julho
    else if ((FRASE_MAIUSCULA[0] == 'J') && (FRASE_MAIUSCULA[1] == 'U') && (FRASE_MAIUSCULA[2] == 'L') && (FRASE_MAIUSCULA[3] == 'H') && (FRASE_MAIUSCULA[4] == 'O'))
    {
        // Julho        Linha 13                        Coluna 3 até 7
        printf("Procure na linha 13, coluna 3, de modo horizontal");
        Jul = 1;
    }
    
    // Agosto
    else if ((FRASE_MAIUSCULA[0] == 'A') && (FRASE_MAIUSCULA[1] == 'G') && (FRASE_MAIUSCULA[2] == 'O') && (FRASE_MAIUSCULA[3] == 'S') && (FRASE_MAIUSCULA[4] == 'T') && (FRASE_MAIUSCULA[5] == 'O'))
    {
        // Agosto       Linha 16                        Coluna 2 até 7
        printf("Procure na linha 16, coluna 2, de modo horizontal");
        Ago = 1;
    }
    
    // Setembro 
    else if ((FRASE_MAIUSCULA[0] == 'S') && (FRASE_MAIUSCULA[1] == 'E') && (FRASE_MAIUSCULA[2] == 'T') && (FRASE_MAIUSCULA[3] == 'E') && (FRASE_MAIUSCULA[4] == 'M') && (FRASE_MAIUSCULA[5] == 'B') && (FRASE_MAIUSCULA[6] == 'R') && (FRASE_MAIUSCULA[7] == 'O'))
    {
        // Setembro     Linha 9                         Coluna 21 até 28
        printf("Procure na linha 9, coluna 21, de modo horizontal");
        Set = 1;
    }
    
    // Outubro
    else if ((FRASE_MAIUSCULA[0] == 'O') && (FRASE_MAIUSCULA[1] == 'U') && (FRASE_MAIUSCULA[2] == 'T') && (FRASE_MAIUSCULA[3] == 'U') && (FRASE_MAIUSCULA[4] == 'B') && (FRASE_MAIUSCULA[5] == 'R') && (FRASE_MAIUSCULA[6] == 'O'))
    {
        // Outubro      Linha 7 até 13                  Coluna 15
        printf("Procure na linha 7, coluna 15, de modo vertical");
        Out = 1;
    }

    // Novembro
    else if ((FRASE_MAIUSCULA[0] == 'N') && (FRASE_MAIUSCULA[1] == 'O') && (FRASE_MAIUSCULA[2] == 'V') && (FRASE_MAIUSCULA[3] == 'E') && (FRASE_MAIUSCULA[4] == 'M') && (FRASE_MAIUSCULA[5] == 'B') && (FRASE_MAIUSCULA[6] == 'R') && (FRASE_MAIUSCULA[7] == 'O'))
    {
        // Novembro     Linha 23 até 30                 Coluna 30 
        printf("Procure na linha 23, coluna 30, de modo vertical");
        Nov = 1;
    }

    // Dezembro
    else if ((FRASE_MAIUSCULA[0] == 'D') && (FRASE_MAIUSCULA[1] == 'E') && (FRASE_MAIUSCULA[2] == 'Z') && (FRASE_MAIUSCULA[3] == 'E') && (FRASE_MAIUSCULA[4] == 'M') && (FRASE_MAIUSCULA[5] == 'B') && (FRASE_MAIUSCULA[6] == 'R') && (FRASE_MAIUSCULA[7] == 'O'))
    {
        // Dezembro     Linha 21 até 28                 Coluna 11
        printf("Procure na linha 21, coluna 11, de modo vertical");
        Dez = 1;
    }
    
    // Qualquer outra palavra
    else
    {
        printf("\nPalavra inexistente");
    }
    
}

int Mostrar_Gabarito()
{
    int linha, coluna;

    printf("\n. . . . . . . . . . . . Gabarito . . . . . . . . . . . . \n");

    for (linha=0; linha<30; linha++)
    {
        printf("\n");

        for (coluna=0; coluna<30; coluna++)
        {
            
            // Janeiro
            if ((linha==5) && (coluna==21))
            {
                printf("%c ", Matriz_CP[5][21]);
            }
            else if ((linha==6) && (coluna==21))
            {
                printf("%c ", Matriz_CP[6][21]);
            }
            else if ((linha==7) && (coluna==21))
            {
                printf("%c ", Matriz_CP[7][21]);
            }
            else if ((linha==8) && (coluna==21))
            {
                printf("%c ", Matriz_CP[8][21]);
            }
            else if ((linha==9) && (coluna==21))
            {
                printf("%c ", Matriz_CP[9][21]);
            }
            else if ((linha==10) && (coluna==21))
            {
                printf("%c ", Matriz_CP[10][21]);
            }
            else if ((linha==11) && (coluna==21))
            {
                printf("%c ", Matriz_CP[11][21]);
            }
            
            // Fevereiro
            else if ((linha==29) && (coluna==21))
            {
                printf("%c ", Matriz_CP[29][21]);
            }
            else if ((linha==29) && (coluna==22))
            {
                printf("%c ", Matriz_CP[29][22]);
            }
            else if ((linha==29) && (coluna==23))
            {
                printf("%c ", Matriz_CP[29][23]);
            }
            else if ((linha==29) && (coluna==24))
            {
                printf("%c ", Matriz_CP[29][24]);
            }
            else if ((linha==29) && (coluna==25))
            {
                printf("%c ", Matriz_CP[29][25]);
            }
            else if ((linha==29) && (coluna==26))
            {
                printf("%c ", Matriz_CP[29][26]);
            }
            else if ((linha==29) && (coluna==27))
            {
                printf("%c ", Matriz_CP[29][27]);
            }
            else if ((linha==29) && (coluna==28))
            {
                printf("%c ", Matriz_CP[29][28]);
            }
            else if ((linha==29) && (coluna==29))
            {
                printf("%c ", Matriz_CP[29][29]);
            }

            // Marco
            else if ((linha==27) && (coluna==6))
            {
                printf("%c ", Matriz_CP[27][6]);
            }
            else if ((linha==27) && (coluna==7))
            {
                printf("%c ", Matriz_CP[27][7]);
            }
            else if ((linha==27) && (coluna==8))
            {
                printf("%c ", Matriz_CP[27][8]);
            }
            else if ((linha==27) && (coluna==9))
            {
                printf("%c ", Matriz_CP[27][9]);
            }
            else if ((linha==27) && (coluna==10))
            {
                printf("%c ", Matriz_CP[27][10]);
            }

            // Abril
            else if ((linha==15) && (coluna==1))
            {
                printf("%c ", Matriz_CP[15][1]);
            }
            else if ((linha==16) && (coluna==1))
            {
                printf("%c ", Matriz_CP[16][1]);
            }
            else if ((linha==17) && (coluna==1))
            {
                printf("%c ", Matriz_CP[17][1]);
            }
            else if ((linha==18) && (coluna==1))
            {
                printf("%c ", Matriz_CP[18][1]);
            }
            else if ((linha==19) && (coluna==1))
            {
                printf("%c ", Matriz_CP[19][1]);
            }

            // Maio
            else if ( (linha==2) && (coluna==10))
            {
                printf("%c ", Matriz_CP[2][10]);
            }
            else if ( (linha==3) && (coluna==10))
            {
                printf("%c ", Matriz_CP[3][10]);
            }
            else if ( (linha==4) && (coluna==10))
            {
                printf("%c ", Matriz_CP[4][10]);
            }
            else if ( (linha==5) && (coluna==10))
            {
                printf("%c ", Matriz_CP[5][10]);
            }
     
            // Junho
            else if ((linha==11) && (coluna==3))
            {
                printf("%c ", Matriz_CP[11][3]);
            }
            else if ((linha==12) && (coluna==3))
            {
                printf("%c ", Matriz_CP[12][3]);
            }
            else if ((linha==13) && (coluna==3))
            {
                printf("%c ", Matriz_CP[13][3]);
            }
            else if ((linha==14) && (coluna==3))
            {
                printf("%c ", Matriz_CP[14][3]);
            }
            else if ((linha==15) && (coluna==3))
            {
                printf("%c ", Matriz_CP[15][3]);
            }

            // Julho
            else if ((linha==12) && (coluna==2))
            {
                printf("%c ", Matriz_CP[12][2]);
            }
            else if ((linha==12) && (coluna==3))
            {
                printf("%c ", Matriz_CP[12][3]);
            }
            else if ((linha==12) && (coluna==4))
            {
                printf("%c ", Matriz_CP[12][4]);
            }
            else if ((linha==12) && (coluna==5))
            {
                printf("%c ", Matriz_CP[12][5]);
            }
            else if ((linha==12) && (coluna==6))
            {
                printf("%c ", Matriz_CP[12][6]);
            }

            // Agosto
            else if ((linha==15) && (coluna==1))
            {
                printf("%c ", Matriz_CP[15][1]);
            }
            else if ((linha==15) && (coluna==2))
            {
                printf("%c ", Matriz_CP[15][2]);
            }
            else if ((linha==15) && (coluna==3))
            {
                printf("%c ", Matriz_CP[15][3]);
            }
            else if ((linha==15) && (coluna==4))
            {
                printf("%c ", Matriz_CP[15][4]);
            }
            else if ((linha==15) && (coluna==5))
            {
                printf("%c ", Matriz_CP[15][5]);
            }
            else if ((linha==15) && (coluna==6))
            {
                printf("%c ", Matriz_CP[15][6]);
            }
            
             // Setembro
            else if ((linha==8) && (coluna==20))
            {
                printf("%c ", Matriz_CP[8][20]);
            }
            else if ((linha==8) && (coluna==21))
            {
                printf("%c ", Matriz_CP[8][21]);
            }
            else if ((linha==8) && (coluna==22))
            {
                printf("%c ", Matriz_CP[8][22]);
            }
            else if ((linha==8) && (coluna==23))
            {
                printf("%c ", Matriz_CP[8][23]);
            }
            else if ((linha==8) && (coluna==24))
            {
                printf("%c ", Matriz_CP[8][24]);
            }
            else if ((linha==8) && (coluna==25))
            {
                printf("%c ", Matriz_CP[8][25]);
            }
            else if ((linha==8) && (coluna==26))
            {
                printf("%c ", Matriz_CP[8][26]);
            }
            else if ((linha==8) && (coluna==27))
            {
                printf("%c ", Matriz_CP[8][27]);
            }

            // Outubro
            else if ((linha==6) && (coluna==14))
            {
                printf("%c ", Matriz_CP[6][14]);
            }
            else if ((linha==7) && (coluna==14))
            {
                printf("%c ", Matriz_CP[7][14]);
            }
            else if ((linha==8) && (coluna==14))
            {
                printf("%c ", Matriz_CP[8][14]);
            }
            else if ((linha==9) && (coluna==14))
            {
                printf("%c ", Matriz_CP[9][14]);
            }
            else if ((linha==10) && (coluna==14))
            {
                printf("%c ", Matriz_CP[10][14]);
            }
            else if ((linha==11) && (coluna==14))
            {
                printf("%c ", Matriz_CP[11][14]);
            }
            else if ((linha==12) && (coluna==14))
            {
                printf("%c ", Matriz_CP[12][14]);
            }
                 
            // Novembro
            else if ((linha==22) && (coluna==29))
            {
                printf("%c ", Matriz_CP[22][29]);
            }
            else if ((linha==23) && (coluna==29))
            {
                printf("%c ", Matriz_CP[23][29]);
            }
            else if ((linha==24) && (coluna==29))
            {
                printf("%c ", Matriz_CP[24][29]);
            }
            else if ((linha==25) && (coluna==29))
            {
                printf("%c ", Matriz_CP[25][29]);
            }
            else if ((linha==26) && (coluna==29))
            {
                printf("%c ", Matriz_CP[26][29]);
            }
            else if ((linha==27) && (coluna==29))
            {
                printf("%c ", Matriz_CP[27][29]);
            }
            else if ((linha==28) && (coluna==29))
            {
                printf("%c ", Matriz_CP[28][29]);
            }
            else if ((linha==29) && (coluna==29))
            {
                printf("%c ", Matriz_CP[29][29]);
            }

            // Dezembro
            else if ((linha==20) && (coluna==10))
            {
                printf("%c ", Matriz_CP[20][10]);
            }
            else if ((linha==21) && (coluna==10))
            {
                printf("%c ", Matriz_CP[21][10]);
            }
            else if ((linha==22) && (coluna==10))
            {
                printf("%c ", Matriz_CP[22][10]);
            }
            else if ((linha==23) && (coluna==10))
            {
                printf("%c ", Matriz_CP[23][10]);
            }
            else if ((linha==24) && (coluna==10))
            {
                printf("%c ", Matriz_CP[24][10]);
            }
            else if ((linha==25) && (coluna==10))
            {
                printf("%c ", Matriz_CP[25][10]);
            }
            else if ((linha==26) && (coluna==10))
            {
                printf("%c ", Matriz_CP[26][10]);
            }
            else if ((linha==27) && (coluna==10))
            {
                printf("%c ", Matriz_CP[27][10]);
            }

            // Qualquer outro espaço
            else
            {
                printf("  ");
            }
            
        }
    }
    
    printf("\n\n");

    return 1;
}

int Imprimir_Jogo()
{
    FILE *impressao_jogo = fopen("impressao.txt", "w");
    
    if (impressao_jogo == NULL)
    {
        // Caso a criação não for possivel ele irá retornar a estrutura
        printf("Erro na criação do arquivo.\n");
        return 1;
    }


    int i, j;
    
    fprintf(impressao_jogo, ". . . . . . . . . . . . Caca Palavra . . . . . . . . . . . . ");
    
    for (i=0; i<30; i++)
    {
        fprintf(impressao_jogo, "\n");
        for (j=0; j<30; j++)
        {
            fprintf(impressao_jogo,"%c ", Matriz_CP[i][j]);
        }  
    }

    fprintf(impressao_jogo, "\n\n\n. . . . . . . . . . . . Busca Palavras . . . . . . . . . . . . \n\n");

    fprintf(impressao_jogo, "\tJANEIRO             JULHO\n");
    fprintf(impressao_jogo, "\tFEVEREIRO           AGOSTO\n");
    fprintf(impressao_jogo, "\tMARCO               SETEMBRO\n");
    fprintf(impressao_jogo, "\tABRIL               OUTUBRO\n");
    fprintf(impressao_jogo, "\tMAIO                NOVEMBRO\n");
    fprintf(impressao_jogo, "\tJUNHO               DEZEMBRO\n");


    fclose(impressao_jogo);

    printf("Jogo imprimido com sucesso.");

    return 0;
}

int Comandos_Game()
{
    // Pega a opcao do usuário
    printf("\n\n[1] Buscar palavra              [2] Gabarito                [3] Fim                [4] Imprimir Jogo\n\nEscolha uma opcao: ");
    scanf("%i", &comando);

    // Caso escolha opcao invalida
    while ((comando != 1) && (comando != 2) && (comando != 3) && (comando != 4))
    {
        printf("\nPor favor escolha uma opcao valida:\n");
        printf("[1] Buscar palavra              [2] Gabarito                [3] Fim                [4] Imprimir Jogo\n\nEscolha uma opcao: ");
        scanf("%i", &comando);

    }

    if (comando == 1)        // Buscar Palavras
    {
        Busca_Palavra();
    }
    else if (comando == 2)   // Gabarito
    {
        Mostrar_Gabarito();
    }
    else if (comando == 3)   // Fim
    {
        printf("\n\nTudo bem! Muito obrigado por jogar conosco!\n");
    }
    else if (comando == 4)  // Imprime em TXT
    {
        Imprimir_Jogo();
    }

    return comando;
}

int main()
{
    Ler_Matriz_Entrada();
    Visualizar_Matriz();
    Hud_Game();

    int jogo, ganhador;


    while(1)
    {
        jogo = Comandos_Game();
        ganhador = Verifica_Ganhador();

        if ( (jogo == 2) || (jogo == 3) || (ganhador == 1) )   // Jogo chegou ao fim
        {
            break;
        }
    }
    

    return 0;
}