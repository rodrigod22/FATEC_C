#include <stdio.h>
#include <stdlib.h>
/*
8 - Escreva um programa que calcula o comprimento de uma string recebida via
    teclado.
*/
int main()
{
char str[10] = {0};
int i=0;
int ver =0;
printf("Digite uma string: ");
scanf("%s", str);
for(i=0; i<10; i++){
    if(str[i] != '\0'){
        ver++;
       }
}
printf("%d", ver);

}
