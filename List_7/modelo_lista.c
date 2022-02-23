#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int info;
    struct elemento* prox;
};
typedef struct elemento Elemento;

//funcao de criacao: retorna uma lista vazia
Elemento* lista_cria(void){
    return NULL;
}

//insercao no início: retorna lista atualizada
Elemento* lista_insere(Elemento* lista, int val){
    Elemento* novo=(Elemento*)malloc(sizeof(Elemento));
    novo->info =val;
    novo->prox=lista;
    return novo;
}

//funcao imprime: imprime os valores dos elementos
void lista_imprime(Elemento* lista){
    Elemento* p;
    if(lista==NULL)
    {
        printf("\nlista vazia");
    }
    for(p=lista;p!=NULL;p=p->prox){
        printf("valor = %d\n",p->info);

    }
}

//funcao busca: busca um elemento na lista
Elemento* busca(Elemento* lista, int v){
    Elemento* p;
    for(p=lista;p!=NULL;p=p->prox){
        if(p->info==v){
            return p;
        }
    }
    return NULL;
}

//funcao vazia: retorna 1 se vazia ou 0 se nao vazia
int lista_vazia(Elemento* lista){
    if(lista==NULL){
        return 1;
    }
    else{
        return 0;
    }

}
//funcao para remover um elemento
Elemento* lista_remover(Elemento* lista, int val){
    Elemento* a=NULL;
    Elemento* p=lista;
    while(p!=NULL && p->info!=val){
        a=p;
        p=p->prox;
    }
    if(p==NULL){
       return lista;
    }
    if(a==NULL){

        lista=p->prox;

    }
    else{
        a->prox=p->prox;
    }
    free(p);
    return lista;
}

//funcao para destruir a lista
lista_destroi(Elemento* lista){
    Elemento * p=lista;
    while(p!=NULL){
        Elemento* t=p->prox;
        free(p);
        p=t;
    }
    return NULL;
}

Elemento* lista_insere_ordenado(Elemento* lista, int val){
    Elemento* novo;
    Elemento* a=NULL;
    Elemento* p=lista;

    while(p!=NULL && p->info<val){
        a=p;
        p=p->prox;
    }

    novo=(Elemento*)malloc(sizeof(Elemento));
    novo->info=val;
    if(a==NULL){
        novo->prox=lista;
        lista=novo;
    }
    else{
        novo->prox=a->prox;
        a->prox=novo;
    }
    return lista;
}

int main(){
    int v,vazia,val;
    Elemento* encontrou;

    Elemento* lista;
    lista=lista_cria();
    lista=lista_insere(lista,10);
    lista=lista_insere(lista,40);
    lista=lista_insere(lista,20);
    lista=lista_insere(lista,30);
    lista=lista_insere(lista,50);

    vazia=lista_vazia(lista);
    if(vazia==1){
        printf("a lista esta vazia\n\n");
    }
    else{
        printf("a lista nao esta vazia\n\n");
    }

    lista_imprime(lista);

    printf("\ninsira um elemento para ser procurado na lista: ");
    scanf("%d",&v);

    encontrou=busca(lista,v);
    if(encontrou==NULL){

        printf("\nelemento nao encontrado\n");
    }
    else{
        printf("\no elemento foi encontrado\n");
    }

    printf("\nque elemento deseja apagar: ");
    scanf("%d",&val);
    lista= lista_remover(lista,val);
    printf("\n");
    lista_imprime(lista);

    printf("\na lista sera destruida\n");
    //system("Pause");
    lista=lista_destroi(lista);

    lista_imprime(lista);

    //inserir ordenado
    lista=lista_cria();
    lista=lista_insere_ordenado(lista,10);
    lista=lista_insere_ordenado(lista,20);
    lista=lista_insere_ordenado(lista,15);
    lista=lista_insere_ordenado(lista,9);

    printf("\n\nnova lista ordenada:\n");
    lista_imprime(lista);

    return 0;
}
