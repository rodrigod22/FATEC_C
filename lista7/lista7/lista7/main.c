#define ex3
#include "stdio.h"
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//RODRIGO DE ARAUJO PEIXOTO ADS - MANHA

#ifdef ex1
/*
1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/

   struct data{
    char c;
	int i;
	long l;
	float f;
	double d;
	unsigned char uc;
	unsigned int ui;
	unsigned long ul;
	};

int main()
{
    int fim =0;
    do{
struct data dados;
        printf("Digite um char: ");
        scanf("%c", &dados.c);
        fflush(stdin);
        printf("Digite um numero inteiro: ");
        scanf("%d", &dados.i);
        fflush(stdin);
        printf("Digite um numero long: ");
        scanf("%ld", &dados.l);
        fflush(stdin);
        printf("Digite um numero Float: ");
        scanf("%f", &dados.f);
        fflush(stdin);
        printf("Digite um numero Double: ");
        scanf("%lf", &dados.d);
        fflush(stdin);
         printf("Digite um unsigned char: ");
         scanf("%u", &dados.uc);
        fflush(stdin);
         printf("Digite um unsigned int: ");
         scanf("%u", &dados.ui);

         printf("Digite um unsigned long: ");
         scanf("%lu", &dados.ul);

printf("        10        20        30        40        50        60        70\n");
printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");

printf("    %c", dados.c);
printf("         %-6d", dados.i);
printf("    %-10ld", dados.l);
printf("          %-11le", dados.f);
printf("       %-11le\n", dados.d);
printf("          %-3u", dados.uc);
printf("                 %-6u", dados.ui);
printf("              %-11lu\n\n", dados.ul);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex1

#ifdef ex2
/*
2 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep
*/

struct pessoa{
    char nome[255];
    char end[255];
    char cidade[255];
    char estado[3];
    char cep[10];
};

int main()
{
int fim = 0;
do{
int i=0;

struct pessoa cliente[4];

for(i; i < 4; i++){
     fflush(stdin);
     printf("Digite o %d nome: ", i+1);
     scanf("%[^\n]s", &cliente[i].nome);
     fflush(stdin);
     printf("Digite o %d endereco: ", i+1);
     scanf("%[^\n]s", &cliente[i].end);
     fflush(stdin);
     printf("Digite o %d cidade: ", i+1);
     scanf("%[^\n]s", &cliente[i].cidade);
     fflush(stdin);
     printf("Digite o %d estado: ", i+1);
     scanf("%s", &cliente[i].estado);
     fflush(stdin);
     printf("Digite o %d cep: ", i+1);
     scanf("%s", &cliente[i].cep);
     fflush(stdin);
}
printf("MENU ?\n");
printf("_____________________________________________\n");
for(i=0; i < 4; i++){
     printf("Nome %d: %s\n", i+1, cliente[i].nome);
     printf("Endereco %d: %s\n", i+1, cliente[i].end);
     printf("Cidade %d: %s\n", i+1, cliente[i].cidade);
     printf("Estado %d: %s\n", i+1, cliente[i].estado);
     printf("Cep %d: %s\n", i+1, cliente[i].cep);
     printf("_____________________________________________\n");
}
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex2

#ifdef ex3

/*
3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/
struct coord{
 int x;
 int y;
};

int main()
{
 int fim = 0;
 int i =0;
 struct coord coordenada[2];
 int distancia=0;
do{
    for(i=0; i < 2; i++){
            if(i == 0){
                 printf("Digite a coordenada X do ponta A: ");
                 scanf("%d", &coordenada[i].x);
                 printf("Digite a coordenada Y do ponta A: ");
                 scanf("%d", &coordenada[i].y);
            }else{
                printf("Digite a coordenada X do ponta B: ");
                scanf("%d", &coordenada[i].x);
                printf("Digite a coordenada Y do ponta B: ");
                scanf("%d", &coordenada[i].y);
            }
    }
distancia = sqrt(pow((coordenada[1].x - coordenada[0].x),2)) + pow((coordenada[1].y - coordenada[0].y),2);
printf("A distancia entre os pontos e %d\n\n", distancia);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex3
