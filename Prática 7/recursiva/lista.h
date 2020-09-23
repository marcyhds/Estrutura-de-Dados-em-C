
/*
    LISTA DINÂMICA/ENCADEADA - RECURSIVA
    Feito por Marcela Neves Belchior
    Data: 20/09/2020
*/

typedef struct no *Lista;
Lista cria_lista();
int lista_vazia(Lista);
int insere_ord(Lista *, double);
int remove_ord(Lista *, double);
int obtem_elem(Lista *, int, double *);
void imprime(Lista);
