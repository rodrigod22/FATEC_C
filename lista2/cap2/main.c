#define ex8
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.*/
int main()
{
    int i=0;
    int n=0;
    int soma = 0 ;
    float media = 0;
do{
    printf("Digite numeros positivos encerra quando digitar um numero negativo: \n");
    scanf("%d", &n);
        if(n%2 == 0){
            soma += n;
             i++;
         }
}while(n%2 == 0);
media =  soma;
media /= i;
printf("\nA media dos numeros digitados e %f", media);
}
#endif//ex1

#ifdef ex2
/*
2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else.*/
int main()
{
    int n;
    int tent;
       printf("Digite um numero entre 1 e 99: \n");
       scanf("%d", &n);
    do{
       printf("Adivinhe o numero: \n");
       scanf("%d", &tent);

    if(tent == n){
        printf("Acertou o numero parabens ");
    }else if(tent > n){
        printf("Errou numero maior que o correto \n");
    }else if(tent < n){
        printf("Errou numero menor que o escolhido\n");
    }
    }while(n != tent);
}
#endif//ex2


#ifdef ex3
/*3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
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
#endif//ex3


#ifdef ex4
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
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior
int main()*/
int main()
{
float n;
float i = 0;

printf("Digite um numero: ");
scanf("%f", &n);
i = n - (int)n;
if(i <= 0.24){
n -=  i;
}else if(i >= 0.25 && i < 0.75){
n += 0.5 -i;
}else if(i >= 0.75){
n += 1 - i;
}
printf("Valor arredondado %f", n);
}

#endif // ex5

#ifdef ex6
/*6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.*/
int main()
{
#define ALCOOL 3.18
#define GASOLINA 3.88
int litro;
float total = 0;
char tipo ;
float teste;
printf("Digite a quantidade de litros a abastecer: \n");
scanf("%d", &litro);
fflush(stdin);
printf("Digite o tipo de combustivel (A-alcool, G-gasolina): ");
scanf("%c", &tipo);
teste = litro * (ALCOOL - (ALCOOL * 0.03));
if(litro <= 20){
    if(tipo == 'A'){
         total = litro * (ALCOOL - (ALCOOL * 0.03));

    }else if(tipo == 'G'){
        total = litro * (GASOLINA - (GASOLINA *0.04));
    }
    printf("Total a pagar R$ %.2f\n", total);

}else if(litro > 20){
    if(tipo == 'A'){
        total = litro * (ALCOOL - (ALCOOL * 0.05));

    }else if(tipo == 'G'){
        total = litro * (GASOLINA - (GASOLINA *0.06));
    }
    printf("total a pagar R$ %.2f\n", total);
}
}
#endif // ex6

#ifdef ex7
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

#endif // ex7

#ifdef ex8
/*8 - Escreva um programa que calcule o IMC de uma pessoa e mostre sua classificacao
    conforme tabela abaixo:
       IMC             Classificacao
     < 18,5            Abaixo do Peso
       18,6 - 24,9     Saudavel
       25,0 - 29,9     Peso em excesso
       30,0 - 34,9     Obesidade Grau I
       35,0 - 39,9     Obesidade Grau II(severa)
     > 40,0            Obesidade Grau III(morbida)*/
int main()
{
    float p;
    float a;
    float imc;
    printf("Digite seu peso: ");
    scanf("%f", &p);
    printf("Digite sua altura: ");
    scanf("%f", &a);

    imc = p / (a * a);

    if(imc <= 18.5){
        printf("Abaixo do peso");
    }else if(imc >= 18.6 && imc < 24.9){
        printf("Saudavel");
    }else if(imc >= 25 && imc < 29){
        printf("Peso em excesso");
    }else if(imc >= 30 && imc <=34.9){
        printf("Obesidade Grau 1");
    }else if(imc >= 35 && imc <= 39.9){
        printf("Obesidade Grau 2 (severa)");
    }else{
        printf("Obesidade grau 3 (morbita)");
    }
}
#endif // ex8







