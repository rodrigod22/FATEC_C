#include <stdio.h>
#include <stdlib.h>
/*
7 - Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor
    ASCII de cada caractere da palavra. Na sua funcao main(), imprima a string
    resultante.
*/
int main()
{
char vet[50]={0};
int vet2[50]={0};
int ver=0;
int i;
int fim=0;

do{
    printf("Digite uma string: ");
    scanf("%s", &vet);
printf("A palavra convertida e ");
    for(i=0; i<50;i++){
        if(vet[i] != 0){
            vet2[i] = (int) vet[i]+1;
            printf("%c", vet2[i]);
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
