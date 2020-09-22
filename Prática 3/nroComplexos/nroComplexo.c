
/*
    TAD - NÚMEROS COMPLEXOS
    Feito por Marcela Neves Belchior
    Data: 28/08/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include "nroComplexo.h"

struct nroComplexo{
    float a, b;
};

Complexo * cria_nro(float a, float b){
    Complexo * c;
    c = (Complexo *) malloc(sizeof(Complexo));

    c->a = a;
    c->b = b;

    return c;
}

int get_value(Complexo *c, float *A, float *B){
    if(c==NULL) return 0;

    *A = c->a;
    *B = c->b;

    return 1;
}

void libera_nro(Complexo **c){
    free(*c);
    *c = NULL;
}

Complexo * soma(Complexo * C1, Complexo * C2){
    Complexo * C3;
    C3 = (Complexo *) malloc(sizeof(Complexo));

    if(C3 != NULL){
        C3->a = (C1->a + C2->a);
        C3->b = (C1->b + C2->b);
    }

    return C3;
}

Complexo * sub(Complexo * C1, Complexo * C2){
    Complexo * C3;
    C3 = (Complexo *) malloc(sizeof(Complexo));

    if(C3 != NULL){
        C3->a = (C1->a - C2->a);
        C3->b = (C1->b - C2->b);
    }

    return C3;
}

Complexo * mult(Complexo * C1, Complexo * C2){
    Complexo * C3;
    C3 = (Complexo *) malloc(sizeof(Complexo));

    if(C3 != NULL){
        C3->a = (C1->a*C2->a) + (C1->b*C2->b*(-1));
        C3->b = (C1->a*C2->b) + (C1->b*C2->a);
    }

    return C3;
}

void printComplexo(Complexo * C1){

    printf("%.1f", C1->a);

    if(C1->b < 0)
        printf("%.1fi", C1->b);
    else
        printf("+%.1fi", C1->b);
}

