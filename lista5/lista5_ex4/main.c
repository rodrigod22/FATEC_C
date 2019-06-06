#include <stdio.h>
#include <stdlib.h>
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
