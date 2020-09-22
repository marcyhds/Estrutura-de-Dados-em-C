
/*
    LISTA DINÂMICA/ENCADEADA - ORDENADA DECRESCENTE
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "listaOrdenada.h"

void imprime_lista(Lista);

int main()
{
    Lista l;

    l = inicializar_lista();

    insere_ord(&l,4);
    insere_ord(&l,23);
    insere_ord(&l,15);
    insere_ord(&l,42);
    insere_ord(&l,8);
    insere_ord(&l,16);

    imprime_lista(l);

    remove_ord(&l,4);
    int elem;
    remove_pos(&l,4,&elem);

    imprime_lista(l);
    
    l = inicializar_lista();

    return 0;
}

void imprime_lista(Lista lst){
    if(lista_vazia(lst))
        printf("{}\n");
    else{
        printf("{");
        Lista aux = lst;
        int elem, pos=0;
        while(obtem_pos(&aux,pos,&elem)){
            printf("%d, ", elem);
            pos++;
        }
        printf("\b\b}\n");
    }
}
