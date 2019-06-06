#define ex5
#include "stdio.h"
/******************************************************************************

  				OPERADORES

*******************************************************************************

1 - Definicao

Operador e' um simbolo que representa uma certa operacao que pode ser executada
em um certo dado. O valor do dado, que pode ser uma variavel ou uma constante
e' chamado de operando.

2 - Operador atribuicao simples

A atribuicao simples de variaveis, se faz com o operador sinal de "=". A
linguagem C trata o sinal de igual "=" como sendo um operador e nao como sinal
de igual "=" da matematica. Ele atribui um valor ou resultado de uma expressão,
que esta' a sua direita, para a variavel especificada a sua esquerda.

Sua forma geral e':

        variavel = expressao;   ou
        variavel = constante;

Exemplos: */

#ifdef ex1
main()
{
int x,y,z;


x = 2;    /* atribui uma constante "2" a variavel "x" */
printf("o valor de x e': %d\n",x);

y = x + 4;   /* atribui o resultado da expressao "x + 4" a variavel "y" */
printf("o valor de y e': %d\n",y);

z = (x + 4) * (y - 10);
printf("o valor de z e': %d\n",z);

}
#endif

/*
3 - Operadores aritmeticos

Os operadores aritmeticos sao aqueles que operam sobre numeros e/ou expressoes
numericas, resultando valores numericos.

Os operadores aritmeticos sao:

	+  --> adicao
	-  --> subtracao
	*  --> multiplicacao
	/  --> divisao
	%  --> devolve o resto da divisao inteira (modulo)
	-  --> menos unario (transforma um n. positivo em negativo e vice-versa)
	++ --> incrementa
	-- --> decrementa

Os operadores incrementa e decrementa sao equivalentes as seguintes operacoes:

	x = x + 1 ---> ++x  ou x++
	x = x - 1 ---> --x  ou x--

Embora as expressoes ++x e x++ parecam equivalentes,elas agem de forma diferente
quando utilizadas em expressoes com o operador de atribuicao simples "=".

Quando o operador incrementa esta' "antes" da variavel, primeiro se incrementa
a variavel para depois atribuir o resultado.

	x = 10;
	y = ++x;     	incrementa x e atribui a y -> x = 11 e Y = 11

Porem, se o operador incrementa esta' "depois" da variavel, primeiro se atribui
o valor a variavel para depois incrementar o conteudo da variavel atribuida.

	x = 10;
	y = x++;	atribui x a y e incrementa x -> x = 11 e y = 10

Exemplo:*/

#ifdef ex2
main()
{
int a,b,c,x,y;
float i,j,k,l;


x = 10;		/* operador atribuicao simples */
y = ++x;     /* operador incrementa declarado "antes" da variavel "x" */

printf("o valor atribuido a y e' = %d e o de x e': %d\n\n",y,x);

x = 20;
y = x++;    /* operador incrementa declarado "depois" da variavel "x" */

printf("o valor atribuido a y e' = %d e o de x e': %d\n\n\n",y,x);

a = 15;		/* operador atribuicao simples */
b = 9;

c = a++ + ++b;
printf("valor de a = %d valor de b = %d e o valor de c = %d\n\n\n\n",a,b,c);

i=20.123;
j=3.77;

k=i/j;

l=i*j;

printf("valor de i e' = %f e o valor de j e' = %f \n\n",i,j);
printf("a soma de i e j e' = %f , e a subtracao e' = %f\n\n",i+j,i-j);
printf("a divisao entre i e j e' = %f , a multiplicacao e' = %f\n\n",k,l);

}
#endif

/*
4 - Operadores relacionais

Relacional significa o relacionamento que os valores tem entre si. Quando se
compara 2 valores utilizando-se os operadores relacionais, obtem-se os seguintes
resultados:
	0  --> falso
	1  --> verdadeiro

Os operadores relacionais sao:

	<  --> menor que
	<= --> menor ou igual a
     	>  --> maior que
     	>= --> maior ou igual a
	== --> igual
     	!= --> diferente

Exemplo:*/

