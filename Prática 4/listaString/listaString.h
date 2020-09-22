typedef struct lista * Lista;
Lista inicializar_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, char elem[]);
int remove_elem(Lista lst, char elem[]);
void imprime(Lista lst);
