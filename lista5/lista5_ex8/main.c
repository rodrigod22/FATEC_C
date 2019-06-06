#include <stdio.h>
#include <stdlib.h>
/*
8 - Escreva um programa que calcula o comprimento de uma string recebida via
    teclado.
*/
int main()
{
int contaStr(char str1[100]);
char str[100];
int i=0;
int ver =0;
int fim=0;
do{
printf("Digite uma string: ");
scanf("%s", str);

ver = contaStr(str);
printf("Tamanho da string %d caracteres\n\n", ver);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
int contaStr(char str1[100]){
int verif =0;
int i;
for(i=0; i<100; i++){
    if(str1[i] != '\0'){
        verif++;
    }else{
        return verif;
    }
}
return verif;
}
