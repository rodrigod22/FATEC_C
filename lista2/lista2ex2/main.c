#include <stdio.h>
#include <stdlib.h>
/*
2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.*/
int main()
{
    int n;
    int tent;
       printf("Digite um numero entre 1 e 99: \n");
       scanf("%d", &n);
    do{
       printf("Adivinhe o numero: \n");
       scanf("%d", &tent);

    if(tent == n){
        printf("Acertou o numero parabens ");
    }else if(tent > n){
        printf("Errou numero maior que o correto \n");
    }else if(tent < n){
        printf("Errou numero menor que o escolhido\n");
    }
    }while(n != tent);
}

