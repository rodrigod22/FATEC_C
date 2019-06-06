#include <stdio.h>
#include <stdlib.h>
/*
5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.
*/
char str1[10];
char str2[10];
int validaString(char str1[10], char str2[10]);
int main()
{
int result=0;
int fim=0;
do{
printf("Digite uma string de ate 10 caracteres: ");
scanf("%s", &str1);
printf("Digite uma string de ate 10 caracteres: ");
scanf("%s", &str2);
result = validaString(str1 , str2);
printf("\n Retorna 0 se forem diferentes\n Retorna 1 se forem iguais\n Retorna 2 se a 1 for maior que a 2\n Retorna 3 se a 2 for maior que a 1\n\n");
printf("O resultado e %d\n\n", result);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
//funcao para verificar se as strings sao iguais e caso diferentes qual a maior
int validaString(char str1[10], char str2[10]){
int i;
int ver=0;
int ver1=0;
int ver2=0;
for(i=0; i<10;i++){
    if(str1[i] == 0 && str2[i] != 0){
       ver ++;
    }else
    if(str1[i] != 0 && str2[i] == 0){
        ver1++;
    }
    if(str1[i] != str2[i]){
        ver2++;
    }
 }
    if(ver > 0){
        return 3;
    }else if(ver1 > 0){
        return 2;
    }else if(ver2 > 0){
        return 0;
    }
    else{
        return 1;
    }
}
