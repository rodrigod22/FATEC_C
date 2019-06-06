#include <stdio.h>
#include <stdlib.h>
/*
9 - Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano).
*/
int main()
{

int calculaAno(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual);
int calculaMes(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual);
int calculaDias(int dia, int diaAtual);
int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual);
int dia = 21;
int mes = 11;
int ano = 1982;
//domingo
 int totalAno=0;
  int totalMes=0;
  int totalDia =0;
int diaAtual;
int mesAtual ;
int anoAtual ;
int totalGeral;
int semanas;
int anoBisexto;
char mostraDia(int dia);


printf("Digite o dia mes e ano ");
scanf("%d %d %d", &diaAtual ,&mesAtual, &anoAtual);


totalAno = calculaAno( dia,ano, anoAtual, diaAtual, mes, mesAtual);
if(mesAtual < mes){
    totalAno -= 1;
}
totalMes = calculaMes( dia, ano, anoAtual, diaAtual, mes, mesAtual);
if(diaAtual < dia){
    totalMes -= 1;
}
totalDia = calculaDias(dia, diaAtual);

anoBisexto = bisexto( dia,ano, anoAtual, diaAtual, mes, mesAtual);
totalGeral = (totalAno * 365) + (totalMes * 30) + totalDia + anoBisexto;
semanas = (totalGeral%7);
printf("total dias geral: %d\n", totalGeral);
printf("total anos: %d\n", totalAno);
printf("total mes: %d\n", totalMes);
printf("total dias: %d\n", totalDia);
printf("resto: %d\n", semanas);
switch(semanas){
    case 0:{
         char dia_semana[8] = "DOMINGO";
        printf("%s",dia_semana);
        break;
    }
    case 1:{
        char dia_semana[8] = "SEGUNDA";
        printf("%s",dia_semana);
        break;
    }
    case 2:{
        char dia_semana[8] = "TERCA";
        printf("%s",dia_semana);
        break;
    }
    case 3:{
        char dia_semana[8] = "QUARTA";
        printf("%s",dia_semana);
        break;
    }
    case 4:{
        char dia_semana[8] = "QUINTA";
        printf("%s",dia_semana);
        break;
    }
    case 5:{
        char dia_semana[8] = "SEXTA";
        printf("%s",dia_semana);
        break;
    }
    case 6:{
        char dia_semana[8] = "SABADO";
        printf("%s",dia_semana);
        break;
    }
}
}
// calcula dias
int calculaDias(int dia, int diaAtual){
int difDia;

if(diaAtual < dia){
    difDia =  diaAtual - dia + 30;
}else{
    difDia =  diaAtual - dia;
}
return difDia;
}
//calcula ano
int calculaAno(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
int difAno;
int diasAno;
int difMes;

if(mesAtual > mes){
    difMes = mesAtual - mes;
}else if(mesAtual == mes){
    difMes =  0;
}else{
    difMes = mesAtual - mes + 12;
}
difAno = ((anoAtual - ano));
return difAno;
}
//calcula mes
int calculaMes(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){

int difMes = 0;
int dias;
int diasAno;

if(mesAtual > mes){
    difMes = mesAtual - mes;
}else if(mesAtual < mes){
    difMes = mesAtual - mes + 12;
}else{
    difMes = 0;
}
return difMes;
}

int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
    int dif;
	int contAno = 0;
	int i =0;

	int dias = 0;
    dif = anoAtual - ano;

    int cont = 1;

    while(dif > i){

        if (ano % 400 == 0) {
            contAno++;

        }
        else if ((ano % 4 == 0) && (ano % 100 != 0)) {
            contAno++;
 }
  i++;
 ano++;
}
 return contAno;
}



