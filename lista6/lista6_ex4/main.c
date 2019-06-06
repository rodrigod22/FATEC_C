#include <stdio.h>
#include <stdlib.h>
/*
2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main()
3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.
4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).
    */
int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(int n1, int n2);

int main()
{
  int n1, n2, result = 0;
    char operacao;


    printf("Digite um numero e enter, depois digite a operacao e enter: ");
        scanf("%d",&n1);
    do {
        operacao = _getche();
        if(operacao == '=') {
            break;
        }
        fflush(stdin);
        printf("\nDigite outro numero: ");
        scanf("%d",&n2);
        fflush(stdin);
        switch(operacao) {
            case '+': result = somar(n1,n2);
                printf("= %d ",somar(n1,n2));
            break;
            case '-': result = subtrair(n1,n2);
                printf("= %d ",subtrair(n1,n2));
            break;
            case '*': result = multiplicar(n1,n2);
                printf("= %d ",multiplicar(n1,n2));
            break;
            case '/': result = (int) dividir(n1,n2);
                printf("= %2.f ", dividir(n1,n2));
            break;
        }
        n1 = result;

    } while(1==1);
    printf("\nResultado: %d\n", result);
}
//funcao somar
int somar(int n1, int n2)
{
    return n1+ n2;
}
//funcao subtrair
int subtrair(int n1, int n2)
{
    return n1 - n2;
}
//funcao multiplicar
int multiplicar(int n1, int n2)
{
    return n1 * n2;
}
//funcao dividir
float dividir(int n1, int n2)
{
    return (float) n1 / (float) n2;
}
