#include <stdio.h>
#include <stdlib.h>

/*1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/

    char cG = 127;
    int iG = 32767;
    short sG = 32767;
    long lG =  2147483647;
    unsigned char cU = 255;
    unsigned int iU = 65535;
    unsigned short sU = 65535;
    unsigned long lU = 4294967295;

void mostra(){
        char cl = -128;
        int il = -32768;
        short sl = -32768;
        long ll =  -2147483648;

        printf("\n CHAR MIN: %c", cl);
        printf("\n CHAR MAX: %c", cG);
        printf("\n INT MIN: %d", il);
        printf("\n INT MAX: %d", iG);
        printf("\n SHORT MIN: %d", sl);
        printf("\n SHORT MAX: %d", sG);
        printf("\n LONG MIN: %ld", ll);
        printf("\n LONG MAX: %ld", lG);
        printf("\n CHAR UNSIGNED: %u %c", cU, cU);
        printf("\n INT UNSIGNED: %u", iU);
        printf("\n SHORT UNSIGNED: %hu", sU);
        printf("\n LONG UNSIGNED: %lu", lU);
    }

int main(){
    mostra();
}

