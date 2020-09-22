#include <stdio.h>
#include <stdlib.h>
#include "listaString.h"
#include <string.h>
#define max 20

struct lista{
    char no[10];
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
    if(lst->fim == 0)
        return 1;
    else
        return 0;
}

int lista_cheia(Lista lst){
    if(lst->fim == max)
        return 1;
    else
        return 0;
}

int insere_elem(Lista *lst, char elem[]){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    strcpy(lst->no[lst->fim],elem);
    lst->fim++;
    return 1;
}



int remove_elem(Lista *lst, char elem[]){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0;
    int i, Aux = 0;

    while(Aux < lst->fim && strcmp(lst->no[Aux],elem)!=0)
        Aux++;

    if(Aux == lst->fim)
        return 0;

    for(i = Aux+1; i < lst->fim; i++)
        strcpy(lst->no[i-1],lst->no[i]);

    lst->fim--;
    return 1;
}

void imprime(Lista lst){
    if(lista_vazia(lst)) printf("{}");

    int i, j;
    for(i=0;i<lst->fim;i++){
        for(j=0;lst->no[j]!='/0';j++){
            printf("%c ", lst->no[j]);
        }
    }
}
