#include <stdio.h>
#include <stdlib.h>
/*
8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
    uma mensagem de ”nao encontrado”.
*/
int main()
{
int vet[5][5];
int l;
int c;
int x;
int contX =0;
int fim =0;
do{
    printf("Digite uma matriz 5 x 5\n\n");
    for(l=0; l <5; l++){
        for(c=0; c<5; c++){
            printf("Digite o numero da linha %d , coluna %d : ", l,c);
            scanf("%d", &vet[l][c]);
        }
    }
    printf("\n\nDigite o numero para procurar na matriz: ");
    scanf("%d", &x);
    for(l=0; l <5; l++){
        for(c=0; c<5; c++){
            if(x == vet[l][c]){
                printf("\nNumero encontrado na linha %d , coluna %d\n", l, c);
                contX++;
            }
        }
    }
    if(contX == 0){
        printf("Numero nao encontrado !!! \n");
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
