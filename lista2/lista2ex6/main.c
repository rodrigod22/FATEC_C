#include <stdio.h>
#include <stdlib.h>
/*6 - Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
     �lcool
         at� 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          at� 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o n�mero de litros vendidos e o tipo de
     combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
     gasolina � R$ 3,88 e o pre�o do litro do �lcool � R$ 3,18.*/
int main()
{
#define ALCOOL 3.18
#define GASOLINA 3.88
int litro;
float total = 0;
char tipo ;
float teste;
printf("Digite a quantidade de litros a abastecer: \n");
scanf("%d", &litro);
fflush(stdin);
printf("Digite o tipo de combustivel (A-alcool, G-gasolina): ");
scanf("%c", &tipo);
teste = litro * (ALCOOL - (ALCOOL * 0.03));
if(litro <= 20){
    if(tipo == 'A'){
         total = litro * (ALCOOL - (ALCOOL * 0.03));

    }else if(tipo == 'G'){
        total = litro * (GASOLINA - (GASOLINA *0.04));
    }
    printf("Total a pagar R$ %.2f\n", total);

}else if(litro > 20){
    if(tipo == 'A'){
        total = litro * (ALCOOL - (ALCOOL * 0.05));

    }else if(tipo == 'G'){
        total = litro * (GASOLINA - (GASOLINA *0.06));
    }
    printf("total a pagar R$ %.2f\n", total);
}
}
