#include <stdio.h>
#include <stdlib.h>
/*6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
    abaixo. Imprima no video o resultado (se verdadeiro = 1 se falso = 0)
    a e b e' recebido via teclado para cada expressao
        a >= 120 && b < 240
        a != 60  || b == 120
       (a*25) == 100 && (b+10) >= 100
       ((a + 300)/5) >= 100 || (b - 200) <= 200*/

int main(){
int a;
int b;
int fim=0;
do{
    printf("Digite o numero a: ");
    scanf("%d", &a);
    printf("Digite o numero b: ");
    scanf("%d", &b);

    printf("Resultados \n a >= 120 && b < 240 = %d \n a != 60  || b == 120 =  %d\n (a*25) == 100 && (b+10) >= 100 = %d\n ((a + 300)/5) >= 100 || (b - 200) <= 200 = %d"
           , a >= 120 && b < 240,  a != 60  || b == 120, (a*25) == 100 && (b+10) >= 100,((a + 300)/5) >= 100 || (b - 200) <= 200);
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

