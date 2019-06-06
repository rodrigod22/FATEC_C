#define ex8
#include <stdio.h>
#ifdef ex1
/* 1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
                */
int main()
{
  int nInt [3];
  long nLong [3];
  unsigned nUnsig [3];
  float nFloat [3];
  double nDouble [3];
  int i =0;
  int verif;
do{
  do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &nInt[i]);
        printf("Digite um numero long: ");
        scanf("%ld", &nLong[i]);
        printf("Digite um numero unsigned: ");
        scanf("%u", &nUnsig[i]);
        printf("Digite um numero Float: ");
        scanf("%f", &nFloat[i]);
        printf("Digite um numero Double: ");
        scanf("%lf", &nDouble[i]);
    i++;
  }while(i < 3);
printf("\n\n        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
  for(i=0; i < 3; i++){
    printf("  %-6d", nInt[i]);
    printf("              %-10ld", nLong[i]);
    printf("          %-6u\n", nUnsig[i]);
    printf("            %-11le", nFloat[i]);
    printf("       %-11le\n\n", nDouble[i]);
  }
  printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
  scanf("%d", &verif);
}while(verif != 1);
}

#endif // ex1

#ifdef ex2
/*2 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 4, 5, 2, 2, 5, 4, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10) */
int main()
{

 int vet[10];
 int i = 0;
 int fim;
do{
  int verif =0;
printf("Digite um vetor de 10 numeros\n");
do{

 printf("digite o %d numero", i+1);
 scanf("%d", &vet[i]);
 i++;
}while(i < 10);

for(i=0; i < 5; i++){
    if(i == 0){
        if(vet[i] != vet[i+9]){
            verif ++;
        }
    }else
    if(i == 1){
        if(vet[i] != vet[i+7]){
            verif ++;
        }
    }else
    if(i == 2){
        if(vet[i] != vet[i+5]){
            verif ++;
        }
    }else
    if(i == 3){
        if(vet[i] != vet[i+3]){
            verif ++;
        }
    }else
    if(i == 4){
        if(vet[i] != vet[i+1]){
            verif ++;
        }
    }
}
if(verif == 0){
    printf("\nO vetor e palindromo\n\n");
}else{
    printf("\nO vetor nao e palindromo\n\n");
}

 printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
 scanf("%d", &fim);
 i=0;
}while(fim != 1);
}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.
*/
int main()
{
int vet [2][3][3] = {0};
int p =0;
int l =0;
int c =0;
int fim =0;
    do{
        printf("Digite uma matriz 2 x 3 x 3\n\n");
        for(p=0; p < 2; p++){
            for(l=0; l < 3; l++){
                for(c=0; c<3; c++){
                    printf("Digite um numero: ");
                    scanf("%d", &vet[p][l][c]);
                }
            }
        }
        for(p=0; p < 2; p++){
            for(l=0; l < 3; l++){
                for(c=0; c<3; c++){
                    printf("Valor vetor pagina %d linha %d coluna %d = %d \n", p, l,c, vet[p][l][c] );
                }
            }
        }
        printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
        scanf("%d", &fim);

    }while(fim != 1);
}
#endif // ex3

#ifdef ex4
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/
int main()
{

int vet1[2][3];
int vet2[2][3];
int vet3[2][3];
int l;
int c;
int fim=0;
do{
    printf("Digite 2 matrizes 2 x 3\n\n");

    for(l=0; l < 2; l++){
        for(c=0; c < 3; c++ ){
            printf("Digite o indice %d da linha %d do vetor 1: ",c , l);
            scanf("%d", &vet1[l][c]);

            printf("Digite o indice %d da linha %d do vetor 2: ",c , l);
            scanf("%d", &vet2[l][c]);

            vet3[l][c] = vet1[l][c] * vet2[l][c];
        }
    }

    for(l=0; l < 2; l++){
        for(c = 0; c < 3; c++ ){
            printf(" \n vetor 1 -  indice %d / linha %d = %d \n vetor 2 - indice %d / linha %d = %d\n resultado %d x %d = %d\n",
                    c , l, vet1[l][c], c, l, vet2[l][c], vet1[l][c], vet2[l][c], vet3[l][c] );
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex4

#ifdef ex5
/*
5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
    um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.
*/
int main()
{
int n=0;
int i;
int fim=0;

do{
    int contPar=0;
    int contImpar=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
        int vet1[n];
        int vetPar[n];
        int vetImpar[n];

    for(i=0; i < n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vet1[i]);
        if(i%2 == 0){
            vetPar[contPar] = vet1[i];
            contPar++;
        }else{
            vetImpar[contImpar] = vet1[i];
            contImpar ++;
        }
    }
    printf("Vetor par = { ");
    for(i=0; i < contPar; i++){
        printf(" '%d' ", vetPar[i]);
    }
    printf(" }\n");

    printf("Vetor impar = { ");
    for(i=0; i < contImpar; i++){
        printf(" '%d' ", vetImpar[i]);
    }
    printf(" }");
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex5

#ifdef ex6
/*
6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.
*/
int main()
{
int n=0;
int i;
int fim=0;

do{
    int contPar=0;
    int contImpar=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
        int vet1[n];
        int vetPar[n];
        int vetImpar[n];

    for(i=0; i < n; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vet1[i]);
        if(vet1[i]%2 == 0){
            vetPar[contPar] = vet1[i];
            contPar++;
        }else{
            vetImpar[contImpar] = vet1[i];
            contImpar ++;
        }
    }
    printf("Vetor par = { ");
    for(i=0; i < contPar; i++){
        printf(" '%d' ", vetPar[i]);
    }
    printf(" }\n");

    printf("Vetor impar = { ");
    for(i=0; i < contImpar; i++){
        printf(" '%d' ", vetImpar[i]);
    }
    printf(" }");
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex6

#ifdef ex7
/*
7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.
*/
int main()
{

int vet[10];
int n;
int i=0;
int j=0;
int aux=0;
int fim =0;
do{
    for(i=0; i < 10; i++)
        {
        printf("Dig#define ex8
#include <stdio.h>
#ifdef ex1ite um numero: ");
        scanf("%d", &n);
        vet[i] =  n;
        }
        for (i=0;i<10; i++)
        {
            for(j=i+1;j<10;j++)
            {
                if (vet[i]>vet[j])
                {
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
            }
        }
        printf("Vetor ordenado: \n");
 for (i=0;i<10; i++){
       printf("indice %d = %d\n", i, vet[i]);
      }
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex7

#ifdef ex8
/*
8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
    uma mensagem de ”nao encontrado”.
*/
int main()
{
int vet[5][5];
int l;
int c;
int x;
int contX =0;
int fim =0;
do{
    printf("Digite uma matriz 5 x 5\n\n");
    for(l=0; l <5; l++){
        for(c=0; c<5; c++){
            printf("Digite o numero da linha %d , coluna %d : ", l,c);
            scanf("%d", &vet[l][c]);
        }
    }
    printf("\n\nDigite o numero para procurar na matriz: ");
    scanf("%d", &x);
    for(l=0; l <5; l++){
        for(c=0; c<5; c++){
            if(x == vet[l][c]){
                printf("\nNumero encontrado na linha %d , coluna %d\n", l, c);
                contX++;
            }
        }
    }
    if(contX == 0){
        printf("Numero nao encontrado !!! \n");
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex8
