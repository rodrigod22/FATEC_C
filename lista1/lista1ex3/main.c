#include <stdio.h>

/*3 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.*/
int main()
{
short s;
long l;
int i;
float f;
double d;
char c;
unsigned char uc;
unsigned int ui;
unsigned long ul;


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
printf("Digite um char unsigned ");
scanf("%u %c", &uc);
fflush(stdin);
printf("Digite um inteiro unsigned ");
scanf("%u", &ui);
printf("Digite um long unsigned");
scanf("%lu", &ul);

printf("\n        10        20        30        40        50        60\n");
printf("12345678901234567890123456789012345678901234567890123456789012345\n");
printf("    %-6d",s);
printf("              %-10d",l);
printf("          %-6d\n",i);
printf("              %-8f",f);
printf("            %-15lf",d);
printf("     %c\n",c);
printf("         %c",uc);
printf("                   %-6u",ui);
printf("              %-10lu",ul);
}
