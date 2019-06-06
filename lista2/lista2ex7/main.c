#include <stdio.h>
#include <stdlib.h>
/*7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    CONSUMO (Km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

int main()
{
float km;
float l;
float consumo;

printf("Digite os KM: ");
scanf("%f", &km);

printf("Digite os litros : ");
scanf("%f", &l);

consumo = km / l;

if(consumo < 8){
    printf("Venda o carro !!");
}else if(consumo >=8 && consumo < 15){
    printf("Economico !!");
}else{
    printf("Super economico!!");
}
}

