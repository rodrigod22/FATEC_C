#include <stdio.h>
#include <stdlib.h>
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
        printf("Digite um numero: ");
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
