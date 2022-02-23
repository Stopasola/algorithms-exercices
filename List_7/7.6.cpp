#include<stdio.h>
#include<stdlib.h>

struct Restaurante {
 char nome[30];   
 char endereco[30];   
 char tipo[10];
 int nota; 
}rest;

Elemento* lista_cria(void){
    return NULL;
}

Elemento* lista_insere(Elemento* lista, char val[],){
    Elemento* novo=(Elemento*)malloc(sizeof(Elemento));
    rest->nome = nome;
    rest->endereco = end;
    rest->tipo = tipo;
    rest->nota =nota;
    novo->prox=lista;
    return novo;
}

int main()
{
	int n,i,j,tot=0;
    float menor=1000,maior=0;
    printf("Quantidade de alunos:\n");
    scanf("%d", &n);
    float vetor[n];
    produto *pont;
    pont = (produto *)malloc(n*sizeof(produto));
    printf("\nDados de entrada dos produtos:\n");
    for(i=0;i<n;i++){
        fflush(stdin);
        printf("Nome: ");
        scanf("%s",pont[i].nome);
        fflush(stdin);
        printf("Codigo: ");
        scanf("%d", &pont[i].codigo;
        printf("Faltas: \n");
        scanf("%f", &pont[i].preco);
    	printf("----- Cliente %d -----",i);
    	printf("%s",pont[i].nome);
        printf("%d", &pont[i].codigo);
        printf("%f", &pont[i].preco);
	}
	return 0;	
}