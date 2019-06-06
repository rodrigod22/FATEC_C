#include <stdio.h>
#include <stdlib.h>
/*8 - Escreva um program que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10 e $1 em que o valor lido pode ser
    decomposto. Imprimir o valor lido e a relação de notas necessárias.*/
int main(){

int n=0;
int c=0;
int d=0;
int u=0;
int cinq=0;
  printf("Digite um valor: ");
  scanf("%d", &n);

 c = n / 100;
 d =  (n - (c * 100 )) / 10;
 u = n - (d *10) - (c *100);

 if(d >= 5){
    cinq = 1;
    u = n - (d *10) - (c *100);
 }
if(d != 0){
 d -=5;
}
 printf("notas de 100 %d\n notas de 50 %d \n notas de 10 %d\n notas de 1 %d", c, cinq,d,u );
}
