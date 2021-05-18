/* @jxvtrl */

#include <stdio.h>
int Dia1, Mes1, Ano1, Dia2, Mes2, Ano2, Dia3, Mes3, Ano3, Dia4, Mes4, Ano4, Dia5,
Mes5, Ano5;

int Dia1_2, Mes1_2, Ano1_2, Dia2_2, Mes2_2, Ano2_2, Dia3_2, Mes3_2, Ano3_2,
Dia4_2, Mes4_2, Ano4_2, Dia5_2, Mes5_2, Ano5_2;

int main(){
EntraDatas();
TelaFinal();
return 0;
}

int EntraDatas(){
printf("\tInforme a primeira data. (DD/MM/AAAA): ");
scanf("%i/%i/%i", &Dia1, &Mes1, &Ano1);

// Primeira restrição ( O dia não pode superar 31 e o Mês tem que estar entre)
while ((Dia1 > 31) || (Dia1 < 0) || (Mes1 > 12) || (Mes1 < 0)){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a primeira data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia1, &Mes1, &Ano1);
}

// Segunda restrição ( Mês 30 não possui dia 31 )
while ( (Dia1 == 31) && ((Mes1 == 4) || (Mes1==6) || (Mes1==9) || (Mes1==11))){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a primeira data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia1, &Mes1, &Ano1);
}
Dia1_2=Dia1;
Mes1_2=Mes1;
Ano1_2=Ano1;
diaseguinte1();
printf("\tInforme a segunda data. (DD/MM/AAAA): ");
scanf("%i/%i/%i", &Dia2, &Mes2, &Ano2);

// Primeira restrição ( O dia não pode superar 31 e o Mês tem que estar entre)
while ((Dia2 > 31) || (Dia2 < 0) || (Mes2 > 12) || (Mes2 < 0)){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a segunda data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia2, &Mes2, &Ano2);
}

// Segunda restrição ( Mês 30 não possui dia 31 )
while ( (Dia2 == 31) && ((Mes2 == 4) || (Mes2==6) || (Mes2==9) || (Mes2==11))){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a segunda data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia2, &Mes2, &Ano2);
}

Dia2_2=Dia2;
Mes2_2=Mes2;
Ano2_2=Ano2;
diaseguinte2();

printf("\tInforme a terceira data. (DD/MM/AAAA): ");
scanf("%i/%i/%i", &Dia3, &Mes3, &Ano3);

// Primeira restrição ( O dia não pode superar 31 e o Mês tem que estar entre)
while ((Dia3 > 31) || (Dia3 < 0) || (Mes3 > 12) || (Mes3 < 0)){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a terceira data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia3, &Mes3, &Ano3);
}

// Segunda restrição ( Mês 30 não possui dia 31 )
while ( (Dia3 == 31) && ((Mes3 == 4) || (Mes3==6) || (Mes3==9) || (Mes3==11))){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a terceira data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia3, &Mes3, &Ano3);
}

Dia3_2=Dia3;
Mes3_2=Mes3;
Ano3_2=Ano3;
diaseguinte3();

printf("\tInforme a quarta data. (DD/MM/AAAA): ");
scanf("%i/%i/%i", &Dia4, &Mes4, &Ano4);

// Primeira restrição ( O dia não pode superar 31 e o Mês tem que estar entre)
while ((Dia4 > 31) || (Dia4 < 0) || (Mes4 > 12) || (Mes4 < 0)){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a quarta data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia4, &Mes4, &Ano4);
}

// Segunda restrição ( Mês 30 não possui dia 31 )
while ( (Dia4 == 31) && ((Mes4 == 4) || (Mes4==6) || (Mes4==9) || (Mes4==11))){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a quarta data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia4, &Mes4, &Ano4);
}

Dia4_2=Dia4;
Mes4_2=Mes4;
Ano4_2=Ano4;
diaseguinte4();

printf("\tInforme a quinta data. (DD/MM/AAAA): ");
scanf("%i/%i/%i", &Dia5, &Mes5, &Ano5);

// Primeira restrição ( O dia não pode superar 31 e o Mês tem que estar entre)
while ((Dia5 > 31) || (Dia5 < 0) || (Mes5 > 12) || (Mes5 < 0)){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a quinta data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia5, &Mes5, &Ano5);
}

// Segunda restrição ( Mês 30 não possui dia 31 )
while ( (Dia5 == 31) && ((Mes5 == 4) || (Mes5==6) || (Mes5==9) || (Mes5==11))){
    printf("\tVocê inseriu uma data inválida.\n");
    printf("\tInforme a quinta data. (DD/MM/AAAA): ");
    scanf("%i/%i/%i", &Dia5, &Mes5, &Ano5);
}

Dia5_2=Dia5;
Mes5_2=Mes5;
Ano5_2=Ano5;
diaseguinte5();
return 0;
}

