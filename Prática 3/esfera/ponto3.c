
/*
    TAD - ESFERA
    Feito por Marcela Neves Belchior
    Data: 29/08/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto3.h"

struct ponto3{
    double x, y, z;
};

Ponto * cria_pto(){
    Ponto *p;
    p = (Ponto *) malloc(sizeof(Ponto));
    return p;
}

int set_value(Ponto *p, double X, double Y, double Z){
    if(p==NULL) return 0;

    p->x = X;
    p->y = Y;
    p->z = Z;
    return 1;
}

/* Chamada da função: get_value(p,&x,&y,&z); */
int get_value(Ponto *p, double *X, double *Y, double *Z){
    if(p==NULL) return 0;

    *X = p->x;
    *Y = p->y;
    *Z = p->z;
    return 1;
}

void delete(Ponto **p){
    free(*p);
    *p = NULL;
}

int distancia(Ponto *P1, Ponto *P2, double *dist){
    if(P1==NULL || P2==NULL)
        return 0;

    *dist = sqrt(pow((P2->x-P1->x),2)+pow((P2->y-P1->y),2)+pow((P2->z-P1->z),2));

    return 1;
}

void print_pto(Ponto *p){
    printf("(%.2f, %.2f, %.2f)", p->x, p->y, p->z);
}

