#include <stdio.h>
#include <stdlib.h>
/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior
int main()*/
int main()
{
float n;
float i = 0;

printf("Digite um numero: ");
scanf("%f", &n);
i = n - (int)n;
if(i <= 0.24){
n -=  i;
}else if(i >= 0.25 && i < 0.75){
n += 0.5 -i;
}else if(i >= 0.75){
n += 1 - i;
}
printf("Valor arredondado %f", n);
}
