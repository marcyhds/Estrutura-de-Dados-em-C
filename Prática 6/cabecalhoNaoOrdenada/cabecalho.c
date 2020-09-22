
/*
    LISTA DINÂMICA/ENCADEADA - CABEÇALHO NÃO ORDENADA
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

struct no{
    int info;
    struct no *prox;
};

Lista criar_lista(){
    Lista cab = (Lista) malloc(sizeof(struct no));
    if(cab!=NULL){
        cab->prox = NULL;
        cab->info = 0;
    }
    return cab;
}

int lista_vazia(Lista lst){
    return lst->prox==NULL;
}

int insere_elem(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL) return 0;

    N->info = elem;
    N->prox = (*lst)->prox;
    (*lst)->prox = N;
    (*lst)->info++;
    return 1;
}

int remove_elem(Lista *lst, int elem){
    if(lista_vazia(*lst))
        return 0;

    Lista aux = *lst;

    while(aux->prox!=NULL && aux->prox->info!=elem)
        aux = aux->prox;
    if(aux->prox==NULL)
        return 0;
    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    (*lst)->info--;
    return 1;
}

int obtem_elem_valor(Lista *lst, int pos, int *elem){
    if(lista_vazia(*lst) || pos<0)
        return 0;

    Lista aux = (*lst)->prox;
    int cont=0;
    while(aux->prox!=NULL && cont<pos){
        aux = aux->prox;
        cont++;
    }

    if(cont!=pos)
        return 0;
    else{
        *elem = aux->info;
        return 1;
    }
}

