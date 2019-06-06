#include <stdio.h>
#include <stdlib.h>
/*3 - Reescreva o exercicio anterior utilizando numeros float. */
int main()
{
    float n1;
    float n2;
    int fim =0;
do{
    printf("Digite um numero float");
    scanf("%f", &n1);

    printf("Digite otro numero float");
    scanf("%f", &n2);

    printf("%f += %f = %f\n", n1, n2, n1 += n2);
    printf("%f -= %f = %f\n", n1, n2, n1 -= n2);
    printf("%f *= %f = %f\n", n1, n2, n1 *= n2);
    printf("%f /= %f = %f\n", n1, n2, n1 /= n2);
//    printf("%f %%= %f = %f\n", n1, n2, n1 %= n2);
//    printf("%f >>= %f = %f\n", n1, n2, n1 >>= n2);
//    printf("%f <<= %f = %f\n", n1, n2, n1 <<= n2);
//    printf("%f &= %f = %f\n", n1, n2, n1 &= n2);
//    printf("%f ^= %f = %f\n", n1, n2, n1 ^= n2);
//    printf("%f != %f = %f\n", n1, n2, n1 != n2);
 printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 0);
}
