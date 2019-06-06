#include <stdio.h>
#include <stdlib.h>
/*10 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%;
     MS 8%). Escreva um programa em que o usuario entre com o valor do produto e o
     estado destino do produto. O programa deve mostrar o preco final do produto
     acrescido do imposto do estado em que ele sera vendido. Se o estado digitado
     nao for valido, mostrar uma mensagem de erro.
*/
//strcmp funcao comparacao string
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





