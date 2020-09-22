
/*
    LISTA DINÂMICA/ENCADEADA - ORDENADA DECRESCENTE
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "listaOrdenada.h"

struct no{
    int info;
    struct no *prox;
};

Lista inicializar_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    return lst==NULL;
}

void lista_cheia(Lista lst){
    return;
}

int insere_ord(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL) return 0;
    N->info = elem;

    if(lista_vazia(*lst) || elem >= (*lst)->info){
        N->prox = *lst;
        *lst = N;
        return 1;
    }

    Lista aux = *lst;
    while(aux->prox!=NULL && aux->prox->info>elem)
        aux = aux->prox;
    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}

int remove_ord(Lista *lst, int elem){
    if(lista_vazia(*lst) || elem>(*lst)->info)
        return 0;

    Lista aux = *lst;

    if(elem==(*lst)->info){
        *lst = aux->prox;
        free(aux);
        return 1;
    }

    while(aux->prox!=NULL && aux->prox->info>elem)
        aux = aux->prox;
    if(aux->prox==NULL || aux->prox->info<elem)
        return 0;

    Lista aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

int obtem_pos(Lista *lst, int pos, int *elem){
    if(lista_vazia(lst) || pos<0)
        return 0;

    Lista aux = *lst;
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

int remove_pos(Lista *lst, int pos, int *elem){
    if(lista_vazia(lst) || pos<0)
        return 0;

    Lista aux = *lst;
    int cont=0;

    while(aux->prox!=NULL && cont<pos){
        aux = aux->prox;
        cont++;
    }

    if(cont!=pos)
        return 0;
    else{
        *elem = aux->info;
        Lista aux = *lst;

        if(*elem==(*lst)->info){
            *lst = aux->prox;
            free(aux);
            return 1;
        }

        while(aux->prox!=NULL && aux->prox->info>*elem)
            aux = aux->prox;
        if(aux->prox==NULL || aux->prox->info<*elem)
            return 0;

        Lista aux2 = aux->prox;
        aux->prox = aux2->prox;
        free(aux2);
        return 1;
    }
}


