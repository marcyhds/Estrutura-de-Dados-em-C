
/*
    LISTA DINÂMICA/ENCADEADA - ORDENADA DECRESCENTE
    Feito por Marcela Neves Belchior
    Data: 22/09/2020
*/

typedef struct no *Lista;
Lista inicializar_lista();
int lista_vazia(Lista);
void lista_cheia(Lista);
int insere_ord(Lista *, int);
int remove_ord(Lista *, int);
int get_pos(Lista *, int, int *);
int remove_pos(Lista *, int, int *);
