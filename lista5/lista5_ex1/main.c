#include <stdio.h>
#include <stdlib.h>
/*
1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
int main()
{
char nome [5][8];
int l;
int fim;
do{
    printf("Digite 5 nomes\n\n");
    for(l=0;l<5;l++){
       printf("Digite o %d nome: ", l+1);
       scanf("%s", &nome[l]);
    }
    printf("\n\n        10        20        30        40        50\n12345678901234567890123456789012345678901234567890\n ");

    printf(" %-7s", nome[0]);
    printf("                                 %-7s\n ", nome[4]);
    printf("           %-7s", nome[1]);
    printf("             %-7s\n ", nome[3]);
    printf("                     %-7s\n ", nome[2]);

    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
