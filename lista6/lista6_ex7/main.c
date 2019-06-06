#include <stdio.h>
#include <stdlib.h>
/*
7 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma
    função que receba por parametro os 2 valores X e Z, calcule e retorne o
    resultado de X exponencial Z para o programa principal.
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.
*/
int main()
{
int exponencial(int x, int z);
int x=0;
int z;
int exp=0;
printf("Digite um numero: ");
scanf("%d", &x);
printf("\nDigite um numero: ");
scanf("%d", &z);
exp = exponencial(x, z);
printf("O exponencial de %d por %d = %d", x, z, exp);
}
int exponencial(int x, int z){
int exp=1;
    for(z ; z > 0; z--){
            exp *= x;
    }
return exp;
}
