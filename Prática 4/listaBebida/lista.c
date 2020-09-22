
/*
    LISTA ESTÁTICA/SEQUENCIAL - BEBIDAS
    Feito por Marcela Neves Belchior
    Data: 06/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#define MAX 10

struct lista{
    Bebida no[MAX];
    int fim;
};

Lista inicializa_lista(){
    Lista lst;
    lst = (Lista) malloc(sizeof(struct lista));

    if(lst!=NULL)
        lst->fim = 0;

    return lst;
}

int lista_vazia(Lista lst){
    return lst->fim==0;
}

int lista_cheia(Lista lst){
    return lst->fim==MAX;
}

int insere_ord(Lista lst, Bebida elem){
    if(lst==NULL || lista_cheia(lst))
        return 0;

    if(lista_vazia(lst) || strcmp(elem.nome,lst->no[lst->fim-1].nome)>0){
        strcpy(lst->no[lst->fim].nome,elem.nome);
        lst->no[lst->fim].volume = elem.volume;
        lst->no[lst->fim].preco = elem.volume;
    }else{
        int i, aux=0;
        while(strcmp(elem.nome,lst->no[aux].nome)>=0)
            aux++;
        for(i=lst->fim;i>aux;i--){
            strcpy(lst->no[i].nome,lst->no[i-1].nome);
            lst->no[i].volume = lst->no[i-1].volume;
            lst->no[i].preco = lst->no[i-1].preco;
        }
        strcpy(lst->no[aux].nome,elem.nome);
        lst->no[aux].volume = elem.volume;
        lst->no[aux].preco = elem.preco;
    }
    lst->fim++;
    return 1;
}

int remove_ord(Lista lst, Bebida elem){
    if(lst==NULL || lista_vazia(lst) || strcmp(elem.nome,lst->no[0].nome)<0 || strcmp(elem.nome,lst->no[lst->fim-1].nome)>0)
        return 0;

    int i, aux=0;

    while(aux<lst->fim && strcmp(lst->no[aux].nome,elem.nome)<0)
        aux++;

    if(aux==lst->fim || strcmp(lst->no[aux].nome,elem.nome)>0)
        return 0;

    for(i=aux+1;i<lst->fim;i++){
        strcpy(lst->no[i-1].nome,lst->no[i].nome);
        lst->no[i-1].volume = lst->no[i].nome;
        lst->no[i-1].preco = lst->no[i].preco;
    }
    lst->fim--;
    return 1;
}

int get_pos(Lista lst, int pos, Bebida *elem){
    if(lst==NULL || pos < 0 || pos > MAX || pos >=lst->fim)
        return 0;

    strcpy((*elem).nome,lst->no[pos].nome);
    (*elem).volume = lst->no[pos].volume;
    (*elem).preco = lst->no[pos].preco;
    return 1;
}
