#include <stdio.h>
#include <stdlib.h>
/*
6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.
*/
int main()
{
int n=0;
int i;
int fim=0;

do{
    int contPar=0;
    int contImpar=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
        int vet1[n];
        int vetPar[n];
        int vetImpar[n];

    for(i=0; i < n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vet1[i]);
        if(vet1[i]%2 == 0){
            vetPar[contPar] = vet1[i];
            contPar++;
        }else{
            vetImpar[contImpar] = vet1[i];
            contImpar ++;
        }
    }
    printf("Vetor par = { ");
    for(i=0; i < contPar; i++){
        printf(" '%d' ", vetPar[i]);
    }
    printf(" }\n");

    printf("Vetor impar = { ");
    for(i=0; i < contImpar; i++){
        printf(" '%d' ", vetImpar[i]);
    }
    printf(" }");
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
