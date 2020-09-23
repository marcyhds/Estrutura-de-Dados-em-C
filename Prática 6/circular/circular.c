
/*
    LISTA DINÂMICA/ENCADEADA - CIRCULAR
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "circular.h"

struct no{
    int info;
    struct no *prox;
};


Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    return lst==NULL;
}

int insere_final(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL) return 0;
    N->info = elem;

    if(lista_vazia(*lst)){
        N->prox = N;
        *lst = N;
    }else{
        N->prox = (*lst)->prox;
        (*lst)->prox = N;
        *lst = N;
    }
    return 1;
}

int remove_inicio(Lista *lst, int *elem){
    if(lista_vazia(*lst))
        return 0;

    Lista aux = (*lst)->prox;
    *elem = aux->info;
    if(*lst==(*lst)->prox)
        *lst = NULL;
    else
        (*lst)->prox = aux->prox;
    free(aux);
    return 1;
}

int insere_inicio(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL) return 0;
    N->info = elem;

    if(lista_vazia(*lst)){
        N->prox = N;
        *lst = N;
    }else{
        N->prox = (*lst)->prox;
        (*lst)->prox = N;
    }
    return 1;
}

int remove_final(Lista *lst, int *elem){
    if(lista_vazia(*lst)) return 0;

    if((*lst)==(*lst)->prox){
        *elem = (*lst)->info;
        free(*lst);
        *lst = NULL;
        return 1;
    }
    Lista ant, no = *lst;
    while(no->prox != (*lst)){
        ant = no;
        no = no->prox;
    }
    *elem = no->info;
    ant->prox = no->prox;
    free(no);
    return 1;
}

int obtem_valor_elem(Lista *lst, int pos, int *elem){
    if(lista_vazia(*lst) || pos<0)
        return 0;

    Lista aux = (*lst)->prox;
    int cont=0;

    while(aux!=*lst && cont<pos){
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
