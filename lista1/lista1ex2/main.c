#include <stdio.h>
#include <stdlib.h>

/*2 - Escreva um programa que receba dados via teclado para variaveie do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
int main()
{
short s;
long l;
int i;
float f;
double d;
char c;
printf("Digite um Short ");
scanf("%hd", &s);
printf("Digite um long ");
scanf("%ld", &l);
printf("Digite um inteiro ");
scanf("%d", &i);
printf("Digite um float ");
scanf("%f", &f);
printf("Digite um double ");
scanf("%lf", &d);
fflush(stdin);
printf("Digite um char ");
scanf("%c", &c);

printf("        10        20        30        40        50        60\n");
printf("12345678901234567890123456789012345678901234567890123456789012345\n");
printf("    %-6d",s);
printf("              %-10d",l);
printf("         %-6d\n",i);
printf("              %-8.1e",f);
printf("            %-9.le",d);
printf("           %c",c);

}
