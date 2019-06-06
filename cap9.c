#define ex5
#include "stdio.h"

//RODRIGO DE ARAUJO PEIXOTO ADS - MANHA

#ifdef ex1
/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o
    conteudo de cada um dos membros numa função e imprima-os no video no
    seguinte fomato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
  */
 struct variaveis{
    char c;
    int i;
    long l;
    float f;
    double d;
    unsigned char uc;
    unsigned int ui;
    unsigned long ul;
  };

void recebeStruct(struct variaveis *pvar);
void imprimeStruct(struct variaveis *pvar);
 int main(){
    int fim=0;
  struct variaveis var;
  struct variaveis *pvar;
  pvar = &var;
  do{
    recebeStruct(pvar);
    imprimeStruct(pvar);

  printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
  scanf("%d", &fim);
}while(fim != 1);

}

//funcao para receber a struct
void recebeStruct(struct variaveis *pvar){
printf("Digite um char: ");
fflush(stdin);
scanf("%c", &pvar->c);
fflush(stdin);
printf("Digite um int: ");
scanf("%d", &pvar->i);
fflush(stdin);
printf("Digite um long: ");
scanf("%ld", &pvar->l);
fflush(stdin);
printf("Digite um float: ");
scanf("%f", &pvar->f);
fflush(stdin);
printf("Digite um double: ");
scanf("%ld", &pvar->d);
fflush(stdin);
printf("Digite um unsigned char: ");
scanf("%c", &pvar->uc);
fflush(stdin);
printf("Digite um unsigned");
scanf("%u", &pvar->ui);
fflush(stdin);
printf("Digite um unsigned long: ");
scanf("%lu", &pvar->ul);
fflush(stdin);
}

//funcao para imprimir a struct
void imprimeStruct(struct variaveis *pvar){
printf("        10        20        30        40        50        60        70\n");
printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
printf("    %c", pvar->c);
printf("         %-6d", pvar->i);
printf("    %-11ld", pvar->l);
printf("         %-8.1e", pvar->f);
printf("            %-9.1e\n", pvar->d);
printf("          %u", pvar->uc);
printf("                  %u", pvar->ui);
printf("                   %lu\n\n", pvar->ul);
}
#endif // ex1


#ifdef ex2
/*
2 - Escreva um programa que receba n valores via teclado, receba também a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funções que recebe os valores usando ponteiros
    */

int somar(int *pn1, int *pn2);
int subtrair(int *pn1, int *pn2);
int multiplicar(int *pn1, int *pn2);
float dividir(int *pn1, int *pn2);

int main()

{
    int fim=0;
   do{
int entradaDados(char *pc, int *pn1, int *pn2);
  int n1, n2, *pn1, *pn2, result = 0;
    char operacao, *pc;

        pn1 = &n1;
        pc = &operacao;
        pn2 = &n2;

    result = entradaDados(pc, pn1, pn2);
    printf("\nResultado: %d\n", result);
  printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
  scanf("%d", &fim);
    }while(fim != 1);
}

//funcao entrada
int entradaDados(char *pc, int *pn1, int *pn2){
      int result = 0;
          printf("Digite um numero e enter, depois digite a operacao e enter: ");
        scanf("%d", pn1);
        fflush(stdin);
    do {
            gets(pc);
            if(*pc == '=') {
                break;
            }
            printf("\nDigite outro numero: ");
            scanf("%d", pn2);
            fflush(stdin);
        switch(*pc) {
            case '+':  result = somar(pn1, pn2);
            break;
            case '-':   result = subtrair(pn1,pn2);
            break;
            case '*':   result = multiplicar(pn1,pn2);
            break;
            case '/':  result = (int) dividir(pn1,pn2);
            break;
        }
            *pn1 = result;

    }while(*pc != '=');
return result;
}

//funcao somar
int somar(int *pn1, int *pn2){
    return *pn1 + *pn2;
}
//funcao subtrair
int subtrair(int *pn1, int *pn2)
{
    return *pn1 - *pn2;
}
//funcao multiplicar
int multiplicar(int *pn1, int *pn2)
{
    return *pn1 * *pn2;
}
//funcao dividir
float dividir(int *pn1, int *pn2)
{
    return (float) *pn1 / (float) *pn2;
}
#endif // ex2


