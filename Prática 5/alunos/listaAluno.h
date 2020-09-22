
/*
    LISTA DINÂMICA/ENCADEADA - ALUNO
    Feito por Marcela Neves Belchior
    Data: 06/09/2020
*/

typedef struct aluno{
    unsigned int mat;
    char nome[20];
    float media;
    int faltas;
}Aluno;

typedef struct no * Alunos;

Alunos cria_lista();
int lista_vazia(Alunos);
int insere_elem(Alunos *, Aluno);
int remove_elem(Alunos *, Aluno);
int get_pos(Alunos *, int, Aluno *);
int size_lista(Alunos *, int *);
