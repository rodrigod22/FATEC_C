#include <stdio.h>
#include <stdlib.h>
/*

8 - Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
      entre eles.
*/
int main()
{
   int multiplicar(int n1, int n2);
   int decomporNumero(int a);
   int verificaPosit(int a);
   int a=0;
   int b=0;
   int verifA=0;
   int verifB=0;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    verifA = verificaPosit(a);
    verifB= verificaPosit(b);

    if(verifA == 1 && verifB == 1){
        printf("%d", somar(decomporNumero(a),decomporNumero(b)));

    }else if(verifA == 0 && verifB == 0){
        printf("%d", multiplicar(decomporNumero(a),decomporNumero(b)));
    }
}

// verifica se o numero e positivo ou negativo
int verificaPosit(int a)
{
    if(a > 0){
        return 1;
    }else if(a == 0){
        return -1;
    }else{
        return 0;
    }
}

// soma os numeros decompostos
int somar(int n1, int n2){
    return n1 + n2;
}

//multiplica os numeros decompostos
int multiplicar(int n1, int n2){
    return n1 * n2;
}

//decompoe um numero ate 999.999.999 retorna a soma dos numeros decompostos
int decomporNumero(int a){

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
if(a > 0){
    return u + d + c + uM + dM + cM + uMM + dMM + cMM + uB;
}else if(a < 0){
    return u * d * c * uM * dM * cM * uMM * dMM * cMM * uB;
}
}
