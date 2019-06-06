#define ex4
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "locale.h"


//RODRIGO DE ARAUJO PEIXOTO ADS - MANHA

#ifdef ex1
/*
1 - Faça um programa para:
    1 - criar/abrir um arquivo texto de nome ”arq.txt”,
    2 - receba via teclado diversos caracteres (um por vezes)e armazene nesse
        arquivo. O caracter '0' finaliza a entrada de dados.
    3 - reabra o arquivo fazendo o ponteiro apontar para seu início
    4 - leia e imprima na tela todos os caracteres armazenados.
*/
main(){

//FILE *fopen(); /*a funcao fopen() retorna um ponteiro do tipo "FILE". Por isso,
//                 tem que fazer esta declaracao */
FILE *p;   /*declara o ponteiro "p" do tipo "FILE"*/
char ch;
char i;
int n=0;

if((p = fopen("arq.txt","w"))==NULL)
	{
	printf("erro na abertura do arquivo \n");
	exit(0);  /*encerra o programa e volta ao sistema operacional*/
	}
do{
  printf("Digite um caracter\n");
  scanf("%c", &ch);
  getchar();
  putc(ch,p);

    n++;
}while(ch != '0');

fclose(p);

p = fopen("arq.txt","r");
char c;
for(n; n > 0; n-- ){
  c = getc(p);
  if(c != '0'){
    putchar(c);
  }
}
fclose(p);
}

#endif // ex1

#ifdef ex2
/*
2 - Faça um programa para gerenciar uma agenda de contatos. Para cada contato
    armazene o nome, o telefone e o aniversário (dia e mês). O programa deve ter
    as opções:
    1 - inserir contato,
    2 - remover contato,
    3 - pesquisar um contato pelo nome,
    4 - listar todos os contatos,
    5 - listar os contatos cujo nome inicia com uma dada letra,
    6 - imprimir os aniversariantes do mês.
    7 - Sair
    Sempre que o programa for encerrado, os contatos devem ser armazenados. Quando
    o programa iniciar, os contatos devem ser inicializados com os dados contidos
    no arquivo.#include <stdlib.h>
*/
typedef struct data DATA;
struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct contato CONTATO;
struct contato{
    char nome[30];
    char fone[15];
    DATA aniver;
};

void cabecalho();
void inputData();
void listar();
int comparaString(CONTATO *p, char *ps);
int pesquisar();
void aniversMes();
void listaInicial();
void  deletar();
int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    int teste;


do{
        cabecalho();
        printf("MENU: \n");
 printf("1 - INSERIR\n2 - REMOVER\n3 - PESQUISAR\n4 - LISTAR TODOS\n5 - LISTAR POR INICIAL\n6 - ANIVERSARIANTES DO MES\n7 - FINALIZAR\n\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);
switch(opcao){
    case 1:
        inputData();
    break;

    case 2:
        deletar();
    break;

    case 3:
       teste = pesquisar();
        printf("teste = %d", teste);
        getch();
    break;

    case 4:
        listar();
    break;

    case 5:
        listaInicial();
    break;

    case 6:
        aniversMes();
          getch();
    break;

    case 7:
       printf("Desconectado");
       getch();
    break;

    default:
        printf("Opção invalida");
        getch();
    break;
}

}while(opcao != 7);

}


void deletar(){
    FILE * arquivo;
    CONTATO ctt;
    int posicao = 0;
    int ponteiro = 0 ;
    arquivo = fopen("agenda.txt", "r+");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{

       posicao =  pesquisar();

        if(posicao != -1){
            CONTATO ctt = {"*", "*", 0,0,0};
            ponteiro = posicao * sizeof(CONTATO);
            fseek(arquivo, ponteiro, 0);
            fwrite(&ctt, sizeof(CONTATO), 1, arquivo);
            printf("Usuario removido com sucesso !!!");
            getch();
        }else{
            printf("nenhum usuario encontrado");
            getch();
        }
         fclose(arquivo);
    }
}

//insere um cabecalho
void cabecalho(){
    system("cls");
    printf("-----------------------------\n");
    printf("AGENDA\n");
    printf("-----------------------------\n\n");
}


