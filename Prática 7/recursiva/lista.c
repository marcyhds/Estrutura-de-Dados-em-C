
/*
    LISTA DINÂMICA/ENCADEADA - RECURSIVA
    Feito por Marcela Neves Belchior
    Data: 20/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct no{
    double info;
    struct no *prox;
};

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    return lst==NULL;
}

int insere_ord(Lista *lst, double elem){
    if(lista_vazia(*lst) || elem <= (*lst)->info){

        Lista N = (Lista) malloc(sizeof(struct no));
        if(N==NULL) return 0;

        N->info = elem;
        N->prox = *lst;
        *lst = N;

        return 1;
    }else{
        return insere_ord(&((*lst)->prox),elem);
    }
}

int remove_ord(Lista *lst, double elem){

    if(lista_vazia(*lst) || elem < (*lst)->info){
        return 0;
    }else{
        if(elem == (*lst)->info){
            Lista aux = (*lst);
            (*lst) = aux->prox;
            free(aux);
            return 1;
        }else{
            return remove_ord(&((*lst)->prox),elem);
        }
    }
}

int obtem_elem(Lista *lst, int pos, double *elem){
    if(*lst==NULL || pos<0) return 0;

    Lista aux = *lst;

    if(pos>0){
        return obtem_elem(&((*lst)->prox), pos-1, &(*elem));
    }else{
        *elem = aux->info;
        return 1;
    }
}

void imprime(Lista lst){
    if(lista_vazia(lst)==1){
        printf("{}\n");
    }else{
        printf("{");
        Lista aux = lst;
        while(aux!=NULL){
            printf("%.1f, ", aux->info);
            aux = aux->prox;
        }
        printf("\b\b}\n");
    }
}
