#include <stdio.h>
#include <stdlib.h>
/*6 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
int main(){
   long time;
   int horas_seg = 3600;
   int horas;
   int min;
   int seg;

   printf("Digite o tempo em segundos: ");
   scanf("%ld", &time);
   horas = time/horas_seg ;
   min = (time - (horas_seg*horas))/60;
   seg = (time -(horas_seg*horas)-(min*60));
   printf("%.2d:%.2d:%.2d", horas, min, seg);
}
