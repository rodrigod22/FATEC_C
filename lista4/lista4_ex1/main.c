#include <stdio.h>
#include <stdlib.h>
/* 1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
                */
int main()
{

  int nInt [3];
  long nLong [3];
  unsigned nUnsig [3];
  float nFloat [3];
  double nDouble [3];
  int i =0;
  int verif;
do{
  do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &nInt[i]);
        printf("Digite um numero long: ");
        scanf("%ld", &nLong[i]);
        printf("Digite um numero unsigned: ");
        scanf("%u", &nUnsig[i]);
        printf("Digite um numero Float: ");
        scanf("%f", &nFloat[i]);
        printf("Digite um numero Double: ");
        scanf("%lf", &nDouble[i]);

    i++;
  }while(i < 3);
printf("\n\n        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
  for(i=0; i < 3; i++){
    printf("  %-6d", nInt[i]);
    printf("              %-10ld", nLong[i]);
    printf("          %-6u\n", nUnsig[i]);
    printf("            %-11le", nFloat[i]);
    printf("       %-11le\n\n", nDouble[i]);
  }
  printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
  scanf("%d", &verif);
}while(verif != 1);
}