#ifdef ex3
main()
{
int a,b,c,d;
int k,l;
float i,j;


a=100;     /* valores inteiros */
b=200;

c = a <= 200;  /* atribui o resultado da avaliacao relacional a "c" */
d = b > 100;

printf("o valor de a e' %d e de b e' %d\n\n",a,b);
printf("o resultado da relacao a <= 200 e' %d \n\n",c);
printf("o resultado da relacao b > 100 e' %d \n\n",d);
printf("o resultado da relacao a == 100 e' %d \n\n",a == 100);
printf("o resultado da relacao a != 100 e' %d \n\n\n",a != 100);

i=100.5;   /* valores em ponto flutuante */
j=200.7;

k = i <= 200.114; /* atribui o resultado da avaliacao relacional a "k" */
l = j > 100.554;

printf("o valor de i e' %f e de j e' %f\n\n",i,j);
printf("o resultado da relacao i <= 200.114 e' %d \n\n",k);
printf("o resultado da relacao i <= 100.554 e' %d \n\n",l);
printf("o resultado da relacao i == 200.114 e' %d \n\n",i == 200.114);
printf("o resultado da relacao i != 200.114 e' %d \n\n",i != 200.114);

}
#endif

/*
5 - Operadores logicos

Estes operadores sao muito utilizados para combinar logicamente os resultados
(0 ou 1) obtidos nas relacoes utilizando-se os operadores relacionais. Quando
se combina estes 2 grupos operadores, 1. se avalia a relacao e com este
resultado faz-se a operacao logica.

Os operadores logicos sao:

	&& operacao logica AND 	(retorna 1 se e somente se os dois operandos
				forem verdadeiros)
	|| operacao logica OR 	(retorna 1 se um ou outro ou dois operandos
				forem verdadeiros)
	!  operador logico NOT 	(inverte o valor do operando)

Exemplos:*/

#ifdef ex4
main()
{
int a,b,c,d;
int k,l,m;
float i,j;


a=100;
b=200;

/* combina os operadores relacionais com os logicos. Nestas declaracoes, 1. se
avalia as relacoes, com os resultados (0 falso ou 1 verdade) realiza-se a
operacao logica */
c = a <= 200 && b > 100;
d = a >   50 || b != 100;

printf("o valor de a e' %d e de b e' %d\n\n",a,b);
printf("o resultado da relacao a <= 200 && b > 100  e' %d \n\n",c);
printf("o resultado da relacao a <= 50 && b > 100  e' %d \n\n",a<=50 && b>100);
printf("o resultado da relacao a > 50 || b != 100 e' %d \n\n",d);
printf("o resultado da relacao a != 100 || b > 200 e' %d\n\n",a!=100 || b>200);

i=100.5;   /* valores em ponto flutuante */
j=200.7;

printf("\no valor de i e' %f e de j e' %f\n\n",i,j);
m = i<=200.114 && j>100.554;
printf("o resultado da expressao (i <= 200.114 && j > 100.554) e' %d \n\n",m);
printf("o resultado da expressao (i != 200.114 || j == 100.554) e' %d \n\n",
i != 200.114 || j == 100.554);

}
#endif

/*
6 - Operadores bit-a-bit

Os operadores bit-a-bit sao recursos que a linguagem C tem que a torna proxima
da linguagem de maquina. Estes operadores atuam combinando as operacoes logica
diretamente nos bits de um ou dois byte.

Os operadores bit-a-bit sao:

	&  operador bit a bit AND (retorna 1 se e somente se os dois operandos
				  forem verdadeiros)
	|  operador bit a bit OU  (retorna 1 se um ou outro ou dois operandos
 				  forem verdadeiros)
	^  operador bit a bit OU EXCLUSIVO (retorna 1 se e somente se os
					    operandos forem diferentes entre si)
     	~  operador bit-a-bit NOT (inverte o operando)
	>> deslocamento para direita  (desloca para a direita e preenche a
				       esquerda com zeros. Equivale a / 2)
     	<< deslocamento para esquerda (desloca para a esquerda e preenche a
				       direita com zeros. Equivale a * 2)
Exemplos:*/

#ifdef ex5
main()
{
int a,b;
a = 0x64; /*notacao hexadecimal*/ 	/* 100 = 0110 0100 */
b = 0x32;				/* 50  = 0011 0010 */

printf(" Operadores bit-a-bit\n");
printf(" AND                 a & b --> %3d  0x%x\n",a & b,a & b); /* 0x20 */
printf(" OU                  a | b --> %3d  0x%x\n",a | b,a | b); /* 0x76 */
printf(" OU EXCLUSIVO        a ^ b --> %3d  0x%x\n",a ^ b,a ^ b); /* 0x56 */
printf(" NOT               ~0x2264 -->      0x%x\n",~0x2264);     /* dd9b */
printf(" desloc. a direita  a >> 3 --> %3d  0x%x\n",a>>3,a>>3);   /* 0x0c */
printf(" desloc. a esquerda a << 1 --> %3d  0x%x\n",a<<1,a<<1);   /* 0xc8 */

}
#endif

