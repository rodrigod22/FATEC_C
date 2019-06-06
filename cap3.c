#define ex10
#include <stdio.h>

#ifdef ex1
/*1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.*/

int main()
{
int n1;
int n2;
int fim =0;
do{
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite otro numero inteiro: ");
    scanf("%d", &n2);
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
     printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim!= 1);
}

#endif // ex1

#ifdef ex2
/*2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.*/

int main()
{
    int n1=0;
    int n2=0;
    int fim =0;
do{
    printf("Digite um numero inteiro ");
    scanf("%d", &n1);
    printf("Digite otro numero inteiro ");
    scanf("%d", &n2);
    printf("%d += %d = %d\n", n1, n2, n1 += n2);
    printf("%d -= %d = %d\n", n1, n2, n1 -= n2);
    printf("%d *= %d = %d\n", n1, n2, n1 *= n2);
    printf("%d /= %d = %d\n", n1, n2, n1 /= n2);
    printf("%d %%= %d = %d\n", n1, n2, n1 %= n2);
    printf("%d >>= %d = %d\n", n1, n2, n1 >>= n2);
    printf("%d <<= %d = %d\n", n1, n2, n1 <<= n2);
    printf("%d &= %d = %d\n", n1, n2, n1 &= n2);
    printf("%d ^= %d = %d\n", n1, n2, n1 ^= n2);
    printf("%d != %d = %d\n", n1, n2, n1 != n2);
 printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
 scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex2

#ifdef ex3
/*3 - Reescreva o exercicio anterior utilizando numeros float. */
int main()
{
    float n1;
    float n2;
    int fim =0;
do{
    printf("Digite um numero float");
    scanf("%f", &n1);

    printf("Digite otro numero float");
    scanf("%f", &n2);

    printf("%f += %f = %f\n", n1, n2, n1 += n2);
    printf("%f -= %f = %f\n", n1, n2, n1 -= n2);
    printf("%f *= %f = %f\n", n1, n2, n1 *= n2);
    printf("%f /= %f = %f\n", n1, n2, n1 /= n2);
//    printf("%f %%= %f = %f\n", n1, n2, n1 %= n2);
//    printf("%f >>= %f = %f\n", n1, n2, n1 >>= n2);
//    printf("%f <<= %f = %f\n", n1, n2, n1 <<= n2);
//    printf("%f &= %f = %f\n", n1, n2, n1 &= n2);
//    printf("%f ^= %f = %f\n", n1, n2, n1 ^= n2);
//    printf("%f != %f = %f\n", n1, n2, n1 != n2);
 printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 0);
}

#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
int main()
{
  int a;
  int b;
  int fim=0;
do{
     printf("Digite um numero: ");
     scanf("%d" , &a);
     printf("Digite outro numero: ");
     scanf("%d", &b);

    printf(" Operadores bit-a-bit\n");
    printf(" AND                 a & b -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a & b,a & b); /* 0x20 */
    printf(" OU                  a | b -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a | b,a | b); /* 0x76 */
    printf(" OU EXCLUSIVO        a ^ b -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a ^ b,a ^ b); /* 0x56 */
    printf(" desloc. a direita  a >> 3 -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a>>2,a>>2);   /* 0x0c */
    printf(" desloc. a esquerda a << 1 -->DECIMAL: %3d  HEXADECIMAL: 0x%x\n",a<<4,a<<4);   /* 0xc8 */
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex4

#ifdef ex5
/* 5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.*/
int main()
{
int a;
int fim =0;
do{
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("O numero recebido foi %3d a divisao por 8 = %3d e multiplicacao por 8 = %3d",a, a >> 3 , a << 3 );
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex5

#ifdef ex6
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

#endif // ex6

#ifdef ex7
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

#endif // ex7


#ifdef ex8
/*8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.*/
int main()
{
 int ano;
 int anoAtual;
 int calculaDias();
 int calculaAno();
 int calculaMes();
 int bisexto();
 int totalAno=0;
 int totalMes=0;
 int totalDia =0;
 int dia;
 int diaAtual;
 int mes;
 int mesAtual;
 int bisext;
 int fim =0;
do{
     printf("Digite o dia de nascimento: ");
     scanf("%d", &dia );
     printf("Digite o mes de nascimento: ");
     scanf("%d", &mes );
     printf("Digite o ano de nascimento: ");
     scanf("%d", &ano );
     printf("Digite o dia atual: ");
     scanf("%d", &diaAtual );
     printf("Digite o mes atual: ");
     scanf("%d", &mesAtual );
     printf("Digite o ano atual: ");
     scanf("%d", &anoAtual );

    totalAno = calculaAno( dia,ano, anoAtual, diaAtual, mes, mesAtual);
    if(mesAtual < mes){
        totalAno -= 1;
    }
    totalMes = calculaMes( dia,ano, anoAtual, diaAtual, mes, mesAtual);
    if(diaAtual < dia){
        totalMes -= 1;
    }
    totalDia = calculaDias(dia, diaAtual);

    bisext = bisexto(dia, ano, anoAtual,diaAtual, mes, mesAtual);
    printf("Total de anos %d ", totalAno);
    if(totalMes == 12){
        totalMes=0;
    }
    printf("Total de meses %d ", totalMes);
    printf("Total de dias %d ", totalDia);
    printf("Total de bisexto %d ", bisext);
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}


int calculaDias(int dia, int diaAtual){
int difDia;
if(diaAtual < dia){
    difDia =  diaAtual - dia + 30;
}else{
    difDia =  diaAtual - dia;
}
return difDia;
}

int calculaAno(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
int difAno;
int diasAno;
int difMes;
if(mesAtual > mes){
    difMes = mesAtual - mes;
}else if(mesAtual == mes){
    difMes =  0;
}else{
    difMes = mesAtual - mes + 12;
}
difAno = ((anoAtual - ano));
return difAno;
}

int calculaMes(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual, int totalAno){
int difMes = 0;
int dias;
int diasAno;

if(mesAtual > mes){
    difMes = mesAtual - mes;
}else{
    difMes = mesAtual - mes + 12;
}
return difMes;
}

int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
    int dif;
	int contAno = 0;
	int i =0;
	int dias = 0;
    dif = anoAtual - ano;
    printf("%d", dif);
    int cont = 1;
    while(dif > i){
        if (ano % 400 == 0) {
            contAno++;
        }
        else if ((ano % 4 == 0) && (ano % 100 != 0)) {
            contAno++;
        }
    i++;
    ano++;
}
 return contAno;
}
#endif // ex8

#ifdef ex9
/*
9 - Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano).
*/
int main()
{

int calculaAno(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual);
int calculaMes(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual);
int calculaDias(int dia, int diaAtual);
int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual);
int dia = 21;
int mes = 11;
int ano = 1982;
//domingo
 int totalAno=0;
  int totalMes=0;
  int totalDia =0;
int diaAtual;
int mesAtual ;
int anoAtual ;
int totalGeral;
int semanas;
int anoBisexto;
char mostraDia(int dia);


printf("Digite o dia mes e ano ");
scanf("%d %d %d", &diaAtual ,&mesAtual, &anoAtual);


totalAno = calculaAno( dia,ano, anoAtual, diaAtual, mes, mesAtual);
if(mesAtual < mes){
    totalAno -= 1;
}
totalMes = calculaMes( dia, ano, anoAtual, diaAtual, mes, mesAtual);
if(diaAtual < dia){
    totalMes -= 1;
}
totalDia = calculaDias(dia, diaAtual);

anoBisexto = bisexto( dia,ano, anoAtual, diaAtual, mes, mesAtual);
totalGeral = (totalAno * 365) + (totalMes * 30) + totalDia + anoBisexto;
semanas = (totalGeral%7);
printf("total dias geral: %d\n", totalGeral);
printf("total anos: %d\n", totalAno);
printf("total mes: %d\n", totalMes);
printf("total dias: %d\n", totalDia);
printf("resto: %d\n", semanas);
switch(semanas){
    case 0:{
         char dia_semana[8] = "DOMINGO";
        printf("%s",dia_semana);
        break;
    }
    case 1:{
        char dia_semana[8] = "SEGUNDA";
        printf("%s",dia_semana);
        break;
    }
    case 2:{
        char dia_semana[8] = "TERCA";
        printf("%s",dia_semana);
        break;
    }
    case 3:{
        char dia_semana[8] = "QUARTA";
        printf("%s",dia_semana);
        break;
    }
    case 4:{
        char dia_semana[8] = "QUINTA";
        printf("%s",dia_semana);
        break;
    }
    case 5:{
        char dia_semana[8] = "SEXTA";
        printf("%s",dia_semana);
        break;
    }
    case 6:{
        char dia_semana[8] = "SABADO";
        printf("%s",dia_semana);
        break;
    }
}
}
// calcula dias
int calculaDias(int dia, int diaAtual){
int difDia;

if(diaAtual < dia){
    difDia =  diaAtual - dia + 30;
}else{
    difDia =  diaAtual - dia;
}
return difDia;
}
//calcula ano
int calculaAno(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
int difAno;
int diasAno;
int difMes;

if(mesAtual > mes){
    difMes = mesAtual - mes;
}else if(mesAtual == mes){
    difMes =  0;
}else{
    difMes = mesAtual - mes + 12;
}
difAno = ((anoAtual - ano));
return difAno;
}
//calcula mes
int calculaMes(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){

int difMes = 0;
int dias;
int diasAno;

if(mesAtual > mes){
    difMes = mesAtual - mes;
}else if(mesAtual < mes){
    difMes = mesAtual - mes + 12;
}else{
    difMes = 0;
}
return difMes;
}

int bisexto(int dia,int ano, int anoAtual,int diaAtual, int mes, int mesAtual){
    int dif;
	int contAno = 0;
	int i =0;

	int dias = 0;
    dif = anoAtual - ano;

    int cont = 1;

    while(dif > i){

        if (ano % 400 == 0) {
            contAno++;
        }
        else if ((ano % 4 == 0) && (ano % 100 != 0)) {
            contAno++;
             }
  i++;
 ano++;
}
 return contAno;
}
#endif // ex9


#ifdef ex10
/*10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%;
     MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
     estado destino do produto. O programa deve mostrar o preco final do produto
     acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
     nao for valido, mostrar uma mensagem de erro.
*/

int main(){
int validaEstado();
float calculaImposto(float taxa, float valor);

    float v;
    char e [2];
    int result;
    float imposto=0;
   int fim =0;
    float i=0;
do{
    printf("Digite o valor do produto: ");
    scanf("%f", &v);
    printf("Digite o estado (MG / SP / RJ / MS): ");
    scanf("%s", &e);

    result = validaEstado(e);

    if(result == 1){
        imposto = calculaImposto(12, v) + v;
        printf("O valor do produto com o imposto foi %f", imposto);
    }else if(result == 2){
        imposto = calculaImposto(15, v) + v;
        printf("O valor do produto com o imposto foi %f", imposto);
    }else if(result == 3){
         imposto = calculaImposto(7, v) + v;
        printf("O valor do produto com o imposto foi %f", imposto);
    }else if(result == 4){
        imposto = calculaImposto(8, v) + v;
        printf("O valor do produto com o imposto foi %f", imposto);
    }
    else{
        printf("Estado digitado invalido digitar conforme formato apresentado\n");
        return main();
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

float calculaImposto(float taxa, float valor){
    float result;
    result = (taxa/100) * valor;
    return result;
}

int validaEstado(char a [2] ){
    char sp [2] = "SP";
    char rj [2] = "RJ";
    char mg [2] = "MG";
    char ms [2] = "MS";

    int i;
    int r = 0;
    int m = 0;
    int s = 0;
    int mm = 0;
    int valor = 0;

    for(i=0; i < 2; i++){
        if(a[i] == 0 && sp[i] != 0){
            s ++;
        }else if(a[i] != sp[i]){
            s ++;
        }else{
            valor = 1;
        }

        if(a[i] == 0 && rj[i] != 0){
            r ++;
        }else if(a[i] != rj[i]){
            r++;
        }else{
            valor = 2;
        }

        if(a[i] == 0 && mg[i] != 0){
            m ++;
        }else if(a[i] != mg[i]){
            m ++;
        }else{
            valor = 3;
        }

        if(a[i] == 0 && ms[i] != 0){
            mm ++;
        }else if(a[i] != ms[i]){
            mm ++;
        }else{
            valor = 4;
        }
    }
        if(r > 0 && s > 0 && m > 0 && mm > 0){
           return 0;
        }else{
            return valor;
        }
}
#endif // ex10
