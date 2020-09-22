
/*
    LISTA DINÂMICA/ENCADEADA - CABEÇALHO NÃO ORDENADA
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

    insere_elem(&l,4);
    insere_elem(&l,8);
    insere_elem(&l,15);
    insere_elem(&l,16);
    insere_elem(&l,23);
    insere_elem(&l,42);

    imprime_lista(l);

    remove_elem(&l,8);

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
