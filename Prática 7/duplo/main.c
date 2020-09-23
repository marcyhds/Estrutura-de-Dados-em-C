
/*
    LISTA DINÂMICA/ENCADEADA - ENCADEAMENTO DUPLO
    Feito por Marcela Neves Belchior
    Data: 23/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "duplo.h"

void imprime_lista(Lista);

int main()
{
    Lista l;
    int i, v[11] = {4,8,-1,19,2,7,8,5,9,22,49};

    l = cria_lista();

    imprime_lista(l);

    for(i=0;i<11;i++)
        insere_ord(&l,v[i]);

    imprime_lista(l);

    remove_ord(&l,8);

    imprime_lista(l);

    l = cria_lista();

    imprime_lista(l);

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
