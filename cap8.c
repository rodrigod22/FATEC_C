#define ex6
#include "stdio.h"

//RODRIGO DE ARAUJO PEIXOTO ADS - MANHA

#ifdef ex1
/*1 - Escreva um programa que receba via teclado um char, int, long, unsigned,
    float, double, unsigned long e unsigned char, declare ponteiros para os
    mesmos e imprima-os no video utilizando o operador de conteudo * no
    seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char*/
int main()
{
int i, *pi;
char c, *pc;
long l, *pl;
unsigned int u, *pu;
float f, *pf;
double d, *pd;
unsigned long ul, *pul;
unsigned char uc, *puc;
int fim =0;
do{
fflush(stdin);
printf("Digite um char: ");
scanf("%c", &c);
fflush(stdin);
printf("Digite um int: ");
scanf("%d", &i);
fflush(stdin);
printf("Digite um long: ");
scanf("%ld", &l);
fflush(stdin);
printf("Digite um unsigned int: ");
scanf("%u", &u);
fflush(stdin);
printf("Digite um float: ");
scanf("%f", &f);
fflush(stdin);
printf("Digite um double: ");
scanf("%ld", &d);
fflush(stdin);
printf("Digite um unsigned long: ");
scanf("%lu", &ul);
fflush(stdin);
printf("Digite um unsigned char: ");
scanf("%c", &uc);
fflush(stdin);

pi = &i;
pc = &c;
pl = &l;
pu = &u;
pf = &f;
pd = &d;
pul = &ul;
puc = &uc;

printf("        10        20        30        40        50        60\n");
printf("123456789012345678901234567890123456789012345678901234567890\n");

printf("    %-6d", *pi);
printf("              %-11lu", *pl);
printf("         %-5u\n", *pu);
printf("              %-8.1e", *pf);
printf("            %-11ld", *pd);
printf("         %c\n", *pc);
printf("         %-10lu", *pul);
printf("          %u\n", *puc);

printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex1



#ifdef ex2
/*2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep
*/
struct pessoas{
 char nome[50];
 char end[50];
 char cidade[50];
  char estado[3];
 char cep[10];
};
int main(){
struct pessoas pessoa[4];
struct pessoas *ps;
int i=0;
int fim =0;
ps = pessoa;
do{
for(i = 0; i < 4; i++){
    fflush(stdin);
    printf("Digite o %d nome: ", i);
    gets((ps+i)->nome);
    fflush(stdin);
    printf("Digite o %d endereco: ", i);
    gets((ps+i)->end);
    fflush(stdin);
    printf("Digite o %d cidade: ", i);
    gets((ps+i)->cidade);
    fflush(stdin);
    printf("Digite o %d estado: ", i);
    gets((ps+i)->estado);
    fflush(stdin);
    printf("Digite o %d cep: ", i);
    gets((ps+i)->cep);
}
printf("\nListagem da estrutura:\n\n");
for(i = 0; i < 4; i++){
    printf("nome = %s\n", (ps+i)->nome);
    printf("endereco = %s\n", (ps+i)->end);
    printf("cidade = %s\n", (ps+i)->cidade);
    printf("estado = %s\n", (ps+i)->estado);
    printf("cep = %s\n\n", (ps+i)->cep);
}
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex2


#ifdef ex3
/*3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. mostre como resultado se são IGUAIS ou DIFERENTES.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y
    */

int main(){
int i=0, verifica = 0;
char *p, a, *pvet;
char vet [] = "bdfhjlmoqsuwy";
int fim =0;
p = &a;
pvet = vet;

do{
printf("Digite um char: ");
fflush(stdin);
scanf("%c", p);

for(i=0; *(pvet + i) != '\0'; i++){
    if(*p == *(pvet + i)){
        verifica++;
    }
}

if(verifica > 0){
  printf("SAO IGUAIS\n");
}else{
printf("SAO DIFERENTES\n");
}
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex3


#ifdef ex4
/*4 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.
*/

//funcao valida string
int validaString(char *ps1, char *ps2){
int i;
int ver=0;

for(i=0; i<10;i++){
    if(*(ps1+i) == '\0' && *(ps2+i) != '\0'){
        ver ++;
        break;
    }else
    if(*(ps1+i) != '\0' && *(ps2+i) == '\0'){
        ver ++;
        break;
    }else
    if(*(ps1+i) == '\0' && *(ps2+i) == '\0'){
      break;
    }
    if(*(ps1+i) != *(ps2+i)){
        ver++;
        break;
    }
}
return ver;
}

int main(){
int fim =0;
char str1[10],str2[10], *ps1, *ps2;
int valida=0;
int i=0;
ps1 = str1;
ps2 = str2;
do{
printf("Digite 2 strings de ate 10 caracteres\n\n");

printf("Digite a 1 string: ");
fflush(stdin);
gets(str1);

printf("\nDigite a 2 string: ");
fflush(stdin);
gets(str2);

valida = validaString(ps1, ps2);

if(valida > 0){
 printf("AS STRINGS SAO DIFERENTES\n");
}else{
printf("AS STRINGS SAO IGUAIS\n");
}
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}

#endif // ex4




#ifdef ex5
/*
5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado.
*/
int main(){
int fim =0;
int n, *pn, soma=0, i=-1;
float media;
pn = &n;
do{
do{
   printf("Digite um numero: ");
   fflush(stdin);
    scanf("%d", pn);
    if(*pn > 0){
        soma += *pn;
    }
    i++;
}while(*pn > 0);
media = (float)soma / i;
printf("A media foi %.2f\n\n", media);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
#endif // ex5


#ifdef ex6
/*6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o
    numero de dias que decorrem entre as duas datas usando ponteiros.*/

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

int bissexto (int ano);
unsigned long dist_dias (Data inicio, Data fim);

 /* guarda o numero de dias em cada mes para anos normais e bissextos */
int dias_mes[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                       {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main(void) {

	Data dia1, dia2, *pd1, *pd2;
    int fim =0;
	pd1 = &dia1;
	pd2 = &dia2;
do{
	printf("Coloque data incial no formato: dia/mes/ano\n");
	scanf("%d/%d/%d", &(*pd1).dia, &(*pd1).mes, &(*pd1).ano);
	printf("Coloque data final no formato: dia/mes/ano\n");
	scanf("%d/%d/%d", &(*pd2).dia, &(*pd2).mes, &(*pd2).ano);

	printf("A distancia em dias: %lu\n", dist_dias (*pd1, *pd2));


	printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}

// Retorna 1 caso 'ano' seja bissexto, 0 caso contrário

int bissexto (int ano) {
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

 // Retorna a distancia entre inicio e fim em dias.
 // Assume que inicio nao vem depois de fim.

unsigned long dist_dias (Data pd1, Data pd2) {
	unsigned long idias, fdias;	/* guarda qtos dias tem da data */
					/* ate o comeco do ano */
	unsigned long def_anos = 0;	/* guarda diferenca entre anos das */
					/* datas inicio e fim medida em dias */
	register int i;
	int dbissexto;

	idias = pd1.dia;
	dbissexto = bissexto (pd1.ano);
	for (i = pd1.mes - 1; i > 0; --i)
		idias += dias_mes[dbissexto][i];

	fdias = pd2.dia;
	dbissexto = bissexto (pd2.ano);
	for (i = pd2.mes - 1; i > 0; --i)
		fdias += dias_mes[dbissexto][i];

	while (pd1.ano < pd2.ano)
		def_anos += 365 + bissexto(pd1.ano++);

	return def_anos - idias + fdias;
}

#endif // ex6
