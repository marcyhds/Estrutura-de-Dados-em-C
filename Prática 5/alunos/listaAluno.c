
/*
    LISTA DINÂMICA/ENCADEADA - ALUNO
    Feito por Marcela Neves Belchior
    Data: 06/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaAluno.h"

struct no{
    Aluno aluno;
    struct no *prox;
};

Alunos cria_lista(){
    return NULL;
}

int lista_vazia(Alunos a){
    return (a==NULL);
}

int insere_elem(Alunos *a, Aluno elem){
    Alunos n = (Alunos) malloc(sizeof(struct no));
    if(n==NULL) return 0;

    n->aluno.mat = elem.mat;
    strcpy(n->aluno.nome,elem.nome);
    n->aluno.media = elem.media;
    n->aluno.faltas = elem.faltas;

    n->prox = *a;
    *a = n;

    return 1;
}

int remove_elem(Alunos *a, Aluno elem){
    if(lista_vazia(*a))
        return 0;

    Alunos aux = *a;

    if(elem.mat == (*a)->aluno.mat){
        (*a) = aux->prox;
        free(aux);
        return 1;
    }

    while(aux->prox!=NULL && aux->prox->aluno.mat != elem.mat)
        aux = aux->prox;

    if(aux->prox==NULL)
        return 0;

    Alunos aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);
    return 1;
}

int get_pos(Alunos *a, int pos, Aluno *elem){
    if(lista_vazia(*a) || pos<0)
        return 0;

    Alunos aux = *a;
    int cont=0;

    while(aux->prox!=NULL && cont<pos){
        aux = aux->prox;
        cont++;
    }

    if(cont!=pos){
        return 0;
    }else{
        (*elem).mat = (aux)->aluno.mat;
        strcpy((*elem).nome,(aux)->aluno.nome);
        (*elem).media = (aux)->aluno.media;
        (*elem).faltas = (aux)->aluno.faltas;
        return 1;
    }
}

int size_lista(Alunos *a, int *tam){
    if(lista_vazia(*a)){
        *tam = 0;
    }else{
        Alunos aux = *a;
        int cont=0;
        while(aux->prox!=NULL){
            aux = aux->prox;
            cont++;
        }
        *tam = cont+1;
    }

    return 1;
}

