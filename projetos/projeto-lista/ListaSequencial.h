#define MAX 100

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct lista Lista;

// Criacao e destruicao da lista
Lista* cria_lista();
void libera_lista(Lista* li);

// Busca de elementos
int busca_lista_pos(Lista* li, int pos, struct aluno *info);
int busca_lista_mat(Lista* li, int mat, struct aluno *info);

// Insercao de elementos
int insere_lista_inicio(Lista* li, struct aluno info);
int insere_lista_final(Lista* li, struct aluno info);
int insere_lista_ordenada(Lista* li, struct aluno info);

// Remocao de elementos
int remove_lista(Lista* li, int mat);
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);

// Informacoes sobre a lista
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);