//insere no arquivo
void inputData(){
    FILE *arquivo;
    CONTATO ctt;
   arquivo = fopen("agenda.txt", "ab");
   if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
   }else{
       do{
            fflush(stdin);
            printf("Digite o nome");
            gets(ctt.nome);

            fflush(stdin);
            printf("Digite o telefone");
            gets(ctt.fone);

            fflush(stdin);
            printf("Digite o aniversário");
            scanf("%d %d %d", &ctt.aniver.dia, &ctt.aniver.mes, &ctt.aniver.ano);

            fwrite(&ctt, sizeof(CONTATO), 1, arquivo);
            printf("Deseja continuar (s/n)?");

       }while(getche() == 's');
fclose(arquivo);
   }
}

//lista todos os arquivos
void listar(){
FILE *arquivo;
CONTATO ctt;
arquivo = fopen("agenda.txt", "rb");
cabecalho();
 if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
   }else{
            while(fread(&ctt, sizeof(CONTATO),1,arquivo) == 1){
            printf("Nome: %s\nTelefone: %s\nData Nascimento: %d/%d/%d\n",ctt.nome, ctt.fone, ctt.aniver.dia, ctt.aniver.mes, ctt.aniver.ano);
            printf("------------------------------------\n");
        }
   }
fclose(arquivo);
getch();
}

int pesquisar(){
    FILE *arquivo;
    CONTATO ctt;
    CONTATO *p;
    int ver =0;
    char nome[30], *ps;
    ps = nome;
    p = &ctt;
    int valida = 0, cont = 0;
    arquivo = fopen("agenda.txt", "rb");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
                fflush(stdin);
                printf("Digite um nome para buscar: ");
                gets(nome);

         while(fread(&ctt, sizeof(CONTATO),1,arquivo) == 1){
               valida = comparaString(&ctt, ps);
               if(valida == 1){
                     cabecalho();
                     printf("Nome: %s\n", p->nome);
                     printf("Telefone: %s\n", p->fone);
                     printf("Data Nascimento: %d/%d/%d\n", p->aniver.dia, p->aniver.mes, p->aniver.ano);
                     ver++;
               }
               if(ver > 0){
                    return cont;
               }
                    cont++;
         }
         if(ver == 0){
            return -1;
         }
    }
    fclose(arquivo);
    getch();
}

int comparaString(CONTATO *p, char *ps){
    int i = 0;
        for(i = 0; ps[i] != '\0'; i++){
            if(ps[i] != p->nome[i]){
            break;
        }
    }
    if(ps[i] == '\0' && p->nome[i] == '\0'){
        return 1;
    }else{
        return 0;
    }
}

void aniversMes(){
FILE *arquivo;
CONTATO ctt;
cabecalho();
    arquivo = fopen("agenda.txt", "rb");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
        int mes;
        printf("Digite o mes de aniversário: ");
        scanf("%d", &mes);

        while(fread(&ctt, sizeof(CONTATO),1,arquivo)==1){
                if(mes == ctt.aniver.mes){
                printf("\nNome: %s\n", ctt.nome);
                printf("Telefone: %s\n", ctt.fone);
                printf("Data Nascimento: %d/%d/%d\n",ctt.aniver.dia,ctt.aniver.mes, ctt.aniver.ano);
                printf("-----------------------------------\n");
                }
        }
    }
    fclose(arquivo);
}

void listaInicial(){
    FILE *arquivo;
    CONTATO ctt;
    CONTATO *p;
    char nome[2], *ps;
    ps = nome;
    p = &ctt;
    int valida = 0;
    arquivo = fopen("agenda.txt", "rb");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
                fflush(stdin);
                printf("Digite a inicial do nome: ");
                gets(nome);
         while(fread(&ctt, sizeof(CONTATO),1,arquivo) == 1){
              if(nome[0] == ctt.nome[0]){
                printf("\nNome: %s\n", ctt.nome);
                printf("Telefone: %s\n", ctt.fone);
                printf("Data Nascimento: %d/%d/%d\n",ctt.aniver.dia,ctt.aniver.mes, ctt.aniver.ano);
                printf("-----------------------------------\n");
              }
         }
    }
    fclose(arquivo);
    getch();
}