#ifdef ex3
/*3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/
void verifica(char *pvet, char *pc);

int main(){
int fim=0;
int i=0;
int ver = 0;
char vet [] = "bdfhjkmoqsuwy";
char c, *pvet, *pc;
do{
printf("Digite uma letra: ");
fflush(stdin);
scanf("%c", &c);

pc = &c;
pvet = vet;
verifica(pvet, pc);
  printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
  scanf("%d", &fim);
}while(fim != 1);
}

//funcao para verificar se existe o char digitado no vetor
void verifica(char *pvet, char *pc){
    int i = 0;
    int ver = 0;
    for(i=0; pvet[i] != '\0'; i++){
           if(pvet[i] == *pc){
             ver ++;
           }
    }
    if(ver > 0){
        printf("A letra digitada consta no vetor\n");
    }else{
        printf("A letra digitada nao consta no vetor\n");
    }
}
#endif // ex3

#ifdef ex4
/*
4 - Escreva um programa que receba em 2 funcao 2 strings de ate' 10 caracteres.
    Os vetores sao declaradas como variavel local na função main().
    Escreva uma funcao que recebe as strings com parametros usando ponteiros
    e compare estas 2 strings.
    Retorne como resultado da comparacao 0 se forem DIFERENTES, 1 se forem
    IGUAIS, 2 se a string 1 for maior que a string 2, 3 se a string 2 for maior
    que a string 1 e 4 se as string tem tamanhos iguais mas são diferentes.
*/

int validaString(char *ps1, char *ps2);
char recebeStr1(char *p1);
char recebeStr2(char *p2);

