/*
  
@jxvtrl 

Exercicio Número 1 do Trabalho 1 de Introdução a Programação

*/


#include <stdio.h>
#include <stdlib.h>


//              Declarando Variáveis

//Entrada de variavel USUARIO
int DiaInicial,MesInicial,AnoInicial,DiaFinal,MesFinal,AnoFinal; 

//  controles
int anobi, DIAMAX, ano;                                          
                                                 
int controleAno,controleMes;

int dias_utilizados = 0, dias_totais_ano, dias_do_mes;

int situacao_atrasada=0, penalizacao, dia_penalizado, mes_penalizado, ano_penalizado, _penalizacao ;

int main(){ 
    
    system("cls");          //  Limpa Terminais anteriores
    
    Entra_Data_RETIRA();    //  Primeira Funcao

return 0;}

int Entra_Data_RETIRA(){    //  Entra com a data de Retirada
    printf("\n***************** DATA DE RETIRADA **********************\n");
    printf("\tQual o data de Retirada? (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &DiaInicial, &MesInicial, &AnoInicial);
    

    // Primeira restrição   (   O dia não pode superar 31 e o Mês tem que estar entre  )
    while ((DiaInicial > 31) || (DiaInicial < 0) || (MesInicial > 12) || (MesInicial < 0)){
        printf("\tVocê inseriu uma data inválida.");
        printf("\tQual o data de Retirada? (DD/MM/AAAA) ");
        scanf("%i/%i/%i", &DiaInicial, &MesInicial, &AnoInicial);
        
    }
    
    // Segunda restrição    (   Mês 30 não possui dia 31    )
    while ( (DiaInicial == 31) && ((MesInicial == 4) || (MesInicial==6) || (MesInicial==9) || (MesInicial==11)) ){
        printf("\tVocê inseriu uma data inválida.");
        printf("\tQual o data de Retirada? (DD/MM/AAAA) ");
        scanf("%i/%i/%i", &DiaInicial, &MesInicial, &AnoInicial);       
    }

    //Entra na proxima Funçao
    Entra_Data_DEVOLVE();
    

return 0;}

int Entra_Data_DEVOLVE(){   //  Entra com a data de Devolução
    printf("\n***************** DATA DE DEVOLUCAO **********************\n");
        printf("\tQual e a data de Devolucao? (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &DiaFinal, &MesFinal, &AnoFinal);
    
    // Primeira restrição   (   O dia não pode superar 31 e o Mês tem que estar entre  )
    while ( (DiaFinal > 31) || (DiaFinal < 0) || (MesFinal > 12) || (MesFinal < 0)){
        printf("Você inseriu uma data inválida!\n");
        printf("\tQual e a data de Devolucao? (DD/MM/AAAA): ");
        scanf("%i/%i/%i", &DiaFinal, &MesFinal, &AnoFinal);
    }

    // Segunda restrição    (   Mês 30 não possui dia 31    )
    while ( (DiaFinal== 31) && ((MesFinal == 4) || (MesFinal==6) || (MesFinal==9) || (MesFinal==11)) ){
        printf("Você inseriu uma data inválida!\n");
        printf("\tQual e a data de Devolucao? (DD/MM/AAAA): ");
        scanf("%i/%i/%i", &DiaFinal, &MesFinal, &AnoFinal);       
    }

    // Terceira restrição   (   Para entregar: Não pode digitar qualquer data anterior a data de retirada  )
    while (AnoFinal < AnoInicial){
        printf("\nVocê não é um viajante do tempo, digite uma data válida!\n");
        printf("\tQual e a data de Devolucao? (DD/MM/AAAA): ");
        scanf("%i/%i/%i", &DiaFinal, &MesFinal, &AnoFinal);
    }
    
    // Quarta restrição     (    Para entregar: Não pode digitar qualquer data anterior a data de retirada  )
    while ((AnoFinal == AnoInicial) && (MesFinal < MesInicial) ){
        printf("\nVocê não é um viajante do tempo, digite uma data válida!\n");
        printf("\tQual e a data de Devolucao? (DD/MM/AAAA): ");
        scanf("%i/%i/%i", &DiaFinal, &MesFinal, &AnoFinal);
    }
    
    // Quinta restrição     (    Para entregar: Não pode digitar qualquer data anterior a data de retirada  )
    while ((AnoFinal == AnoInicial) && (MesFinal == MesInicial) && (DiaFinal < DiaInicial))
    {
        printf("\nVocê não é um viajante do tempo, digite uma data válida!\n");
        printf("\tQual e a data de Devolucao? (DD/MM/AAAA): ");
        scanf("%i/%i/%i", &DiaFinal, &MesFinal, &AnoFinal);
    }

    CalculaDiferenca();
return 0;}

int CalculaDiferenca(){     //  Calcula a diferença de data 
    
    // Analisa mesmo mês e mesmo Ano
    if ( (MesFinal == MesInicial) && (AnoInicial == AnoFinal) ){
        dias_utilizados = DiaFinal - DiaInicial;
    }

    // Analisa mês diferentes e mesmo Ano
    else if ( (MesInicial < MesFinal) && (AnoInicial == AnoFinal) ){
        ConfereMes();
        dias_utilizados = DiaFinal + DiaInicial - DIAMAX;
    }


    // Analisa caso o ano de devolução for maior e o mês de devolução for maior ou igual ao mês de retirada
    controleAno = AnoInicial;
    while  (controleAno < AnoFinal){
        ConfereAno();
        dias_totais_ano = dias_totais_ano + ano;
        controleAno++;
    }


    //MAIOR
    // Analisa e converte meses em dias se o mes de devolução for maior que o mes de retirada
    controleMes = MesInicial;
    while(controleMes > MesFinal){

        if(controleMes==1||controleMes==3||controleMes==5||controleMes==7||controleMes==8||controleMes==10||controleMes==12){
            dias_do_mes = dias_do_mes - 31;   
            controleMes--;
        }

        else if(controleMes==4||controleMes==6||controleMes==9||controleMes==11){
             dias_do_mes = dias_do_mes - 30;
             controleMes--;
        }

        else if(controleMes == 2){

            if(AnoInicial % 4 == 0 && (AnoInicial % 100 != 0 || AnoInicial % 400 == 0)){
             dias_do_mes = dias_do_mes - 29;
             controleMes--;
            }
         
            else{
             dias_do_mes = dias_do_mes - 28;
             controleMes--;
            }
        }
    }

    //MENOR
    // Analisa e converte meses em dias se o mes de devolução for menor que o mes de retirada
    controleMes = MesInicial;
    while (controleMes < MesFinal){
        if(controleMes==1||controleMes==3||controleMes==5||controleMes==7||controleMes==8||controleMes==10||controleMes==12){
            dias_do_mes = dias_do_mes + 31;   
            controleMes++;
        }

     else if(controleMes==4||controleMes==6||controleMes==9||controleMes==11){
             dias_do_mes = dias_do_mes + 30;
             controleMes++;
        }

     else if(controleMes == 2){
         
         if(AnoInicial % 4 == 0 && (AnoInicial % 100 != 0 || AnoInicial % 400 == 0)){
             dias_do_mes = dias_do_mes + 29;
             controleMes++;
            }
         
         else{
             dias_do_mes = dias_do_mes + 28;
             controleMes++;
            }
        }
    }


    if (dias_utilizados == 0){
        dias_utilizados = DiaFinal - DiaInicial + dias_totais_ano + dias_do_mes;
    }
    
    else{
        dias_utilizados = dias_utilizados + dias_totais_ano + dias_do_mes;
    }   

    Penalizando();

return 0;}

int Penalizando(){  
    if (dias_utilizados > 10){
    situacao_atrasada = dias_utilizados - 10;
    }
    if (situacao_atrasada > 0){
        penalizacao = (situacao_atrasada * 3);
    }
    
    /* 5 dias úteis correspondem a 7 dias corridos
        Converte dias úteis para dias corridos      */
    _penalizacao = (7 * (penalizacao / 5)) + ((penalizacao)%5);
    
    dia_penalizado = DiaInicial;
    mes_penalizado = MesFinal;
    ano_penalizado = AnoFinal;    
    
    // Adiciona 1 dia ao dia para sair do castigo e decresce 1 dia da penalidade
    while(_penalizacao > 0){
        
        // Vai adicionando dia até a penalização zerar 
        dia_penalizado++;
        _penalizacao--;
    
        // Se o mês terminar em dia 31, irá substituir o dia e passará para o proximo mês e ano
        if((mes_penalizado==1||mes_penalizado==3||mes_penalizado==5||mes_penalizado==7||mes_penalizado==8||mes_penalizado==10||mes_penalizado==12)&&dia_penalizado==32){
            dia_penalizado = 1;
            mes_penalizado = (mes_penalizado%12) + 1;
            if(mes_penalizado == 1){
                ano_penalizado++;
            }
        }
    
        // Se o mês terminar em dia 30, irá substituir o dia e passará para o proximo mês
        if((mes_penalizado==4||mes_penalizado==6||mes_penalizado==9||mes_penalizado==11)&&dia_penalizado==31){
            dia_penalizado = 1;
            mes_penalizado++;
        }

        // Se o mês for fevereiro, irá substituir o dia e passará para o proximo mês dependendo se não for bissexto
        if(mes_penalizado == 2 && dia_penalizado == 29)
        {
            if(ano_penalizado % 4 == 0 && (ano_penalizado % 100 != 0 || ano_penalizado % 400 == 0))
            {
                dia_penalizado = 29;
            }
            else
            {
                dia_penalizado = 1;
                mes_penalizado = 3;
            } 
        }

        // Se o mês for fevereiro, irá substituir o dia e passará para o proximo mês dependendo se for bissexto
        if(mes_penalizado == 2 && dia_penalizado == 30){
            dia_penalizado = 1;
            mes_penalizado = 3;
        }
    }


    TelaFinal();

return 0;}

int ConfereAno(){           //  ConfereAno Inicial e Final 
    if (AnoInicial%4 == 0 && ((AnoInicial%100) != 0 || (AnoInicial%400) == 0)){
        anobi = 1 ;
        ano = 366;
    }
    else{ 
        anobi = 0 ;
        ano = 365;
    }

return(0) ;}

int ConfereMes(){           //  ConfereMes Inicial e Final 
    ConfereAno();
    //VERIFICA MES DE 31 DIAS
if (MesInicial == 1 || MesInicial == 3 || MesInicial == 5 || MesInicial == 7 || MesInicial == 8 || MesInicial == 10 || MesInicial == 12){
    DIAMAX = 31;
}
    //VERIFICA MES DE 30 DIAS
else if (MesInicial == 4 || MesInicial == 6 || MesInicial == 9 || MesInicial == 11){
    DIAMAX = 30;
}
    //VERIFICA FEVEREIRO
else if (MesInicial == 2){ 
    if(anobi == 1){
        DIAMAX=29;}

    if(anobi == 0){
        DIAMAX= 28;}
}

return 0;}

int TelaFinal(){            //  Tela Final
    printf("***************** Sistema de Empréstimo de Livros **********************\n"                                              );
    printf("\nData de retirada: %d/%d/%d\n",                                                DiaInicial, MesInicial, AnoInicial    );
    printf("Data de entrega: %d/%d/%d\n",                                                   DiaFinal, MesFinal, AnoFinal          );
    printf("**********************************\nMaximo de dias permitido sem atraso: 10\n**********************************\n"                                           );
    printf("Situação: atrasado(a) por %d dias\n",                                         situacao_atrasada                                );
    printf("Penalização: %d dias úteis\n",                                                  penalizacao                                );
    printf("Retirada permitida a partir de: %d/%d/%d\n\n",                                  dia_penalizado, mes_penalizado, ano_penalizado);
    printf("************************************************************************\n"                                              ); 
return 0;}