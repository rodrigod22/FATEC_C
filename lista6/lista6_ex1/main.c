#include <stdio.h>
#include <stdlib.h>
/* 1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
    */
char verificar(char);
int main()
{
char c;
char result;
int fim=0;

do{
fflush(stdin);
printf("Digite uma letra: ");
scanf("%c", &c);
result = verificar(c);
printf("\nA letra digitada foi %c\n\n", result);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);

}
//funcao para verificar se consta um char no vetor
char verificar(char c){
char vet [13] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
 int i;
 int cont = 0;
 for(i=0; i < 13; i++){
    if(vet[i] == c){
       cont++;
    }
 }
 if(cont > 0){
    printf("A letra %c consta no vetor\n", c);
 }else{
    printf("\nA letra %c nao consta no vetor", c);
 }
return c;
}
