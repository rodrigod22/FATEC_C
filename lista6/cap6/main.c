#define ex8
#include <stdio.h>

#ifdef ex1
/* 1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
    */
char verificar(char);
int main()
{
char c;
char result;
int fim=0;

do{
fflush(stdin);
printf("Digite uma letra: ");
scanf("%c", &c);
result = verificar(c);
printf("\nA letra digitada foi %c\n\n", result);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);

}
//funcao para verificar se consta um char no vetor
char verificar(char c){
char vet [13] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
 int i;
 int cont = 0;
 for(i=0; i < 13; i++){
    if(vet[i] == c){
       cont++;
    }
 }
 if(cont > 0){
    printf("A letra %c consta no vetor\n", c);
 }else{
    printf("\nA letra %c nao consta no vetor", c);
 }
return c;
}
#endif // ex1

#ifdef ex2
/*
2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main()
    */

int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
int dividir(int n1, int n2);

int main()
{
 int n1;
 int n2;
 int soma;
 int subtracao;
 int multiplicacao;
 int divisao;
 printf("Digite um numero inteiro: ");
 scanf("%d", &n1);
 printf("Digite um numero inteiro: ");
 scanf("%d", &n2);
soma = somar(n1, n2);
subtracao = subtrair(n1, n2);
multiplicacao = multiplicar(n1, n2);
divisao = dividir(n1, n2);
printf("A soma de %d + %d = %d\n", n1 ,n2, soma);
printf("A subtracao de %d - %d = %d\n", n1 ,n2, subtracao);
printf("A multiplicacao de %d * %d = %d\n", n1 ,n2, multiplicacao);
printf("A divisao de %d / %d = %d\n", n1 ,n2, divisao);
}
int somar(int n1, int n2)
{
    return n1+ n2;
}
int subtrair(int n1, int n2)
{
    return n1 - n2;
}
int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

int dividir(int n1, int n2)
{
    return n1 / n2;
}
#endif // ex2

#ifdef ex3
/*
3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.
*/
int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(int n1, int n2);

int main()
{
 int n1;
 int n2;
 int soma;
 int subtracao;
 int multiplicacao;
float divisao;
 int fim =0;
do{
 printf("Digite um numero inteiro: ");
 scanf("%d", &n1);

 printf("Digite um numero inteiro: ");
 scanf("%d", &n2);

soma = somar(n1, n2);
subtracao = subtrair(n1, n2);
multiplicacao = multiplicar(n1, n2);
divisao = dividir(n1, n2);

printf("A soma de %d + %d = %d\n", n1 ,n2, soma);
printf("A subtracao de %d - %d = %d\n", n1 ,n2, subtracao);
printf("A multiplicacao de %d * %d = %d\n", n1 ,n2, multiplicacao);
printf("A divisao de %d / %d = %.2f\n", n1 ,n2, divisao);
printf("Digite 1 para finalizar ou qualquer techa para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}

//funcao somar
int somar(int n1, int n2)
{
    return n1+ n2;
}
//funcao subtrair
int subtrair(int n1, int n2)
{
    return n1 - n2;
}
//funcao multiplicar
int multiplicar(int n1, int n2)
{
    return n1 * n2;
}
//funcao dividir
float dividir(int n1, int n2)
{
    return (float) n1 / (float) n2;
}
#endif // ex3

#ifdef ex4

4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).
    */
int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(int n1, int n2);

int main()
{
  int n1, n2, result = 0;
    char operacao;


    printf("Digite um numero e enter, depois digite a operacao e enter: ");
        scanf("%d",&n1);
    do {
        operacao = _getche();
        if(operacao == '=') {
            break;
        }
        fflush(stdin);
        printf("\nDigite outro numero: ");
        scanf("%d",&n2);
        fflush(stdin);
        switch(operacao) {
            case '+': result = somar(n1,n2);
                printf("= %d ",somar(n1,n2));
            break;
            case '-': result = subtrair(n1,n2);
                printf("= %d ",subtrair(n1,n2));
            break;
            case '*': result = multiplicar(n1,n2);
                printf("= %d ",multiplicar(n1,n2));
            break;
            case '/': result = (int) dividir(n1,n2);
                printf("= %2.f ", dividir(n1,n2));
            break;
        }
        n1 = result;

    } while(1==1);
    printf("\nResultado: %d\n", result);
}
//funcao somar
int somar(int n1, int n2)
{
    return n1+ n2;
}
//funcao subtrair
int subtrair(int n1, int n2)
{
    return n1 - n2;
}
//funcao multiplicar
int multiplicar(int n1, int n2)
{
    return n1 * n2;
}
//funcao dividir
float dividir(int n1, int n2)
{
    return (float) n1 / (float) n2;
}
#endif // ex4

#ifdef ex5
/*
5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global.
*/
char str1[10];
char str2[10];
int validaString(char str1[10], char str2[10]);
int main()
{
int result=0;
int fim=0;
do{
printf("Digite uma string de ate 10 caracteres: ");
scanf("%s", &str1);
printf("Digite uma string de ate 10 caracteres: ");
scanf("%s", &str2);
result = validaString(str1 , str2);
printf("\n Retorna 0 se forem diferentes\n Retorna 1 se forem iguais\n Retorna 2 se a 1 for maior que a 2\n Retorna 3 se a 2 for maior que a 1\n\n");
printf("O resultado e %d\n\n", result);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
//funcao para verificar se as strings sao iguais e caso diferentes qual a maior
int validaString(char str1[10], char str2[10]){
int i;
int ver=0;
int ver1=0;
int ver2=0;
for(i=0; i<10;i++){
    if(str1[i] == 0 && str2[i] != 0){
       ver ++;
    }else
    if(str1[i] != 0 && str2[i] == 0){
        ver1++;
    }
    if(str1[i] != str2[i]){
        ver2++;
    }
 }
    if(ver > 0){
        return 3;
    }else if(ver1 > 0){
        return 2;
    }else if(ver2 > 0){
        return 0;
    }
    else{
        return 1;
    }
}
#endif // ex5

#ifdef ex6
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
#endif // ex6

#ifdef ex7
/*
7 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma
    função que receba por parametro os 2 valores X e Z, calcule e retorne o
    resultado de X exponencial Z para o programa principal.
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.
*/
int main()
{
int exponencial(int x, int z);
int x=0;
int z;
int exp=0;
printf("Digite um numero: ");
scanf("%d", &x);
printf("\nDigite um numero: ");
scanf("%d", &z);
exp = exponencial(x, z);
printf("O exponencial de %d por %d = %d", x, z, exp);
}
int exponencial(int x, int z){
int exp=1;
    for(z ; z > 0; z--){
            exp *= x;
    }
return exp;
}

#endif // ex7

#ifdef ex8
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
#endif // ex8