#endif // ex2


#ifdef ex3
    /*
3 - Implemente um controle simples de mercadorias em uma despensa doméstica.
    Sobre cada produto será armazenado um código numérico, descrição e
    quantidade atual.
    O programa deve ter as opções:
    1 - entrada de produtos
    2 - retirada de produtos
    3 - pesquisar uma mercadoria pela descrição
    4 - listar todos os produtos
    5 - listar os produtos não disponíveis.
    Escreva os itens das mercadorias direto no arquivo. (utilize a funcao fseek).
*/
typedef struct produto PRODUTO;

struct produto{
    int id_prod;
    char descr[255];
    int qtd;
};
void retirada();
void inserir();
void listar();
int comparaString(PRODUTO *p, char *ps);
void pesquisar();
void listaNaoDisp();
int main(){
PRODUTO prod;
char fim;

do{

printf("MENU: \n");
printf("1 - INSERIR\n2 - RETIRADA\n3 - PESQUISAR PELA DESCRICAO\n4 - LISTAR TODOS\n5 - LISTAR NAO DISPONIVEL\n6 - FINALIZAR\n\n");
printf("Escolha uma opção: ");
fflush(stdin);
scanf("%d", &fim);
switch(fim){
    case 1:
        inserir();
    break;

    case 2:
        retirada();
    break;

    case 3:
        pesquisar();
    break;

    case 4:
        listar();
    break;

    case 5:
        listaNaoDisp();
    break;

    case 6:
        printf("Desconectado");
        getch();
    break;

    default:
        printf("Opção invalida");
        getch();
    break;
}

}while(fim != 6);
}

void retirada(){

    FILE *arquivo;
    PRODUTO prod, *pr;
    pr = &prod;

    char nome[255], *n;
    n = nome;
    int valida = 0, qtd =0, cont =0, ponteiro=0;

   arquivo = fopen("controle.txt", "rb+");
   if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
   }else{
        printf("Digite o nome do produto a retirar");
        scanf("%s", &nome);

        while(fread(&prod,sizeof(PRODUTO),1, arquivo) == 1){
            valida = comparaString(&prod, n);
            if(valida == 1){
                printf("Quantidade atual no estoque: %d\n", prod.qtd);
                printf("Digite a nova quantidade: ");
                scanf("%d", &qtd);
                ponteiro = cont * sizeof(PRODUTO);
                fseek(arquivo,ponteiro,0);
                pr->qtd = qtd;
                fwrite(&prod,sizeof(PRODUTO),1,arquivo);
                break;
               }
               cont++;
        }
   }
   fclose(arquivo);
}

//insere no arquivo
void inserir(){
    FILE *arquivo;
    PRODUTO prod;
   arquivo = fopen("controle.txt", "ab");
   if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
   }else{
       do{
            printf("------------------------\n");
            printf("Inserir produto");
            printf("------------------------\n");

            fflush(stdin);
            printf("Digite o codigo do produto: ");
           scanf("%d", &prod.id_prod);

            fflush(stdin);
            printf("Digite a descricao do produto: ");
            gets(prod.descr);

            fflush(stdin);
            printf("Digite a quantidade: ");
            scanf("%d", &prod.qtd);

            fwrite(&prod, sizeof(PRODUTO), 1, arquivo);
            printf("Deseja continuar (s/n)?");

       }while(getche() == 's');
fclose(arquivo);
   }
}

//lista todos os arquivos
void listar(){
FILE *arquivo;
PRODUTO prod;
arquivo = fopen("controle.txt", "rb");

 if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
   }else{
            while(fread(&prod, sizeof(PRODUTO),1,arquivo) == 1){
            printf("codigo: %d\nDescricao: %s\nQuantidade: %d\n",prod.id_prod, prod.descr, prod.qtd);
            printf("------------------------------------\n");
        }
   }
fclose(arquivo);
getch();
}