/*
7 - Atribuicao composta

A atribuicao composta e' muito utilizada para abreviar expressoes na linguaguem
C. E' uma combinacao do operador atribuicao simples "=" com os operadores
aritmeticos e bit a bit.

Sua forma geral e'
	variavel  operador= expressao;

Os operadores de atribuicao compostas sao:

     	+=  operacao adicao e atribuicao
     	-=  operacao subtracao e atribuicao
     	*=  operacao multiplicacao e atribuicao
     	/=  operacao divisao e atribuicao
     	%=  operacao resto(modulo) e atribuicao
     	>>= operacao deslocamento a direita e atribuicao
     	<<= operacao deslocamento a esquerda e atribuicao
     	&=  operacao AND e atribuicao
     	^=  operacao OU EXCLUSIVO e atribuicao
     	|=  operacao OU e atribuicao

Exemplos:*/

#ifdef ex6
main()
{
int a,b,x,y,z;
x = y = z = 10;

printf("x = %d e y = %d\n\n",x,y);
printf("x = x + 10 --> %d \t\t y += 10 --> %d\n\n",x = x + 10,y +=10);
printf("x = x - 10 --> %d \t\t y -= 10 --> %d\n\n",x = x - 10,y -= 10);
printf("x=x + (30/z) --> %d \t\t y+=(30/z) --> %d\n\n",x=x + (30/z),y+=(30/z));
printf("x = x ^ 0x3d --> %d  \t\t y ^= 0x3d --> %d\n\n",x = x ^ 0x3d,y ^= 0x3d);
printf("x = x >> 4 --> %d \t\t y >>= 4 --> %d\n",x = x >> 4,y >>= 4);

}
#endif

/*
8 - Operador ?:

O operador ?: (condicao ternaria) e', como o nome indica, um operador que
necessita de tres operandos, que podem ser resultados de expressoes ou
constantes.

A forma geral e'
	exp. logica ? exp1 : exp2

A "exp. logica" e' avaliada, se for verdadeira(==1) entao a "exp1" e' o
resultado, caso contrario o resultado e' "exp2".

O operador ternario pode ser usado em certas situacoes pode substituir o
comando if-else.

Exemplo:*/

#ifdef ex7
main()
{
int a,b,y;
a = 20;     /* troque este valor para 5 e compile uma 2. vez */
b = 10;

/* utiliza os operadores relacional (>) e logico (&&) */
y = (b > 9) && (a > 10) ? 100 :2*100;  /* avaliando a resposta da expressao o
                                        resultado sera y = 100 se verdade (1) e
                                        y = 200 se falso (0) */
printf("o valor de y = %d",y);

}
#endif

#ifdef ex8
main()
{
int a,b,x,z;

/* usando o comando if-else */
a = 10;
if (a > 0)
        b=-150;
else
        b=150;
printf("com o comando if-else -> %d\n\n",b);

/*usando o operador ternario ? : */
x = 20;
z = x > 0 ? -150 : 150;
printf("com o operador ternario -> %d\n",z);
}
#endif

/*
9 - Operadores de ponteiros

Os operadores de ponteiros sao:
     	*  operador de conteudo (le o conteudo de uma variavel apontado por
				 um ponteiro)
     	&  operador de endereco (atribui o endereco de um tipo de dado a
				 um ponteiro)

10 - Operadores diversos

Os operadores diversos sao:
	(  ) operador parenteses: determina a prioridade das operacoes
     	[  ] operador colchetes: define o tamanho do vetor ou seu indice
     	->   ponteiro_variavel -> nome_membro (obtem-se o conteudo de um
					       membro de uma estrutura)
     	.    nome_variavel . nome_membro (obtem-se o conteudo de um
					  membro de uma estrutura)
       (tipo) modelador ou tipo ou casts -> Um modelador e' aplicado a uma
                                            expressao. Ele forca a mesma a
                                            ser do tipo especificado.
O formato e'
     	(tipo) expressao

Exemplo:*/

