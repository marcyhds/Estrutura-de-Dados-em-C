
/*
    LISTA ESTÁTICA/SEQUENCIAL - STRINGS
    Feito por Marcela Neves Belchior
    Data: 04/09/2020
*/

typedef struct lista * Lista;
Lista inicializar_lista();
int lista_vazia(Lista);
int lista_cheia(Lista);
int insere_elem(Lista, char []);
int remove_elem(Lista, char []);
int get_pos(Lista, int, char *[]);
