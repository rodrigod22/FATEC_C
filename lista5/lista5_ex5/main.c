#include <stdio.h>
#include <stdlib.h>
/*
5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
*/
int main()
{
char vet[11];
int ver=0;
int i;
int fim=0;

do{
    printf("Digite uma string em letra minusculas: ");
    scanf("%s", &vet);

    for(i=0; i<10;i++){
        if(vet[i] != 0){
            ver = (int) vet[i]-32;
            printf("%c", ver);
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
