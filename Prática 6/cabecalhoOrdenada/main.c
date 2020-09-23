
/*
    LISTA DINÂMICA/ENCADEADA - CABEÇALHO ORDENADA
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

void imprime_lista(Lista);

int main()
{
    Lista l;

    l = criar_lista();

    imprime_lista(l);

    insere_ord(&l,16);
    insere_ord(&l,23);
    insere_ord(&l,42);
    insere_ord(&l,4);
    insere_ord(&l,8);
    insere_ord(&l,15);

    imprime_lista(l);

    remove_ord(&l,8);

    imprime_lista(l);

    l = criar_lista();
    free(l);

    return 0;
}

void imprime_lista(Lista lst){
    if(lista_vazia(lst))
        printf("{}\n");
    else{
        printf("{");
        Lista aux = lst;
        int elem, pos=0;
        while(obtem_elem_valor(&aux,pos,&elem)){
            printf("%d, ", elem);
            pos++;
        }
        printf("\b\b}\n");
    }
    return;
}
