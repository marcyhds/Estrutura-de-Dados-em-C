
/*
    LISTA ESTÁTICA/SEQUENCIAL - STRINGS
    Feito por Marcela Neves Belchior
    Data: 04/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <string.h>
#define max 20

struct lista{
    char no[max][10];
    int fim;
};

Lista inicializar_lista(){
    Lista lst;
    lst = (Lista)malloc(sizeof(struct lista));

    if(lst != NULL)
        lst->fim = 0;
    return lst;
}

int lista_vazia(Lista lst){
    return lst->fim==0;
}

int lista_cheia(Lista lst){
    return lst->fim==max;
}

int insere_elem(Lista lst, char elem[]){
    if(lst==NULL || lista_cheia(lst))
        return 0;

    strcpy(lst->no[lst->fim],elem);
    lst->fim++;
    return 1;
}

int remove_elem(Lista lst, char elem[]){
    if(lst==NULL || lista_vazia(lst)) return 0;

    int i, aux=0;

    while(aux<lst->fim && strcmp(lst->no[aux],elem)!=0)
        aux++;

    if(aux==lst->fim) return 0;

    for(i=aux;i<lst->fim;i++)
        strcpy(lst->no[i],lst->no[i+1]);

    lst->fim--;
    return 1;
}

int get_pos(Lista lst, int pos, char *elem[]){
    if(lst==NULL || pos<0 || pos>max || pos>=lst->fim)
        return 0;

    strcpy(elem,lst->no[pos]);
    return 1;
}
