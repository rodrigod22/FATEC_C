#include <stdio.h>
#include <stdlib.h>
/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
int main()
{
  int a;
  int b;
  int fim=0;
do{
     printf("Digite um numero: ");
     scanf("%d" , &a);
     printf("Digite outro numero: ");
     scanf("%d", &b);

    printf(" Operadores bit-a-bit\n");
    printf(" AND                 a & b -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a & b,a & b); /* 0x20 */
    printf(" OU                  a | b -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a | b,a | b); /* 0x76 */
    printf(" OU EXCLUSIVO        a ^ b -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a ^ b,a ^ b); /* 0x56 */
    printf(" desloc. a direita  a >> 3 -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a>>2,a>>2);   /* 0x0c */
    printf(" desloc. a esquerda a << 1 -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a<<4,a<<4);   /* 0xc8 */
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

