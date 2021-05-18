/* @jxvtrl */

#include <stdio.h>
int dia,mes,ano,maxmes=12,diamax,anobi=0;

int main() {
    printf("Digite uma data (Ex: 05/12/2000 = dd/mm/aaaa)\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    ConfereMes();
    ConfereBissexto();
    
    
    printf("\nO proximo dia é: %d/%d/%d\n",dia,mes,ano);
return 0;}

int ConfereBissexto(){
    if (ano%4 == 0 && ((ano%100) != 0 || (ano%400) == 0)){
        anobi = 1 ;}
    else{
        anobi = 0 ;}
return(0) ;}

int ConfereMes(){
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        diamax=31;
        dia++;   
    }
        if (dia > diamax){
            if (mes == 12){
                dia = 1;
                mes = 1;
                ano++;}
            else{
                dia = 1;
                mes++;}
        }
        else{
            dia++;}

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        diamax=30;
        dia++;
        if(dia > diamax){
            dia=1;
            mes++;
        }
    }
    if (mes == 2){
        if(anobi == 0){
            diamax=28;
            dia++;
            if (dia > diamax){
                dia=1;
                mes++;
            }
        }
        if(anobi == 1){
            diamax=29;
            dia++;
            if(dia > diamax){
                dia=1;
                mes++;
            }
        }  
    }   
return(0);}

int MesSeguinte(){
mes++;
if(mes=maxmes){
    mes = 1;
    AnoSeguinte();}
return(0);}

int AnoSeguinte(){
ano++;
return(0);}





