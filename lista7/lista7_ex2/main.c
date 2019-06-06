#include <stdio.h>
#include <stdlib.h>
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
int i=0;
struct pessoa cliente[4];

for(i; i < 4; i++){
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
}
