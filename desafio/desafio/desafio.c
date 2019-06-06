#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
            int cod;
            char nome [20];
            int qtdAtual;
            int qtdMin;
            int dia;
            int mes;
            int ano;
            };
void bonus();
int buscaData(struct dados *ps, int tam);
void alteraEstoque(struct dados *ps, int tam);
void naoDisponivel(struct dados *ps, int tam);
int buscaInicial(struct dados *ps, int tam);
void inclui();
void lista();
int pesquisa();
void altera();
void exclui();

int main()
{
        struct dados info;
        struct dados *p;
        int op;
        int i;
        int tam;    //n. de bytes da estrutura

        p = &info;

        //printf("tam no inicio do main = %d", tam);

        while(1){

        tam = sizeof(info);

        printf(" 1 -Inclua dados  \n");
        printf(" 2 -Lista dados  \n");
        printf(" 3 -Pesquisa dados  \n");
        printf(" 4 -Altera dados  \n");
        printf(" 5 -Exclui dados  \n");
        printf(" 6 -Busca por Inicial\n");
        printf(" 7 -pesquisa os produtos não disponíveis\n");
        printf(" 8 -Altera Estoque\n");
        printf(" 9 -Busca por data de validade\n");
        printf(" 10 -Bonus\n");
        printf(" 11 -Saida\n");

        scanf("%d", &op);
        getchar();


    switch(op)
                {
                case 1 : inclui(p, tam);   //passa como parametro o ponteiro para a estrutura e o n. de bytes da desta
                break;

                case 2: lista(p, tam);
                break;

                case 3: pesquisa(p, tam);
                break;

                case 4: altera(p, tam);
                break;

                case 5: exclui(p, tam);
                break;

                case 6: buscaInicial(p, tam);
                break;

                case 7:naoDisponivel(p, tam);
                break;

                case 8: alteraEstoque(p, tam);
                break;

                case 9: buscaData(p, tam);
                break;

                case 10: bonus();
                break;

                case 11: exit(0);
                break;

                default: printf("\n opcao invalida\n");
                }
    };

}

void inclui(struct dados *ps, int tam)
{
    FILE *p, *p1;
    int cont = 0;
    int i;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    //printf("contador antes %d\n",cont);
    fclose(p1);

    //printf("tam na funcao inclui = %d\n", tam);


    for(i=0;i<tam;i++){ //zera os dados da estrutura
        ps->nome[i]=0;
        ps->cod = 0;
        ps->qtdAtual;
    }

    p = fopen("arquivo.txt", "a");

    if( p == NULL){
        printf("\nERRO");
        exit(1);
    }

   printf("Digite o nome:");
   gets(ps->nome);
   printf("Digite o codigo:");
   scanf("%d", &ps->cod);
   printf("Digite a quantidade:");
   scanf("%d", &ps->qtdAtual);
   printf("Digite a quantidade minima:");
   scanf("%d", &ps->qtdMin);
   printf("Digite a data de validade no formato (dd/mm/yyyy):");
   scanf("%d/%d/%d", &ps->dia,  &ps->mes, &ps->ano);

   //printf("tam depois de receber dados = %d\n", tam);
   //printf("ponteiro = %d\n", sizeof(*ps));

   fwrite(ps, tam, 1, p);
   fclose(p);
   cont++;
   p1 = fopen("contador.txt", "w");
   fprintf(p1,"%d",cont);
   //printf("contador depois %d\n",cont);
   fclose(p1);
}

void lista(struct dados *ps, int tam)
{
    FILE *p, *p1;
    FILE *a;
    struct dados info;
    int i;
    int cont,comp;

    //printf("tam na funcao lista = %d\n", tam);
    //printf("size of lista = %d\n", sizeof(info));

    for(i=0;i<tam;i++){ //zera os dados da estrutura
        info.nome[i]=0;
        info.cod = 0;
        info.qtdAtual=0;
    }

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    printf("%d\n",cont);
    fclose(p1);

    p = fopen("arquivo.txt", "r"); /*r" --> Abre o arquivo apenas para leitura.*/

    if( p == NULL)
        {
        puts("\nERRO\n");
        exit(1);
    }

    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    printf("--------------------------------\n");
    printf("LISTA PRODUTOS\n");
    printf("--------------------------------\n");

    for(i=0;i<cont; i++){
        comp = i*tam;   //calcula o n. de bytes para posicionar o ponteiro do arquivo
    //printf("ponteiro = %d\n", comp);

   //printf("COMP LISTA = %d\n", comp);
    fseek(p,comp,0);    //posiciona o ponteiro no inicio do registro dentro do arquivo
    fread(ps,sizeof(info),1,p);   //le o registro
    if(ps -> nome[0] != '*'){     //verifica se esta apagado
            printf("--------------------------------\n");
            printf("Codigo = %d\n", ps->cod);
            printf("Nome = %s\n", ps->nome);
            printf("Quantidade Atual = %d\n", ps->qtdAtual);
            printf("Quantidade Minima = %d\n", ps->qtdMin);
            printf("Data de validade = %d/%d/%d\n", ps->dia, ps->mes, ps->ano);
            printf("--------------------------------\n");
        }
    }
        fclose(p);
}

