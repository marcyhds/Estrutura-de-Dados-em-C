
/*
    LISTA ESTÁTICA/SEQUENCIAL - BEBIDAS
    Feito por Marcela Neves Belchior
    Data: 06/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <string.h>

void imprime_lista(Lista);

int main()
{
    Bebida b1, b2;
    Lista lst;

    strcpy(b1.nome,"cerveja");
    b1.volume = 610;
    b1.preco = 6.00;

    strcpy(b2.nome,"refrigerante");
    b2.volume = 350;
    b2.preco = 5.00;

    lst = inicializa_lista();
    insere_ord(lst,b2);
    insere_ord(lst,b1);

    imprime_lista(lst);

    remove_ord(lst,b2);

    imprime_lista(lst);

    lst = inicializa_lista();

    return 0;
}

void imprime_lista(Lista lst){
    if(lista_vazia(lst)){
        printf("{}\n");
    }else{
        printf("{\n\n");
        int pos=0;
        Bebida elem;
        while(get_pos(lst,pos,&elem)!=0){
            printf(" nome = %s\n", elem.nome);
            printf(" volume = %d\n", elem.volume);
            printf(" preco = R$ %.2f\n\n", elem.preco);
            pos++;
        }
        printf("}\n\n");
    }
    return;
}
