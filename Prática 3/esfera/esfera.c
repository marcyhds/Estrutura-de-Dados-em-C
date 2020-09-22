
/*
    TAD - ESFERA
    Feito por Marcela Neves Belchior
    Data: 29/08/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
#include "esfera.h"
#include "ponto3.h"

struct esfera{
    Ponto *p1, *p2;
};

Esfera * cria_esfera(Ponto *P1, Ponto *P2){
    Esfera *e;
    e = (Esfera *) malloc(sizeof(Esfera));

    e->p1 = P1;
    e->p2 = P2;

    return e;
}

void libera_esfera(Esfera **e){
    free(*e);
    *e = NULL;
}

int get_valueE(Esfera *e, double **P1, double **P2){
    if(e==NULL || P1==NULL || P2==NULL) return 0;

    *P1 = e->p1;
    *P2 = e->p2;
    return 1;
}

int raio(Esfera *e, double *r){
    if(e==NULL) return 0;

    double aux;
    distancia(e->p1,e->p2,&aux);
    *r = aux;

    return 1;
}

int area(Esfera *e, double *a){
    if(e==NULL) return 0;

    *a = 4 * PI * pow(raio(e,&a),2);

    return 1;
}

int volume(Esfera *e, double *v){
    if(e==NULL) return 0;

    *v = (4 * PI * pow(raio(e,&v),3))/3;

    return 1;
}
