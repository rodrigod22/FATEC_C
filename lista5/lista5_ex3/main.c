#include <stdio.h>
#include <stdlib.h>
/*
3 - Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são IGUAIS ou DIFERENTES.
*/

//verificar pq o espaco representa o enter
int main()
{
int validaString(char str3[10], char str4[10]);
char str1[10]={0};
char str2[10]={0};
int valida;
int i=0;
printf("Digite 2 strings de ate 10 caracteres\n\n");
printf("Digite a 1 string: ");
scanf("%s", &str1);

printf("\nDigite a 2 string: ");
scanf("%s", &str2);

//for(i=0; i<10;i++){
//
//    printf("%c\n",str1[i]);
//}
//for(i=0; i<10;i++){
//    printf("%c\n",str2[i]);
//}

valida = validaString(str1,str2);

if(valida > 0){
    printf("As strings sao diferentes");
}else{
    printf("as strings sao iguais");
    }
}
//funcao valida string
int validaString(char str3[10], char str4[10]){
int i;
int ver=0;
for(i=0; i<10;i++){
    if(str3[i] == 0 && str4[i] != 0  ){
        ver ++;
    }else
    if(str3[i] != str4[i]){
        ver++;
    }
}
return ver;
}