void pesquisar(){
    FILE *arquivo;
    PRODUTO prod;
    PRODUTO *p;

    char nome[255], *ps;
    ps = nome;
    p = &prod;
    int valida = 0;
    int ver = 0;
    arquivo = fopen("controle.txt", "rb");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
                fflush(stdin);
                printf("Digite um nome para buscar: ");
                gets(nome);

         while(fread(&prod, sizeof(PRODUTO),1,arquivo) == 1){
                if(comparaString(&prod, ps) == 1){
                        printf("\n------------------------\n");
                        printf("RESULTADO DA BUSCA\n");
                        printf("------------------------\n\n");
                    printf("Codigo: %d\n", prod.id_prod);
                    printf("Descricao: %s\n",prod.descr);
                    printf("Quantidade: %d\n", prod.qtd);
                    ver ++;
                }
         }
         if(ver < 1){
            printf("Nenhum produto encontrado");
         }
    }
    fclose(arquivo);
    getch();
}

int comparaString(PRODUTO *p, char *ps){
    int i = 0;
        for(i = 0; ps[i] != '\0'; i++){
            if(ps[i] != p->descr[i]){
            break;
        }
    }
    if(ps[i] == '\0' && p->descr[i] == '\0'){
     return 1;
    }else{
     return 0;
    }
}

void listaNaoDisp(){
    FILE *arquivo;
    PRODUTO prod;
    arquivo = fopen("controle.txt", "rb");
 if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
        while(fread(&prod, sizeof(PRODUTO),1,arquivo) == 1){
              if(prod.qtd == 0){
                        printf("\n------------------------\n");
                        printf("PRODUTOS EM FALTA\n");
                        printf("------------------------\n\n");
                        printf("Codigo Produto: %d\n", prod.id_prod);
                        printf("Produto: %s\n", prod.descr);
                        printf("Quantidade: %s\n\n", prod.qtd);
              }
        }
    }
}


#endif // ex3


#ifdef ex4
/*
4 - A partir do exercico 7 do capitulo de funcoes, retire o vetor de estrutura e
    passe a escrever e ler os registros direto no arquivo. (utilize a funcao fseek).

*/


typedef struct pessoas PESSOAS;
struct pessoas{
 char nome[50];
 char end[50];
 char cidade[50];
 char estado[3];
 char cep[10];
};
void pesquisar();
void recebeStruct();
void imprimeArquivo();
int procuraStruct(struct pessoas *ps);
void alteraRegistro();
void excluirRegistro();
int comparaString(PESSOAS *p, char *ps);
int main(){

struct pessoas pessoa;
struct pessoas *ps;
int fim = 0;
ps = &pessoa;

do{
    printf("MENU: \n");
    printf("1 - IMPRIMIR\n2 - RECEBER DADOS\n3 - BUSCAR\n4 - ALTERAR\n5 - EXCLUIR\n6 - SAIR\n\n");
    scanf("%d", &fim);
    getchar();
    if(fim == 1){
        imprimeArquivo();

    }else if(fim == 2){
       recebeStruct();
    }else if(fim == 3){
       pesquisar();
     }    else if(fim == 4){
       alteraRegistro();
    }   else if(fim == 5){
       excluirRegistro();
    }

}while(fim != 6);
}
//funcao recebe struct
void recebeStruct(){
    FILE *arquivo;
    struct pessoas ps;

    arquivo = fopen("controle.txt", "ab");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
        fflush(stdin);
        printf("Digite o nome: ");
        gets(ps.nome);
        fflush(stdin);
        printf("Digite o endereco: ");
        gets(ps.end);
        fflush(stdin);
        printf("Digite o cidade: ");
        gets(ps.cidade);
        fflush(stdin);
        printf("Digite o estado: ");
        gets(ps.estado);
        fflush(stdin);
        printf("Digite o cep: ");
        gets(ps.cep);
        fflush(stdin);
        fwrite(&ps,sizeof(PESSOAS),1,arquivo);
    }
fclose(arquivo);
}

