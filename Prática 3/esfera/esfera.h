
/*
    TAD - ESFERA
    Feito por Marcela Neves Belchior
    Data: 29/08/2020
*/

#include "ponto3.h"

typedef struct esfera Esfera;

Esfera * cria_esfera(Ponto *, Ponto *);
int get_valueE(Esfera *, double **, double **);
void libera_esfera(Esfera **);
int raio(Esfera *, double *);
int area(Esfera *, double *);
int volume(Esfera *, double *);
