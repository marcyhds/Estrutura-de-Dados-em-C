
/*
    TAD - NÚMEROS COMPLEXOS
    Feito por Marcela Neves Belchior
    Data: 28/08/2020
*/

typedef struct nroComplexo Complexo;

Complexo * cria_nro(float, float);
int get_value(Complexo *, float *, float *);
void libera_nro(Complexo **);
Complexo * soma(Complexo *, Complexo *);
Complexo * sub(Complexo *, Complexo *);
Complexo * mult(Complexo *, Complexo *);
void printComplexo(Complexo *);

