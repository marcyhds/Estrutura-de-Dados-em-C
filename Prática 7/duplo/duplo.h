
/*
    LISTA DINÂMICA/ENCADEADA - ENCADEAMENTO DUPLO
    Feito por Marcela Neves Belchior
    Data: 23/09/2020
*/

typedef struct no *Lista;
Lista cria_lista();
int lista_vazia(Lista);
int insere_elemento(Lista *, int);
int remove_elemento(Lista *, int);
int insere_ord(Lista *, int);
int remove_ord(Lista *, int);
int obtem_valor_elem(Lista *, int, int *);
