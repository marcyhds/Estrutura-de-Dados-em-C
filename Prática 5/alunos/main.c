
/*
    LISTA DINÂMICA/ENCADEADA - ALUNO
    Feito por Marcela Neves Belchior
    Data: 06/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaAluno.h"

void imprime_lista(Alunos);

int main()
{
    Aluno a1, a2;
    a1.mat = 1085;
    strcpy(a1.nome,"Marcela");
    a1.media = 80;
    a1.faltas = 0;
    a2.mat = 9011;
    strcpy(a2.nome,"Joao");
    a2.media = 60;
    a2.faltas = 9;

    Alunos A;

    A = cria_lista();
    insere_elem(&A,a1);
    insere_elem(&A,a2);

    imprime_lista(A);

    int tam;
    size_lista(&A,&tam);
    printf("Tamanho da lista: %d\n", tam);

    remove_elem(&A,a1);

    imprime_lista(A);

    size_lista(&A,&tam);
    printf("Tamanho da lista: %d\n", tam);

    A = cria_lista();

    return 0;
}


void imprime_lista(Alunos a){
    if(lista_vazia(a))
        printf("{}\n");
    else{
        printf("{");
        Alunos aux = a;
        Aluno elem;
        int pos=0;
        while(get_pos(&aux,pos,&elem)!=0){
            printf("\nMatricula: %d\n", elem.mat);
            printf("Nome: %s\n", elem.nome);
            printf("Media: %.2f\n", elem.media);
            printf("Faltas: %d\n", elem.faltas);
            pos++;
        }
        printf("}\n");
    }
    return;
}

