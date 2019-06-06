#include <stdio.h>
#include <stdlib.h>
/*
2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main()
    */

int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
int dividir(int n1, int n2);

int main()
{
 int n1;
 int n2;
 int soma;
 int subtracao;
 int multiplicacao;
 int divisao;
 printf("Digite um numero inteiro: ");
 scanf("%d", &n1);
 printf("Digite um numero inteiro: ");
 scanf("%d", &n2);
soma = somar(n1, n2);
subtracao = subtrair(n1, n2);
multiplicacao = multiplicar(n1, n2);
divisao = dividir(n1, n2);
printf("A soma de %d + %d = %d\n", n1 ,n2, soma);
printf("A subtracao de %d - %d = %d\n", n1 ,n2, subtracao);
printf("A multiplicacao de %d * %d = %d\n", n1 ,n2, multiplicacao);
printf("A divisao de %d / %d = %d\n", n1 ,n2, divisao);
}
int somar(int n1, int n2)
{
    return n1+ n2;
}
int subtrair(int n1, int n2)
{
    return n1 - n2;
}
int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

int dividir(int n1, int n2)
{
    return n1 / n2;
}
