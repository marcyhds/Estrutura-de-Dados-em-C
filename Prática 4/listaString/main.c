
/*
    LISTA ESTÁTICA/SEQUENCIAL - STRINGS
    Feito por Marcela Neves Belchior
    Data: 04/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <string.h>

void imprime_lista(Lista);

int main()
{
    Lista l;

    l = inicializar_lista();

    imprime_lista(l);

    insere_elem(l,"ab");
    insere_elem(l,"cd");
    insere_elem(l,"fg");

    imprime_lista(l);

    remove_elem(l,"ab");

    imprime_lista(l);

    l = inicializar_lista();

    return 0;
}

void imprime_lista(Lista lst){
    if(lista_vazia(lst)){
        printf("{}\n");
    }else{
        printf("{");
        int pos=0;
        char aux[10];
        while(get_pos(lst,pos,&aux)){
            printf("%s, ", aux);
            pos++;
        }
        printf("\b\b}\n");
    }
    return;
}

