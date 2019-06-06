#include <stdio.h>
#include <stdlib.h>
/*5 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
void main(){
int i;
int n;
int m;
printf("Digite um numero para saber seu multiplo: \n");
scanf("%d", &n);
printf("Digite o limite minimo: \n");
scanf("%d", &m);
    for(i=m; i < m + n; i++){
        if(i%n == 0){
           printf("%d", i);
        }
    }
}