int diaseguinte1(){
Dia1++;
if (Mes1 == 1||Mes1==3||Mes1==5||Mes1==7||Mes1==8||Mes1==10||Mes1==12){
    if (Dia1 > 31){
        Mes1++;
        Dia1=1;
        if (Mes1>12){
        Ano1++;
        Mes1=1;
        }
    }
}
else if(Mes1==4||Mes1==6||Mes1==9||Mes1==11){
    if (Dia1 > 30){
        Mes1++;
        Dia1=1;
    }
}
else if(Mes1 == 2){
    if(Ano1 % 4 == 0 && (Ano1 % 100 != 0 || Ano1 % 400 == 0)){
        if (Dia1 > 29){
            Mes1++;
            Dia1=1;
        }
    }
    else{
        if (Dia1 > 28){
        Mes1++;
        Dia1=1;
        }
    }
}
return 0;
}

int diaseguinte2(){
Dia2++;
if (Mes2 == 1||Mes2==3||Mes2==5||Mes2==7||Mes2==8||Mes2==10||Mes2==12){
    if (Dia2 > 31){
        Mes2++;
        Dia2=1;
        if (Mes2>12){
            Ano2++;
            Mes2=1;
        }
    }
}
else if(Mes2==4||Mes2==6||Mes2==9||Mes2==11){
    if (Dia2 > 30){
        Mes2++;
        Dia2=1;
    }
}
else if(Mes2 == 2){
    if(Ano2 % 4 == 0 && (Ano2 % 100 != 0 || Ano2 % 400 == 0)){
        if (Dia2 > 29){
            Mes2++;
            Dia2=1;
        }
    }
    else{
        if (Dia2 > 28){
            Mes2++;
            Dia2=1;
        }
    }
}
return 0;
}

int diaseguinte3(){
Dia3++;
if (Mes3 == 1||Mes3==3||Mes3==5||Mes3==7||Mes3==8||Mes3==10||Mes3==12){
    if (Dia3 > 31){
        Mes3++;
        Dia3=1;
        if (Mes3>12){
            Ano3++;
            Mes3=1;
        }
    }
}
else if(Mes3==4||Mes3==6||Mes3==9||Mes3==11){
    if (Dia3 > 30){
        Mes3++;
        Dia3=1;
    }
}
else if(Mes3 == 2){
    if(Ano3 % 4 == 0 && (Ano3 % 100 != 0 || Ano3 % 400 == 0)){
        if (Dia3 > 29){
            Mes3++;
            Dia3=1;
        }
    }
    else{
        if (Dia3 > 28){
            Mes3++;
            Dia3=1;
        }
    }
}
return 0;
}

int diaseguinte4(){
Dia4++;
if (Mes4 == 1||Mes4==3||Mes4==5||Mes4==7||Mes4==8||Mes4==10||Mes4==12){
    if (Dia4 > 31){
        Mes4++;
        Dia4=1;
        if (Mes4>12){
            Ano4++;
            Mes4=1;
        }
    }
}
else if(Mes4==4||Mes4==6||Mes4==9||Mes4==11){
    if (Dia4 > 30){
        Mes4++;
        Dia4=1;
    }
}
else if(Mes4 == 2){
    if(Ano4 % 4 == 0 && (Ano4 % 100 != 0 || Ano4 % 400 == 0)){
        if (Dia4 > 29){
            Mes4++;
            Dia4=1;
        }
    }
    else{
        if (Dia4 > 28){
            Mes4++;
            Dia4=1;
        }
    }
}
return 0;
}

int diaseguinte5(){
Dia5++;
if (Mes5 == 1||Mes5==3||Mes5==5||Mes5==7||Mes5==8||Mes5==10||Mes5==12){
    if (Dia5 > 31){
        Mes5++;
        Dia5=1;
        if (Mes5>12){
            Ano5++;
            Mes5=1;
        }
    }
}
else if(Mes5==4||Mes5==6||Mes5==9||Mes5==11){
    if (Dia5 > 30){
        Mes5++;
        Dia5=1;
    }
}
else if(Mes5 == 2){
    if(Ano5 % 4 == 0 && (Ano5 % 100 != 0 || Ano5 % 400 == 0)){
        if (Dia5 > 29){
            Mes5++;
            Dia5=1;
        }
    }
    else{
        if (Dia5 > 28){
            Mes5++;
            Dia5=1;
        }
    }
}
return 0;
}

int TelaFinal(){
system("cls");
printf("\nData 1: %d/%d/%d", Dia1_2, Mes1_2, Ano1_2);
printf("\tDia seguinte: %d/%d/%d\n\n", Dia1, Mes1, Ano1);

printf("\nData 2: %d/%d/%d", Dia2_2, Mes2_2, Ano2_2);
printf("\tDia seguinte: %d/%d/%d\n\n", Dia2, Mes2, Ano2);

printf("\nData 3: %d/%d/%d", Dia3_2, Mes3_2, Ano3_2);
printf("\tDia seguinte: %d/%d/%d\n\n", Dia3, Mes3, Ano3);

printf("\nData 4: %d/%d/%d", Dia4_2, Mes4_2, Ano4_2);
printf("\tDia seguinte: %d/%d/%d\n\n", Dia4, Mes4, Ano4);

printf("\nData 5: %d/%d/%d", Dia5_2, Mes5_2, Ano5_2);
printf("\tDia seguinte: %d/%d/%d\n\n", Dia5, Mes5, Ano5);
return 0;
}