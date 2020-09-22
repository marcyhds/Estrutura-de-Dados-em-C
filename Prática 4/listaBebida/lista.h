
/*
    LISTA ESTÁTICA/SEQUENCIAL - BEBIDAS
    Feito por Marcela Neves Belchior
    Data: 06/09/2020
*/

typedef struct bebida{
    char nome[20];
    int volume;
    float preco;
} Bebida;

typedef struct lista *Lista;
Lista inicializa_lista();
int lista_vazia(Lista);
int lista_cheia(Lista);
int insere_ord(Lista, Bebida);
int remove_ord(Lista, Bebida);
int get_pos(Lista, int, Bebida *);
