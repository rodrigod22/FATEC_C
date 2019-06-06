#include <stdio.h>
#include <stdlib.h>
/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.

3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/

int main()
{
    int n;
    int tent;
    int cont = 0;
    int s;
       printf("Digite um numero entre 1 e 99: \n");
       scanf("%d", &n);
    do{
       printf("Adivinhe o numero: \n");
       scanf("%d", &tent);
    if(tent == n){
        s = 1;
    }else if(tent > n){
        s = 2;
    }else if(tent < n){
        s = 3;
    }
    switch(s){
        case 1:{
            printf("Parabens voce acertou o numero");
            break;
        }
        case 2:{
            printf("Errou numero maior que o correto \n");
            break;
        }
        case 3:{
            printf("Errou numero menor que o escolhido\n");
            break;
        }
    }
    cont++;
    }while(n != tent);
    printf("\n O numero de tentativas foi %d ", cont);
}


