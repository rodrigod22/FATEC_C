#include <stdio.h>
#include <stdlib.h>
/*
2 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3
*/
int main()
{
char nome [3][10];
int l;
int fim;
do{
    printf("Digite 3 strings de ate 10 caracteres\n\n");
    for(l=0;l<3;l++){
       printf("Digite a %d string: ", l+1);
       scanf("%s", &nome[l]);
    }
    printf("\n\n        10        20        30        40        50        60\n123456789012345678901234567890123456789012345678901234567890\n ");

    printf("   %-10s", nome[0]);
    printf("          %-10s ", nome[1]);
    printf("         %-10s", nome[2]);


    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);

}
