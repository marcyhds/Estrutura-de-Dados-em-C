
/*
    LISTA DINÂMICA/ENCADEADA - CABEÇALHO NÃO ORDENADA
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

typedef struct no * Lista;
Lista criar_lista();
int lista_vazia(Lista);
int insere_elem(Lista *, int);
int remove_elem(Lista *, int);
int obtem_elem_valor(Lista *, int, int *);
