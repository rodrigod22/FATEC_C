#include <stdio.h>
#include <stdlib.h>
/*
6 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!.
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.*/

int main()
{
    int decomporNumero(int a);
    int fatorial(int n);
    int n;
    int fator = 0;
    int fim = 0;
do{
    printf("Digite um numero: ");
    scanf("%d", &n);
    fator = fatorial(n);
    printf("o fatorial de %d = %d a soma dos numero decompostos do resultado do fatorial e %d\n\n", n, fator, decomporNumero(fator));
    printf("Digite 1 para finalizar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
//calcular o fatorial
int fatorial(int n)
{
    int fat;
        for(fat = 1; n > 1; n--){
            fat = fat * n;
        }
    return fat;
}

// decompoe um numero ate 999.999.999 e retorna a soma dos algarismos descompostos
int decomporNumero(int a)
{
    int dig =0;
    int digC =0;
    int mod =-1;
    int u = 0;
    int d = 0;
    int c = 0;
    int uM = 0;
    int dM = 0;
    int cM = 0;
    int uMM = 0;
    int dMM = 0;
    int cMM = 0;
    int uB = 0;

    mod = a%10;
    dig = a/10;

    if(mod == 0){
        u = 0;
    }
    if(mod != 0){
        u = mod;
    }
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        d = mod;
        if(digC == 0){
            dig = 0;
        }
    }
    if (digC != 0){
        mod = digC%10;
        dig = digC /10;
        c = mod;
        if(dig == 0){
            digC = 0;
        }
    }
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        uM = mod;
        if(digC == 0){
            dig = 0;
        }
    }
    if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        dM = mod;
        if(dig == 0){
            digC = 0;
         }
    }
     if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        cM = mod;
        if(digC == 0){
            dig = 0;
        }
    }

     if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        uMM = mod;
        if(dig == 0){
            digC = 0;
         }
    }
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        dMM = mod;
        if(digC == 0){
            dig = 0;
        }
     }
      if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        cMM = mod;

        if(dig == 0){
            digC = 0;
         }
     }
      if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        uB = mod;
        if(digC == 0){
            dig = 0;
        }
    }
    return u + d + c + uM + dM + cM + uMM + dMM + cMM + uB;
}
