#define ex8
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/

    char cG = '1';
    int iG = 32767;
    short sG = 32767;
    long lG =  2147483647;
    unsigned char cU = 255;
    unsigned int iU = 65535;
    unsigned short sU = 65535;
    unsigned long lU = 4294967295;

void mostra(){
        char cl = '1';
        int il = -32768;
        short sl = -32768;
        long ll =  -2147483648;

        printf("\n CHAR MIN: %c", cl);
        printf("\n CHAR MAX: %c", cG);
        printf("\n INT MIN: %d", il);
        printf("\n INT MAX: %d", iG);
        printf("\n SHORT MIN: %d", sl);
        printf("\n SHORT MAX: %d", sG);
        printf("\n LONG MIN: %ld", ll);
        printf("\n LONG MAX: %ld", lG);
        printf("\n CHAR UNSIGNED: %u %c", cU, cU);
        printf("\n INT UNSIGNED: %u", iU);
        printf("\n SHORT UNSIGNED: %hu", sU);
        printf("\n LONG UNSIGNED: %lu", lU);
    }

int main(){
    mostra();
}
#endif //ex1

#ifdef ex2

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
printf("              %-11d",l);
printf("         %-6d\n",i);
printf("              %-8.1e",f);
printf("            %-9.le",d);
printf("           %c",c);

}
#endif //ex2

#ifdef ex3
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
fflush(stdin);
printf("Digite um char unsigned ");
scanf("%c", &c);
fflush(stdin);
printf("Digite um inteiro unsigned ");
scanf("%u", &ui);
fflush(stdin);
printf("Digite um long unsigned");
scanf("%lu", &ul);

printf("\n        10        20        30        40        50        60\n");
printf("12345678901234567890123456789012345678901234567890123456789012345\n");
printf("    %-6d",s);
printf("              %-10d",l);
printf("          %-6d\n",i);
printf("              %-15.2f",f);
printf("     %-11ld",d);
printf("         %c\n",c);
printf("       %c %u",uc,uc);
printf("                   %-6hd",ui);
printf("              %-10lu",ul);
}

#endif //ex3

#ifdef ex4
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.*/
int main()
{
int a = 45;
int b = 34;
 printf("variavel a antes da troca %d\n",a);
 printf("variavel b antes troca %d\n",b);
 a = b + a ;
 b =  a - b;
 a = a - b;
 printf("variavel a apos troca %d\n",a);
 printf("variavel b apos troca %d\n",b);
}
#endif //ex4

#ifdef ex5
/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
void main(){
int i;
int n;
int m;
printf("Digite um numero para saber seu multiplo: \n");
scanf("%d", &n);
printf("Digite o limite minimo: \n");
scanf("%d", &m);
    for(i=m; i < m + n; i++){
        if(i%n == 0){
           printf("O minimo multiplo e %d", i);
        }
    }
}

#endif //ex5

#ifdef ex6
/*6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
int main(){
   long time;
   int horas_seg = 3600;
   int horas;
   int min;
   int seg;

   printf("Digite o tempo em segundos: ");
   scanf("%ld", &time);
   horas = time/horas_seg ;
   min = (time - (horas_seg*horas))/60;
   seg = (time -(horas_seg*horas)-(min*60));
   printf("%.2d:%.2d:%.2d", horas, min, seg);
}

#endif //ex6

#ifdef ex7
/*7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
      outro número formado pelos dígitos invertidos do número lido.
      Ex: NúmeroLido = 123
          NúmeroGerado = 321*/
int main(){
int n;
int n1;
int n2;
int n3;

do{
printf("Digite um numero de 3 digitos: \n");
scanf("%d", &n);
n1 = n/100;
n2 = (n - n1 * 100)/10;
n3 = n - (n1 * 100) - (n2*10);

    if(n < 100  && n1 != 0 || n > 999 || n <= 0){
        printf("Favor digitar um numero de 3 digitos maior que 0\n");
    }

}while(n < 100 && n1 != 0 || n > 999|| n <= 0);
   printf("Numero invertido: ");
printf("%d%d%d", n3,n2,n1);
}

#endif //ex7

#ifdef ex8
/*8 - Escreva um program que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser
    decomposto. Imprimir o valor lido e a relação de notas necessárias.*/
int main(){

int n=0;
int c=0;
int d=0;
int u=0;
int cinq=0;
  printf("Digite um valor: ");
  scanf("%d", &n);

 c = n / 100;
 d =  (n - (c * 100 )) / 10;
 u = n - (d *10) - (c *100);

 if(d >= 5){
    cinq = 1;
    u = n - (d *10) - (c *100);
 }
if(d != 0){
 d -=5;
}
 printf("notas de 100 %d\n notas de 50 %d \n notas de 10 %d\n notas de 1 %d", c, cinq,d,u );
}

#endif //ex8










