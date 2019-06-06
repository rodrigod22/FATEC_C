#define ex8
#include <stdio.h>

#ifdef ex1
/*
1 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
int main()
{
char nome [5][8];
int l;
int fim;
do{
    printf("Digite 5 nomes\n\n");
    for(l=0;l<5;l++){
       printf("Digite o %d nome: ", l+1);
       scanf("%s", &nome[l]);
    }
    printf("\n\n        10        20        30        40        50\n12345678901234567890123456789012345678901234567890\n ");

    printf(" %-7s", nome[0]);
    printf("                                 %-7s\n ", nome[4]);
    printf("           %-7s", nome[1]);
    printf("             %-7s\n ", nome[3]);
    printf("                     %-7s\n ", nome[2]);

    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex1

#ifdef ex2
/*
2 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3
*/
int main()
{
char nome [3][10];
int l;
int fim;
do{
    printf("Digite 3 strings de ate 10 caracteres\n\n");
    for(l=0;l<3;l++){
       printf("Digite a %d string: ", l+1);
       scanf("%s", &nome[l]);
    }
    printf("\n\n        10        20        30        40        50        60\n123456789012345678901234567890123456789012345678901234567890\n ");

    printf("   %-10s", nome[0]);
    printf("          %-10s ", nome[1]);
    printf("         %-10s", nome[2]);


    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);

}

#endif // ex2

#ifdef ex3
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

#endif // ex3

#ifdef ex4
/*
4 - Leia uma string (3 caracteres) via teclado que pode assumir os valores seg,
    ter, qua, qui, sex, sab, dom, e imprima as seguintes mensagens, respectivamente:
    segunda-feira, terca-feira, quarta-feira, quinta-feira, sexta-feira, sabado e
    domingo. Utilize o comando switch - case.
*/
int main()
{
int validaString(char str[4]);
char str[4];
int valida=0;
int fim=0;
do{
printf("Digite um dia da semana do segunte formato: seg, ter, qua, qui, sex, sab, dom: ");
scanf("%s", &str);

valida = validaString(str);

switch(valida){

    case 11:{
        printf("Segunda-Feira");
        break;
    }
    case 12:{
        printf("Terca-Feira");
        break;
    }
    case 13:{
        printf("Quarta-Feira");
        break;
    }
    case 14:{
        printf("Quinta-Feira");
        break;
    }
    case 15:{
        printf("Sexta-Feira");
        break;
    }
    case 16:{
        printf("Sabado");
        break;
    }case 17:{
        printf("Domingo");
        break;
    }
    default :{
        printf("Dia invalido\n\n");
        return main();
    }
}
printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

//funcao valida
int validaString(char str[4]){
char seg[4] = "seg";
char ter[4] = "ter";
char qua[4] = "qua";
char qui[4] = "qui";
char sex[4] = "sex";
char sab[4] = "sab";
char dom[4] = "dom";
int i;
int ver=5;
int d1 =0;
int d2 =0;
int d3 =0;
int d4 =0;
int d5 =0;
int d6 =0;
int d7 =0;

for(i=0; i<4;i++){
    if(seg[i] != str[i]){
        d1++;
    } if(seg[i] == 0 && str[i] != 0){
        d1++;
    }else if(i==2 && d1 == 0){
        ver = 11;
    }

    if(ter[i] != str[i]){
        d2++;
    } if(ter[i] == 0 && str[i] != 0){
        d2++;
    }else if(i==2 && d2 == 0){
       ver = 12;
    }
    if(qua[i] != str[i]){
        d3++;
    } if(qua[i] == 0 && str[i] != 0){
        d3++;
    }else if(i==2 && d3 == 0){
       ver = 13;
    }
    if(qui[i] != str[i]){
        d4++;
    } if(qui[i] == 0 && str[i] != 0){
        d4++;
    }else if(i==2 && d4 == 0){
       ver = 14;
    }
    if(sex[i] != str[i]){
        d5++;
    } if(sex[i] == 0 && str[i] != 0){
        d5++;
    }else if(i==2 && d5 == 0){
       ver = 15;
    }

    if(sab[i] != str[i]){
        d6++;
    } if(sab[i] == 0 && str[i] != 0){
        d6++;
    }else if(i==2 && d6 == 0){
       ver = 16;
    }

    if(dom[i] != str[i]){
        d7++;
    } if(dom[i] == 0 && str[i] != 0){
        d7++;
    }else if(i==2 && d7 == 0){
       ver = 17;
    }
}
    if(d1 > 0 && d2 > 0 && d3 > 0 && d4 > 0 && d5 > 0 && d6 > 0 && d7 > 0){
        return 0;
    }else{
        return ver;
    }
}
#endif // ex4

#ifdef ex5
/*
5 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
*/
int main()
{
char vet[11];
int ver=0;
int i;
int fim=0;

do{
    printf("Digite uma string em letra minusculas: ");
    scanf("%s", &vet);

    for(i=0; i<10;i++){
        if(vet[i] != 0){
            ver = (int) vet[i]-32;
            printf("%c", ver);
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex5

#ifdef ex6
/*
6 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.
*/
int main()
{
char vet[11];
int ver=0;
int i;
int fim=0;
do{
    printf("Digite uma string em letras MAIUSCULAS: ");
    scanf("%s", &vet);
    for(i=0; i<10;i++){
        if(vet[i] != 0){
            ver = (int) vet[i]+32;
            printf("%c", ver);
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex6

#ifdef ex7
/*
7 - Faca um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor
    ASCII de cada caractere da palavra. Na sua funcao main(), imprima a string
    resultante.
*/
int main()
{
char vet[50]={0};
int vet2[50]={0};
int ver=0;
int i;
int fim=0;

do{
    printf("Digite uma string: ");
    scanf("%s", &vet);
printf("A palavra convertida e ");
    for(i=0; i<50;i++){
        if(vet[i] != 0){
            vet2[i] = (int) vet[i]+1;
            printf("%c", vet2[i]);
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex7

#ifdef ex8
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

#endif // ex8
