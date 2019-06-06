#include <stdio.h>
#include <stdlib.h>
/*3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.
*/
int main()
{
int vet [2][3][3] = {0};
int p =0;
int l =0;
int c =0;
int fim =0;
    do{
        printf("Digite uma matriz 2 x 3 x 3\n\n");
        for(p=0; p < 2; p++){
            for(l=0; l < 3; l++){
                for(c=0; c<3; c++){
                    printf("Digite um numero: ");
                    scanf("%d", &vet[p][l][c]);
                }
            }
        }
        for(p=0; p < 2; p++){
            for(l=0; l < 3; l++){
                for(c=0; c<3; c++){
                    printf("Valor vetor pagina %d linha %d coluna %d = %d \n", p, l,c, vet[p][l][c] );
                }
            }
        }
        printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
        scanf("%d", &fim);

    }while(fim != 1);
}
