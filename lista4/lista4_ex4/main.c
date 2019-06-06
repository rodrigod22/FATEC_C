#include <stdio.h>
#include <stdlib.h>
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/
int main()
{

int vet1[2][3];
int vet2[2][3];
int vet3[2][3];
int l;
int c;
int fim=0;
do{
    printf("Digite 2 matrizes 2 x 3\n\n");

    for(l=0; l < 2; l++){
        for(c=0; c < 3; c++ ){
            printf("Digite o indice %d da linha %d do vetor 1: ",c , l);
            scanf("%d", &vet1[l][c]);

            printf("Digite o indice %d da linha %d do vetor 2: ",c , l);
            scanf("%d", &vet2[l][c]);

            vet3[l][c] = vet1[l][c] * vet2[l][c];
        }
    }

    for(l=0; l < 2; l++){
        for(c = 0; c < 3; c++ ){
            printf(" \n vetor 1 -  indice %d / linha %d = %d \n vetor 2 - indice %d / linha %d = %d\n resultado %d x %d = %d\n",
                    c , l, vet1[l][c], c, l, vet2[l][c], vet1[l][c], vet2[l][c], vet3[l][c] );
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