#ifdef ex9
main()
{
float i,j,k;
int l;

i = 20.123;
j = 3.77;

k = i / j;
l = (int)i % (int)j;

printf("\n\ndivisao entre i e j = %f e o resto e' = %d",k,l);

}
#endif

/*
O operador "sizeof" retorna a quantidade de bytes que a variavel ocupa na
memoria. Ele atua durante a compilacao e nao na execucao do programa. O
operando pode ser um dado composto (vetor ou estrutura) ou simples (int, char,
etc...).

O formato geral e':
     	sizeof(nome da variavel)  --> calcula o numero de bytes da variavel

Exemplo:*/

#ifdef ex10

main()
{
/* mostra quantos bytes cada tipo de variavel ocupa na memoria  */

int i;
short int si;
long int li;
unsigned int ui;
char c;
float f;
double d;

printf("inteiros ---------------> %d bytes\n",sizeof(i));
printf("inteiros curtos --------> %d bytes\n",sizeof(si));
printf("inteiros longos --------> %d bytes\n",sizeof(li));
printf("inteiros sem sinal -----> %d bytes\n",sizeof(ui));
printf("um caracter ------------> %d bytes\n",sizeof(c));
printf("float ------------------> %d bytes\n",sizeof(f));
printf("double -----------------> %d bytes\n",sizeof(d));

}
#endif

/*
11 - Tabela de prioridades dos operadores

Maior prioridade

1 -  (  ) operador parenteses: determina a prioridade das operacoes
     [  ] operador colchetes: indexacao de vetores
     ->   ponteiro_variavel -> nome_membro
     .    nome_variavel . nome_membro

2 -  !  operador logico NOT
     ~  operador bit-a-bit NOT
     ++ incremento de 1
     -- decremento de 1
     -  menos unario (transforma um n. positivo em negativo e vice-versa)
     (tipo ou casts) expressao --> converte um tipo dado em outro
     *  operador de endereco (le o conteudo apontado por um apontador)
     &  operador de endereco (atribui o endereco de um tipo de dados)
     sizeof(nome da variavel) -->determina o tamanho em bytes da variavel

3 -  *   multiplicacao
     /   divisao
     %   devolve o resto da divisao inteiro (modulo)

4 -  +   adicao
     -   subtracao

5 -  >> deslocamento para direita
     << deslocamento para esquerda


6 -  <  menor que
     <= menor ou igual a
     >  maior que
     >= maior ou igual a

7 -  == igual
     != diferente

8 -  &  operador bit a bit AND

9 -  ^  operador bit a bit OU EXCLUSIVO

10 - |  operador bit a bit OU

11 - && operacao  logica AND

12 - || operacao logica OR

13 - ?: substitui a declaracao if else

14 - =  operacao de atribuicao
     += operacao soma e atribuicao
     -= operacao subtracao e atribuicao
     *= operacao multiplicacao e atribuicao
     /= operacao divisao e atribuicao
     %= operacao resto e atribuicao
     >>= operacao deslocamento a direita e atribuicao
     <<= operacao deslocamento a esquerda e atribuicao
     &= operacao AND e atribuicao
     ^= operacao OU EXCLUSIVO e atribuicao
     |= operacao OU e atribuicao

15 - , usado no for para colocar varias condicoes

Menor prioridade

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.

1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.

2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.

3 - Reescreva o exercicio anterior utilizando numeros float.

4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.

5 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.

6 - Receba 2 numeros inteiros via teclado. Compare utilizando as expressoes
    abaixo. Imprima no video o resultado (se verdadeiro = 1 se falso = 0)
    a e b e' recebido via teclado para cada expressao
        a >= 120 && b < 240
        a != 60  || b == 120
       (a*25) == 100 && (b+10) >= 100
       ((a + 300)/5) >= 100 || (b - 200) <= 200

7 - Escreva um programa que tenha o menu abaixo. F
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit e Celsius e Kelvin
       3 - transforma graus Kelvin e Celsius e Fahrenheit

8 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mês e ano) do seu nascimento e a
    data (dia, mês e ano) atual.Verifique se a data atual e' anterior a data de
    nascimento.

9 - Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano).

10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%;
     MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
     estado destino do produto. O programa deve mostrar o preco final do produto
     acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
     nao for valido, mostrar uma mensagem de erro.
*/

