
/*
    LISTA DINÂMICA/ENCADEADA - RECURSIVA
    Feito por Marcela Neves Belchior
    Data: 20/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void imprime_lista(Lista);

int main()
{
    Lista l;
    double v[10] = {4,8,-1,19,2,7,8,5,9,22,45};
    int i;

    l = cria_lista();

    imprime_lista(l);

    for(i=0;i<10;i++){
        insere_ord(&l, v[i]);
    }

    imprime_lista(l);

    remove_ord(&l,8);

    imprime_lista(l);

    l = cria_lista();

    imprime_lista(l);

    return 0;
}

void imprime_lista(Lista lst){
    if(lista_vazia(lst)){
        printf("{}\n");
    }else{
        printf("{");
        int pos=0;
        double elem;
        while(obtem_elem(&lst,pos,&elem)){
            printf("%.1f, ", elem);
            pos++;
        }
        printf("\b\b}\n");
    }
}
