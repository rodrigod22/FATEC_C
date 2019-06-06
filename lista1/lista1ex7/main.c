#include <stdio.h>
#include <stdlib.h>
/*7 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
      outro número formado pelos dígitos invertidos do número lido.
      Ex: NúmeroLido = 123
          NúmeroGerado = 321*/
int main(){
int n;
int n1;
int n2;
int n3;

do{
printf("Digite um numero de 3 digitos: \n");
scanf("%d", &n);
n1 = n/100;
n2 = (n - n1 * 100)/10;
n3 = n - (n1 * 100) - (n2*10);

    if(n < 100  && n1 != 0 || n > 999 || n <= 0){
        printf("Favor digitar um numero de 3 digitos maior que 0\n");
    }
}while(n < 100 && n1 != 0 || n > 999|| n <= 0);
printf("\n%d\n%d\n%d", n3,n2,n1);
}
