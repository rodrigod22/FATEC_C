#include <stdio.h>
#include <stdlib.h>
/*2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 4, 5, 2, 2, 5, 4, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10) */
int main()
{

 int vet[10];
 int i = 0;
 int fim;
do{
  int verif =0;
printf("Digite um vetor de 10 numeros\n");
do{

 printf("digite o %d numero", i+1);
 scanf("%d", &vet[i]);
 i++;
}while(i < 10);

for(i=0; i < 5; i++){
    if(i == 0){
        if(vet[i] != vet[i+9]){
            verif ++;
        }
    }else
    if(i == 1){
        if(vet[i] != vet[i+7]){
            verif ++;
        }
    }else
    if(i == 2){
        if(vet[i] != vet[i+5]){
            verif ++;
        }
    }else
    if(i == 3){
        if(vet[i] != vet[i+3]){
            verif ++;
        }
    }else
    if(i == 4){
        if(vet[i] != vet[i+1]){
            verif ++;
        }
    }
}
if(verif == 0){
    printf("\nO vetor e palindromo\n\n");
}else{
    printf("\nO vetor nao e palindromo\n\n");
}

 printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
 scanf("%d", &fim);
 i=0;
}while(fim != 1);
}
