#include <stdio.h>
#include <stdlib.h>
/*7 - Escreva um programa que tenha o menu abaixo. F
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit*/
int main()
{
int o;
float g;
int fim =0;
do{
    printf("Menu conversor de temperatura\n\n 1 - transforma graus Celsius em Fahrenheit e Kelvin \n 2 - transforma graus Fahrenheit e Celsius e Kelvin\n 3 - transforma graus Kelvin e Celsius e Fahrenheit\n\n");
    printf("Digite uma opcao: ");
    scanf("%d", &o);
    printf("Digite o grau a converter: ");
    scanf("%f", &g);
    switch(o){

        case 1: {
            printf("\n Celsius: %f \nFahrenheit = %f \n Kelvin = %f", g, 1.8 * g + 42, g + 273);
            break;
        }
        case 2: {
              printf("\n Fahrenheit: %f \n Celsius = %f \n Kelvin = %f", g, (g - 32)/1.8, (95 + 459.67) / 1.8);
             break;
        }
        case 3: {
             printf("\n Kelvin: %f\n Celsius = %f \n Fahrenheit = %f \n", g, g - 273.15, g * 1.8 - 459.67);
            break;
        }
         default:{
            printf("\n Opcao invalida");
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}