int main()
{

char str1[10], *p1;
char str2[10], *p2;
int result=0;
int fim=0;
do{
p1 = str1;
p2 = str2;

recebeStr1(p1);

recebeStr2(p2);

result = validaString(p1 , p2);

printf("\n Retorna 0 se forem diferentes\n Retorna 1 se forem iguais\n Retorna 2 se a 1 for maior que a 2\n Retorna 3 se a 2 for maior que a 1\n\n");
printf("O resultado e %d\n\n", result);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}

//funcao para receber a primeira string
char recebeStr1(char *p1){
    printf("Digite uma string: ");
    fflush(stdin);
    gets(p1);

}

//funcao para receber a segunda string
char recebeStr2(char *p2){
 printf("Digite uma string: ");
  fflush(stdin);
 gets(p2);

}

//funcao valida string
int validaString(char *ps1, char *ps2){
int i;
int ver=0;
int ver1=0;
int ver2=0;
int ver3=0;
int ver4=0;

for(i = 0; ps1[i] != '\0'; i++){
    if(ps1[i] != ps2[i]){
        ver++;
       break;
    }
}
if(ps1[i] == '\0' && ps2[i] == '\0'){
       return 1;
}else if(ps1[i] == '\0' && ps2[i] != '\0'){
        return 3;
    }else if(ps1[i] != '\0' && ps2[i] == '\0'){
        return 2;
    }
}
#endif // ex4

#ifdef ex5
/*
5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos.Receba os 4 registros sequencialmente pelo teclado numa
    função e imprima todos os registros no video em outra função. Faça um menu.
    Coloque no menu a opção de sair também. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep
*/
struct pessoas{
 char nome[50];
 char end[50];
 char cidade[50];
 char estado[3];
 char cep[10];
};
void recebeStruct(struct pessoas *ps);
void imprimeStruct(struct pessoas *ps);

int main(){
struct pessoas pessoa[4];
struct pessoas *ps;
int i=0, fim = 0;
ps = pessoa;

do{
    recebeStruct(ps);
    imprimeStruct(ps);

    printf("MENU: \n");
    printf("1 - SAIR\n2 - CONTINUAR\n");

    scanf("%d", &fim);
    if(fim == 2){
        return main();
    }else if(fim != 1){
       while(fim != 1 || fim != 2){
            printf("Comando invalido !\n");
            printf("1 - SAIR\n2 - CONTINUAR\n");
            getchar();
            scanf("%d", &fim);
            if(fim == 1 || fim == 2){
                break;
            }
       }
    }
}while(fim != 1);
}
//funcao recebe struct
void recebeStruct(struct pessoas *ps){
    int i;
    for(i = 0; i < 4; i++){
        fflush(stdin);
        printf("Digite o %d nome: ", i+1);
        gets((ps+i)->nome);
        fflush(stdin);
        printf("Digite o %d endereco: ", i+1);
        gets((ps+i)->end);
        fflush(stdin);
        printf("Digite o %d cidade: ", i+1);
        gets((ps+i)->cidade);
        fflush(stdin);
        printf("Digite o %d estado: ", i+1);
        gets((ps+i)->estado);
        fflush(stdin);
        printf("Digite o %d cep: ", i+1);
        gets((ps+i)->cep);
        fflush(stdin);
    }
}
//funcao imprime struct

void imprimeStruct(struct pessoas *ps){
    int i;
printf("\nListagem da estrutura:\n\n");
for(i = 0; i < 4; i++){
    printf("nome %d = %s\n",i+1, (ps+i)->nome);
    printf("endereco %d = %s\n",i+1, (ps+i)->end);
    printf("cidade %d = %s\n",i+1, (ps+i)->cidade);
    printf("estado %d = %s\n",i+1, (ps+i)->estado);
    printf("cep %d = %s\n\n",i+1, (ps+i)->cep);
}
}
#endif // 5

#ifdef ex6
/*
6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.
*/
struct pessoas{
 char nome[50];
 char end[50];
 char cidade[50];
 char estado[3];
 char cep[10];
};
void recebeStruct(struct pessoas *ps);
void imprimeStruct(struct pessoas *ps);
int procuraStruct(struct pessoas *ps);
void alteraRegistro(struct pessoas *ps, int j);
void excluirRegistro(struct pessoas *ps, int j);
main(){
struct pessoas pessoa[4];
struct pessoas *ps;
int i=0, fim = 0, j=0;
ps = pessoa;

do{
    printf("MENU: \n");
    printf("1 - IMPRIMIR\n2 - RECEBER DADOS\n3 - BUSCAR\n4 - ALTERAR\n5 - EXCLUIR\n6 - SAIR\n\n");
    scanf("%d", &fim);
    getchar();
    if(fim == 1){
        imprimeStruct(ps);

    }else if(fim == 2){
        recebeStruct(ps);
    }else if(fim == 3){
        j = procuraStruct(ps);
     if(j == -1){
        printf("Nenhum registro encontrado\n");
     }else{
        printf("nome = %s\n", ps[j].nome);
        printf("endereco = %s\n", ps[j].end);
        printf("cidade = %s\n", ps[j].cidade);
        printf("estado = %s\n", ps[j].estado);
        printf("cep = %s\n\n", ps[j].cep);
     }

    }else if(fim == 4){
        printf("Alterar registro:\n");
         j = procuraStruct(ps);
    if(j == -1){
        printf("Nenhum registro encontrado\n");
     }else{
       alteraRegistro(ps, j);
    }
    }else if(fim == 5){
        printf("Excluir registro:\n");
         j = procuraStruct(ps);
    if(j == -1){
        printf("Nenhum registro encontrado\n");
     }else{
       excluirRegistro(ps, j);
    }
    }
}while(fim != 6);
}
//funcao recebe struct
void recebeStruct(struct pessoas *ps){
    int i;
    for(i = 0; i < 4; i++){
        fflush(stdin);
        printf("Digite o %d nome: ", i+1);
        gets((ps+i)->nome);
        fflush(stdin);
        printf("Digite o %d endereco: ", i+1);
        gets((ps+i)->end);
        fflush(stdin);
        printf("Digite o %d cidade: ", i+1);
        gets((ps+i)->cidade);
        fflush(stdin);
        printf("Digite o %d estado: ", i+1);
        gets((ps+i)->estado);
        fflush(stdin);
        printf("Digite o %d cep: ", i+1);
        gets((ps+i)->cep);
        fflush(stdin);
    }
}
//funcao imprime struct

void imprimeStruct(struct pessoas *ps){
    int i;
printf("\nListagem da estrutura:\n\n");
for(i = 0; i < 4; i++){
    printf("nome %d = %s\n",i+1, (ps+i)->nome);
    printf("endereco %d = %s\n",i+1, (ps+i)->end);
    printf("cidade %d = %s\n",i+1, (ps+i)->cidade);
    printf("estado %d = %s\n",i+1, (ps+i)->estado);
    printf("cep %d = %s\n\n",i+1, (ps+i)->cep);
}
}
//funcao procura
int procuraStruct(struct pessoas *ps2){
    char nome[100], *ps;
    ps = nome;
    int i = 0, ver=0, j=0;
        fflush(stdin);
        printf("Digite um nome para buscar:");
        gets(nome);
        fflush(stdin);
for(j = 0; j < 4; j++){
        for(i = 0; nome[i] != '\0'; i++){
            if(ps[i] != ps2[j].nome[i]){
            break;
        }
    }
    if(ps[i] == '\0' && ps2[j].nome[i] == '\0'){
       return j;
    }
}
return -1;
}
//funca altera registro
void alteraRegistro(struct pessoas *ps, int j){
 printf("Digite o nome: ");
            gets(ps[j].nome);
            fflush(stdin);
             printf("Digite o endereco: ");
            gets(ps[j].end);
            fflush(stdin);
            printf("Digite a cidade: ");
            gets(ps[j].cidade);
            fflush(stdin);
            printf("Digite o estado: ");
            gets(ps[j].estado);
            fflush(stdin);
            printf("Digite o cep: ");
            gets(ps[j].cep);
            fflush(stdin);
}

void excluirRegistro(struct pessoas *ps, int j){
           *(ps[j]).nome = '*';
           *(ps[j]).end = '*';
           *(ps[j]).cidade = '*';
           *(ps[j]).estado = '*';
           *(ps[j]).cep = '*';
}
#endif // ex6