//funcao imprime arquivo
void imprimeArquivo(){
    FILE *arquivo;
    struct pessoas pessoa;
     arquivo = fopen("controle.txt", "rb");
   if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
   }else{
        while(fread(&pessoa,sizeof(pessoa),1,arquivo)==1){
            printf("Nome %s\n", pessoa.nome);
            printf("Endereco %s\n", pessoa.end);
            printf("Cidade %s\n", pessoa.cidade);
            printf("Estado %s\n", pessoa.estado);
            printf("Cep %s\n", pessoa.cep);
        }
    }
    fclose(arquivo);
}

void pesquisar(){
    FILE *arquivo;
    PESSOAS pes;
    PESSOAS *p;

    char nome[255], *ps;
    ps = nome;
    p = &pes;
    int valida = 0;
    int ver = 0;
    arquivo = fopen("controle.txt", "rb");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
                fflush(stdin);
                printf("Digite um nome para buscar: ");
                gets(nome);

         while(fread(&pes, sizeof(PESSOAS),1,arquivo) == 1){
                if(comparaString(&pes, ps) == 1){
                    printf("\n------------------------\n");
                    printf("RESULTADO DA BUSCA\n");
                    printf("------------------------\n\n");
                    printf("Nome: %s\n", pes.nome);
                    printf("Endereco: %s\n",pes.end);
                    printf("Cidade: %s\n", pes.cidade);
                    printf("Estado: %s\n", pes.estado);
                    printf("Cep: %s\n", pes.cep);
                    ver ++;
                }
         }
         if(ver < 1){
            printf("Nenhum usuario encontrado");
         }
    }
    fclose(arquivo);
    getch();
}

int comparaString(PESSOAS *p, char *ps){
    int i = 0;
        for(i = 0; ps[i] != '\0'; i++){
            if(ps[i] != p->nome[i]){
            break;
        }
    }
    if(ps[i] == '\0' && p->nome[i] == '\0'){
     return 1;
    }else{
     return 0;
    }
}

//funca altera registro
void alteraRegistro(){
    FILE *arquivo;
    PESSOAS pes;
    PESSOAS *ps;
    ps = &pes;
    int valida =0, cont=0, ponteiro=0;
    char nome[255], *p;
    p = nome;
    printf("Digite o nome para alterar: ");
    scanf("%s", &nome);
    arquivo = fopen("controle.txt", "rb+");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
        while(fread(&pes,sizeof(PESSOAS),1,arquivo)==1){
            valida =  comparaString(&pes, p);
           if(valida == 1){
                 fflush(stdin);
        printf("Digite o nome: ");
        gets(ps->nome);
        fflush(stdin);
        printf("Digite o endereco: ");
        gets(ps->end);
        fflush(stdin);
        printf("Digite o cidade: ");
        gets(ps->cidade);
        fflush(stdin);
        printf("Digite o estado: ");
        gets(ps->estado);
        fflush(stdin);
        printf("Digite o cep: ");
        gets(ps->cep);
        fflush(stdin);
        ponteiro = cont * sizeof(PESSOAS);
        fseek(arquivo,ponteiro,0);
        fwrite(&pes,sizeof(PESSOAS),1,arquivo);
        break;
        }
        cont++;
        }
    }
    fclose(arquivo);
}

void excluirRegistro(){
             FILE *arquivo;
    PESSOAS pes;
    PESSOAS *ps;
    ps = &pes;
    int valida =0, cont=0, ponteiro=0;
    char nome[255], *p;
    p = nome;
    printf("Digite o nome para deletar: ");
    scanf("%s", &nome);
    arquivo = fopen("controle.txt", "rb+");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
    }else{
        while(fread(&pes,sizeof(PESSOAS),1,arquivo)==1){
            valida =  comparaString(&pes, p);
           if(valida == 1){
        PESSOAS pes = {"*","*", "*","*","*"};
        ponteiro = cont * sizeof(PESSOAS);
        fseek(arquivo,ponteiro,0);
        fwrite(&pes,sizeof(PESSOAS),1,arquivo);
        break;
        }
        cont++;
        }
    }
    fclose(arquivo);
}

#endif // ex4
