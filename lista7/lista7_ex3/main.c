#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
/*
3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/
struct coord{
 int x;
 int y;
};
int main()
{
    int i =0;

    struct coord coordenada[2];
    int distancia=0;
    for(i=0; i < 2; i++){
            if(i == 0){
                 printf("Digite a coordenada X do ponta A: ");
                 scanf("%d", &coordenada[i].x);
                 printf("Digite a coordenada Y do ponta A: ");
                 scanf("%d", &coordenada[i].y);
            }else{
                printf("Digite a coordenada X do ponta B: ");
                scanf("%d", &coordenada[i].x);
                printf("Digite a coordenada Y do ponta B: ");
                scanf("%d", &coordenada[i].y);
            }
    }
distancia = sqrt(pow((coordenada[1].x - coordenada[0].x),2)) + pow((coordenada[1].y - coordenada[0].y),2);
printf("A distancia entre os pontos e %d", distancia);
}
