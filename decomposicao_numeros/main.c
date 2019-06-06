#include <stdio.h>
#include <stdlib.h>

//algoritimo para decompor um numero

int main()
{
int n=0;
int a =0;
int dig =0;
int digC =0;
int mod =-1;
int u =0;
int d = 0;
int c;
int uM;
int dM;
int cM;
int uMM;
int dMM;
int cMM;
int uB;

do{
printf("Digite um numero");
scanf("%d", &a);
mod = a%10;
dig = a/10;

if(mod == 0){
    u = 0;
    printf("unidade %d \n", u);
}
if(mod != 0){
    u = mod;
    printf("unidade %d \n", u);
}
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        d = mod;
        if(digC == 0){
            dig = 0;
        }
        printf("dezena %d\n", d);
    }
    if (digC != 0){
        mod = digC%10;
        dig = digC /10;
        c = mod;
         printf("cent %d\n", c);
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
         printf("Unidade milhar %d\n", uM);
    }

    if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        dM = mod;

        if(dig == 0){
            digC = 0;
         }
         printf("Dezena milhar %d\n", dM);
    }
     if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        cM = mod;
        if(digC == 0){
            dig = 0;
        }
        printf("Centena milhar %d\n", cM);
    }

     if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        uMM = mod;

        if(dig == 0){
            digC = 0;
         }
         printf("unidade milhao %d\n", uMM);
    }
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        dMM = mod;
        if(digC == 0){
            dig = 0;
        }
        printf("Dezena milhao %d\n", dMM);
    }

      if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        cMM = mod;

        if(dig == 0){
            digC = 0;
         }
         printf("centena milhao %d\n", cMM);
    }
      if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        uB = mod;
        if(digC == 0){
            dig = 0;
        }
        printf("unidade bilhao %d\n", uB);
    }

    printf("Digite 1 para finalizar");
    scanf("%d", &n);
}while(n != 1);

}