int pesquisa(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    char nome1[20];
    int i=0,y, x;
    int cont;

    printf("Informe um nome para pesquisa: ");
    gets(nome1);

    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
   // printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
          printf("--------------------------------\n");
          printf("Codigo = %d\n", ps->cod);
          printf("Nome = %s\n", ps->nome);
          printf("Quantidade Atual = %d\n", ps->qtdAtual);
          printf("Quantidade Minima = %d\n", ps->qtdMin);
          printf("Data de validade = %d/%d/%d\n", ps->dia, ps->mes, ps->ano);
          printf("--------------------------------\n");
        return y;
    }
    }
    printf("registro nao existe\n\n");
    return -1;
}


void naoDisponivel(struct dados *ps, int tam){
    FILE *p;
    FILE *a;
    int i=0,y, x;
    int cont;
    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    printf("--------------------------------\n");
    printf("PRODUTOS NAO DISPONIVEIS\n");
    printf("--------------------------------\n");
    for(y=0;y<cont;y++)
    {
       fread(ps,tam,1,p);
       if(ps->qtdAtual <= ps->qtdMin && ps->nome[0] != '*' || ps->qtdAtual == 0 && ps->nome[0] != '*'){
            printf("--------------------------------\n");
            printf("Codigo = %d\n", ps->cod);
            printf("Nome = %s\n", ps->nome);
            printf("Quantidade Atual = %d\n", ps->qtdAtual);
            printf("Quantidade Minima = %d\n", ps->qtdMin);
            printf("Data de validade = %d/%d/%d\n", ps->dia, ps->mes, ps->ano);
            printf("--------------------------------\n");
       }
    }
}

int buscaInicial(struct dados *ps, int tam){

FILE *p;
    FILE *a;

    char nome1[20];
    int i=0,y, x, ver=0;
    int cont;

    printf("--------------------------------\n");
    printf("BUSCA POR INICIAL\n");
    printf("--------------------------------\n\n");


    printf("Informe a inicial do nome para pesquisar: ");
    gets(nome1);

    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);

            if(nome1[0] == ps -> nome[0]){
              printf("--------------------------------\n");
            printf("Codigo = %d\n", ps->cod);
            printf("Nome = %s\n", ps->nome);
            printf("Quantidade Atual = %d\n", ps->qtdAtual);
            printf("Quantidade Minima = %d\n", ps->qtdMin);
            printf("Data de validade = %d/%d/%d\n", ps->dia, ps->mes, ps->ano);
            printf("--------------------------------\n");

                ver++;
            }
    }
    if(ver <=0 ){
        printf("reg. nao existe\n");
        return -1;
    }

}


int buscaData(struct dados *ps, int tam){

FILE *p;
    FILE *a;

    int dia1=0,mes1=0,ano1=0;
    int i=0,y, x;
    int cont;
    int ver=0;

    printf("--------------------------------\n");
    printf("BUSCA POR DATA DE VALIDADE\n");
    printf("--------------------------------\n\n");

    printf("Digite a data de validade no formato (dd/mm/yyyy) para pesquisar:");
   scanf("%d/%d/%d", &dia1,  &mes1, &ano1);

    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {
        fread(ps,tam,1,p);
            if(dia1 == ps -> dia && mes1 == ps->mes && ano1 == ps->ano){
            printf("--------------------------------\n");
            printf("Codigo = %d\n", ps->cod);
            printf("Nome = %s\n", ps->nome);
            printf("Quantidade Atual = %d\n", ps->qtdAtual);
            printf("Quantidade Minima = %d\n", ps->qtdMin);
            printf("Data de validade = %d/%d/%d\n", ps->dia, ps->mes, ps->ano);
            printf("--------------------------------\n");
            ver++;
            }
    }
    if(ver <= 0){
        printf("Nenhum registro encontrado\n");
        return -1;
    }
}

