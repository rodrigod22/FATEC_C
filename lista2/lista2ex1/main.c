#include <stdio.h>
#include <stdlib.h>
/*1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.*/
int main()
{
    int i=0;
    int n=0;
    int soma = 0 ;
    float media = 0;
do{
    printf("Digite numeros positivos encerra quando digitar um numero negativo: \n");
    scanf("%d", &n);
        if(n%2 == 0){
            soma += n;
             i++;
         }
}while(n%2 == 0);
media =  soma;
media /= i;
printf("\nA media dos numeros digitados e %f", media);
}
