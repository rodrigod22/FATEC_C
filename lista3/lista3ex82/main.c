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
 int bisexto();
 int totalbi=0;
 int dia;
 int diaAtual;
int mes;
int mesAtual;

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



totalbi = bisexto( dia,ano, anoAtual, diaAtual, mes, mesAtual);

printf("Total de anos bisexto %d ", totalbi);
}

int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
    int dif;
	int contAno = 0;
	int i =0;
	int i2;
	int ver;
	int dias = 0;
    dif = anoAtual - ano;
    int cont = 1;
    while(dif > i){

        if (ano % 400 == 0) {
            contAno++;
            ver = 1;
        }
        else if ((ano % 4 == 0) && (ano % 100 != 0)) {
            contAno++;
            ver=0;
        }



if(i<12){
i2 = i+1 ;
}else{
i2 = i;
}

            printf("%d\n", i2);
        switch(i2){
            case 1 :{
                dias += 31;
            }
            case 2 :{
                if(ver == 1){
                    dias += 29;
                }else{
                    dias +=28;
                }
            }
            case 3 :{
                dias += 31;
            }
            case 4 :{
                dias += 30;
            }
            case 5 :{
                dias += 31;
            }
            case 6 :{
                dias += 30;
            }
            case 7 :{
                dias += 31;
            }
            case 8 :{
                dias += 31;
            }
            case 9 :{
                dias += 30;
            }
            case 10 :{
                dias += 31;
            }
            case 11 :{
                dias += 30;
            }
            case 12 :{
                dias += 31;
            }

        printf("dias %d\n", dias);
        printf("ano %d\n", ano);

    }
     printf("i2 %d\n", i2);
printf("ano %d\n", ano);
   ano++;
 i++;
 cont++;
 }
    return dias;
}