void altera(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;;
    int n_bytes;

    printf("--------------------------------\n");
    printf("ALTERA PRODUTO\n");
    printf("--------------------------------\n\n");


    n_reg = pesquisa(ps, tam);     //pesquisa o registro no arquivo
   // printf("altera reg n.: %d\n",n_reg);
    if(n_reg == -1){
 	     return;
    }

    n_bytes = tam * n_reg;

    p = fopen("arquivo.txt", "r+");

    fseek(p,n_bytes,0);     //posioiona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );  //le registro do arquivo

    printf("Digite os novos dados\n");

   printf("Digite o nome:");
   gets(ps->nome);
   printf("Digite o codigo:");
   scanf("%d", &ps->cod);
   printf("Digite a quantidade:");
   scanf("%d", &ps->qtdAtual);
   printf("Digite a quantidade minima:");
   scanf("%d", &ps->qtdMin);
   printf("Digite a data de validade no formato (dd/mm/yyyy):");
   scanf("%d/%d/%d", &ps->dia,  &ps->mes, &ps->ano);

    fseek(p,n_bytes,0);    //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);  //escreve o registro no arquivo

    fclose(p);
}


void alteraEstoque(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;;
    int n_bytes;
         printf("--------------------------------\n");
    printf("ALTERA ESTOQUE\n");
         printf("--------------------------------\n");
    n_reg = pesquisa(ps, tam);     //pesquisa o registro no arquivo
    //printf("altera reg n.: %d\n",n_reg);
    if(n_reg == -1){
 	     return;
    }
    n_bytes = tam * n_reg;

    p = fopen("arquivo.txt", "r+");

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser alterado
    fread(ps, tam, 1, p );  //le registro do arquivo

    printf("Quantidade atual = %d\n", ps->qtdAtual);
    printf("Quantidade minima = %d\n", ps->qtdMin);

   printf("Digite a nova quantidade: ");
   scanf("%d", &ps->qtdAtual);
   printf("Digite a nova quantidade minima: ");
   scanf("%d", &ps->qtdMin);

    fseek(p,n_bytes,0);    //posiciona o ponteiro do arquivo no inicio do regisro a ser alterado
    fwrite(ps, tam,1,p);  //escreve o registro no arquivo

    fclose(p);
}

void exclui(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;
    int n_bytes;
    int confirma=0;
    printf("--------------------------------\n");
    printf("EXCLUIR PRODUTO\n");
    printf("--------------------------------\n\n");

    n_reg = pesquisa(ps, tam);  //pesquisa o registro no arquivo
    if(n_reg == -1){
 	     return;
    }
    p = fopen("arquivo.txt", "r+");
    n_bytes = tam * n_reg;

    fseek(p,n_bytes,0);       //posioiona o ponteiro do arquivo no registro a ser apagado
    fread(ps, tam, 1, p );   //le o registro do arquivo
    printf("nome para apagar e' %s\n",ps -> nome);

    printf("para confirmar digite 1: ");
    scanf("%d", &confirma);

    if(confirma == 1){
        (ps)->nome[0] = '*';
        printf("Registro excluido com sucesso !!!\n");
    }else{
        printf("Nenhuma alteracao realizada !\n");
    }

    fseek(p,n_bytes,0);  //posiciona o ponteiro do arquivo no inicio do regisro a ser apagado
    fwrite(ps,tam,1,p);  //escreve o registro

    fclose(p);
}
void bonus(){
    printf("\n\nObrigado professor RUI hoje voce me tirou das trevas e me levou para luz\n");
    printf("Passei a tarde toda fazendo o desafio com gosto e entendendo o que estava fazendo gracas ao\nseu compartilhamento de conhecimento e boa didatica\n");
    printf("espero que esteja tudo certo e me falaram que quem entregase hoje e estivesse tudo ok estaria com 10 na media !!!\n");
    printf("Brincadeiras a parte, obrigado por mais 1 semestre - Rodrigo Peixoto\n\n");
}
