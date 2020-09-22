
/*
    TAD - ESFERA
    Feito por Marcela Neves Belchior
    Data: 29/08/2020
*/

typedef struct ponto3 Ponto;
Ponto * cria_pto();
int set_value(Ponto *, double, double, double);
int get_value(Ponto *, double *, double *, double *);
void delete(Ponto **);
int distancia(Ponto *, Ponto *, double *);
void print_pto(Ponto *);

