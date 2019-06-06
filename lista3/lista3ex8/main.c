#include <stdio.h>
#include <stdlib.h>
/*8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.*/
int main()
{
 int ano;
 int anoAtual;
 int calculaDias();
 int calculaAno();
 int calculaMes();
 int bisexto();
 int totalAno=0;
 int totalMes=0;
 int totalDia =0;
 int dia;
 int diaAtual;
 int mes;
 int mesAtual;
 int bisext;
 int fim =0;
do{
     printf("Digite o dia de nascimento: ");
     scanf("%d", &dia );
     printf("Digite o mes de nascimento: ");
     scanf("%d", &mes );
     printf("Digite o ano de nascimento: ");
     scanf("%d", &ano );
     printf("Digite o dia atual: ");
     scanf("%d", &diaAtual );
     printf("Digite o mes atual: ");
     scanf("%d", &mesAtual );
     printf("Digite o ano atual: ");
     scanf("%d", &anoAtual );

    totalAno = calculaAno( dia,ano, anoAtual, diaAtual, mes, mesAtual);
    if(mesAtual < mes){
        totalAno -= 1;
    }
    totalMes = calculaMes( dia,ano, anoAtual, diaAtual, mes, mesAtual);
    if(diaAtual < dia){
        totalMes -= 1;
    }
    totalDia = calculaDias(dia, diaAtual);

    bisext = bisexto(dia, ano, anoAtual,diaAtual, mes, mesAtual);
    printf("Total de anos %d ", totalAno);
    if(totalMes == 12){
        totalMes=0;
    }
    printf("Total de meses %d ", totalMes);
    printf("Total de dias %d ", totalDia);
    printf("Total de bisexto %d ", bisext);
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}


int calculaDias(int dia, int diaAtual){
int difDia;
if(diaAtual < dia){
    difDia =  diaAtual - dia + 30;
}else{
    difDia =  diaAtual - dia;
}
return difDia;
}

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

int calculaMes(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual, int totalAno){
int difMes = 0;
int dias;
int diasAno;

if(mesAtual > mes){
    difMes = mesAtual - mes;
}else{
    difMes = mesAtual - mes + 12;
}
return difMes;
}

int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
    int dif;
	int contAno = 0;
	int i =0;
	int dias = 0;
    dif = anoAtual - ano;
    printf("%d", dif);
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
