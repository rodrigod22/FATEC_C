#include <stdio.h>
#include <stdlib.h>
/*2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.*/

int main()
{
    int n1;
    int n2;
    int fim =0;
do{
    printf("Digite um numero inteiro ");
    scanf("%d", &n1);
    printf("Digite otro numero inteiro ");
    scanf("%d", &n2);
    printf("%d += %d = %d\n", n1, n2, n1 += n2);
    printf("%d -= %d = %d\n", n1, n2, n1 -= n2);
    printf("%d *= %d = %d\n", n1, n2, n1 *= n2);
    printf("%d /= %d = %d\n", n1, n2, n1 /= n2);
    printf("%d %%= %d = %d\n", n1, n2, n1 %= n2);
    printf("%d >>= %d = %d\n", n1, n2, n1 >>= n2);
    printf("%d <<= %d = %d\n", n1, n2, n1 <<= n2);
    printf("%d &= %d = %d\n", n1, n2, n1 &= n2);
    printf("%d ^= %d = %d\n", n1, n2, n1 ^= n2);
    printf("%d != %d = %d\n", n1, n2, n1 != n2);
 printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
 scanf("%d", &fim);
}while(fim != 1);
}
