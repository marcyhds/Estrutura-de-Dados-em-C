
/*
    LISTA DINÂMICA/ENCADEADA - CIRCULAR
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

typedef struct no * Lista;
Lista cria_lista();
int lista_vazia(Lista);
int insere_inicio(Lista *, int);
int remove_final(Lista *, int *);
int insere_final(Lista *, int);
int remove_inicio(Lista *, int *);
int obtem_valor_elem(Lista *, int, int *);
