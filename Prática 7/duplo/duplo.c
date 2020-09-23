
/*
    LISTA DINÂMICA/ENCADEADA - ENCADEAMENTO DUPLO
    Feito por Marcela Neves Belchior
    Data: 23/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "duplo.h"

struct no{
    int info;
    struct no *prox;
    struct no *ant;
};

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    return lst==NULL;
}

int insere_elemento(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL) return 0;

    N->info = elem;
    N->ant = NULL;
    N->prox = *lst;

    if(lista_vazia(*lst)==0)
        (*lst)->ant = N;

    *lst = N;
    return 1;
}

int remove_elemento(Lista *lst, int elem){
    if(lista_vazia(*lst))
        return 0;

    Lista aux = *lst;
    while(aux->prox!=NULL && aux->info!=elem)
        aux = aux->prox;
    if(aux->info!=elem)
        return 0;
    if(aux->prox!=NULL)
        aux->prox->ant = aux->ant;
    if(aux->ant!=NULL)
        aux->ant->prox = aux->prox;
    if(aux==*lst)
        *lst = aux->prox;
    free(aux);
    return 1;
}

int insere_ord(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N==NULL) return 0;
    N->info = elem;

    if(lista_vazia(*lst)){
        N->prox = NULL;
        N->ant = NULL;
        *lst = N;
        return 1;
    }else{
        Lista auxAnt, aux = *lst;
        while(aux!=NULL && aux->info<elem){
            auxAnt = aux;
            aux = aux->prox;
        }
        if(aux==*lst){
            N->ant = NULL;
            (*lst)->ant = N;
            N->prox = *lst;
            *lst = N;
        }else{
            N->prox = auxAnt->prox;
            N->ant = auxAnt;
            auxAnt->prox = N;
            if(aux!=NULL)
                aux->ant = aux;
        }
        return 1;
    }
}

int remove_ord(Lista *lst, int elem){
    if(lista_vazia(*lst) || elem<(*lst)->info)
        return 0;

    Lista aux = *lst;
    while(aux->prox!=NULL && aux->info<elem)
        aux = aux->prox;
    if(aux->info!=elem)
        return 0;
    if(aux->prox!=NULL)
        aux->prox->ant = aux->ant;
    if(aux->ant!=NULL)
        aux->ant->prox = aux->prox;
    if(aux==*lst)
        *lst = aux->prox;
    free(aux);
    return 1;
}

int obtem_valor_elem(Lista *lst, int pos, int *elem){
    if(lista_vazia(*lst) || pos<0)
        return 0;

    Lista aux = *lst;
    int cont=0;
    while(aux!=NULL && cont<pos){
        aux = aux->prox;
        cont++;
    }
    if(aux==NULL)
        return 0;
    else{
        *elem = aux->info;
        return 1;
    }
}
