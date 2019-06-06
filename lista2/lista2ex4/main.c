#include <stdio.h>
#include <stdlib.h>
/*4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe os dois instantes dados em horas, minutos e
    segundo e determina o intervalo de tempo (em horas, minutos e segundos)
    decorrido entre eles*/
int main()
{
#define HORA_SEG 3600
int hi;
int mi;
int si;
int hf;
int mf;
int sf;
long seg_i;
long seg_f;
long dif;
int horas;
int min;
int seg;
do{
printf("Digite a hora, minuto e segundo do inicio da ligacao\n ");
scanf("%d %d %d" ,&hi, &mi, &si);
if(hi < 0 || mi < 0 || si < 0 || hi >= 24 || mi >= 60 || si >= 60){
    printf("numero invalido formato 24h");
}
}while(hi < 0 || mi < 0 || si < 0 || hi >= 24 || mi >= 60 || si >=60);
do{
printf("Digite a hora, minuto e segundo do termino da ligacao\n ");
scanf("%d %d %d" ,&hf, &mf, &sf);
if(hi < 0 || mf < 0 || sf < 0 || hf >= 24 || mf >= 60 || sf >= 60){
    printf("numero invalido formato 24h");
}
}while(hi < 0 || mi < 0 || si < 0 || hi >= 24 || mi >= 60 || si >=60);

seg_i = (HORA_SEG * hi) + (mi * 60) + si;
seg_f = (HORA_SEG * hf) + (mf * 60) + sf;
dif = seg_f - seg_i;
horas = dif/HORA_SEG ;
min = (dif - (HORA_SEG*horas))/60;
seg = (dif -(HORA_SEG*horas)-(min*60));
printf(" o tempo da ligacao foi %.2d:%.2d:%.2d", horas, min ,seg);
}
