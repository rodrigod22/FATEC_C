#include <stdio.h>
#include <stdlib.h>
/*4 - Escreva um programa que permute o conte�do de duas vari�veis sem utilizar uma
    vari�vel auxiliar.*/
int main()
{
int a = 45;
int b = 34;

 printf("variavel a antes da troca %d\n",a);
 printf("variavel b antes troca %d\n",b);


 a = b + a ;
 b =  a - b;
 a = a - b;
 printf("variavel a apos troca %d\n",a);
 printf("variavel b apos troca %d\n",b);

}
