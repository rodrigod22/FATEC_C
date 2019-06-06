#include <stdio.h>
#include <stdlib.h>
/*8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
    conforme tabela abaixo:
       IMC             Classificacao
     < 18,5            Abaixo do Peso
       18,6 - 24,9     Saudavel
       25,0 - 29,9     Peso em excesso
       30,0 - 34,9     Obesidade Grau I
       35,0 - 39,9     Obesidade Grau II(severa)
     > 40,0            Obesidade Grau III(morbida)*/
int main()
{
    float p;
    float a;
    float imc;
    printf("Digite seu peso");
    scanf("%f", &p);
    printf("Digite sua altura");
    scanf("%f", &a);

    imc = p / (a * a);

    if(imc <= 18.5){
        printf("Abaixo do peso");
    }else if(imc >= 18.6 && imc < 24.9){
        printf("Saudavel");
    }else if(imc >= 25 && imc < 29){
        printf("Peso em excesso");
    }else if(imc >= 30 && imc <=34.9){
        printf("Obesidade Grau 1");
    }else if(imc >= 35 && imc <= 39.9){
        printf("Obesidade Grau 2 (severa)");
    }else{
        printf("Obesidade grau 3 (morbita)");
    }
}
