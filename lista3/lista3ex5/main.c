#include <stdio.h>
#include <stdlib.h>
/* 5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.*/
int main()
{
int a;
int fim =0;
do{
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("O numero recebido foi %3d a divisao por 8 = %3d e multiplicacao por 8 = %3d",a, a >> 3 , a << 3 );
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
