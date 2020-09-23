
/*
    LISTA DINÂMICA/ENCADEADA - CIRCULAR
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "circular.h"

void imprime_lista(Lista);

int main()
{
    Lista l;

    l = cria_lista();

    insere_final(&l,1);
    insere_final(&l,4);
    insere_final(&l,8);
    insere_final(&l,15);

    imprime_lista(l);

    int elem;
    remove_final(&l,&elem);
    printf("%d\n", elem);
    imprime_lista(l);

    l = cria_lista();

    return 0;
}

void imprime_lista(Lista lst){
    if(lista_vazia(lst))
        printf("{}\n");
    else{
        printf("{");
        Lista aux = lst;
        int elem, pos=0;
        while(obtem_valor_elem(&aux,pos,&elem)){
            printf("%d, ", elem);
            pos++;
        }
        printf("\b\b}\n");
    }
    return;
}

