#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

// Declaracao do tipo lista
struct lista {
    struct aluno dados[MAX];
    int qtd;
};

// Cria a estrutura de dados em memoria
Lista* cria_lista() {
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if (li != NULL)
        li->qtd = 0;
    return li;
}

// Destroi a estrutura de dados da memoria
void libera_lista(Lista* li) {
    free(li);
}

// Verifica o tamanho da lista
int tamanho_lista(Lista* li) {
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

// Verifica se a lista esta vazia
int lista_vazia(Lista* li) {
    if (li == NULL)
        return 0;
    else
        return (li->qtd == 0);

}

// Verifica se a lista esta cheia
int lista_cheia(Lista* li) {
    if (li == NULL)
        return 0;
    else
        return (li->qtd == MAX);
}

int insere_lista_final(Lista* li, struct aluno info) {
    if (li == NULL)
        return 0;
    if (li->qtd == MAX)
        return 0;
    li->dados[li->qtd] = info;
    li->qtd++;
    return 1;
}

void imprime_lista(Lista* li) {
    printf("\n\n");

    if (li == NULL) {
        printf("Lista nao existe!\n");
        return;
    }

    if (li->qtd == 0) {
        printf("Lista vazia!\n");
        return;
    }

    printf("==================================================\n");
    printf("CONTEUDO DA LISTA SEQUENCIAL ESTATICA \n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < li->qtd; i++) {
        printf("POS %d ->| %d %s %.1f %.1f %.1f |<- \n",
               i,
               li->dados[i].matricula,
               li->dados[i].nome,
               li->dados[i].n1,
               li->dados[i].n2,
               li->dados[i].n3);
    }
    printf("--------------------------------------------------\n");
    printf("Tamanho: %d \n", li->qtd);
    printf("--------------------------------------------------\n");
}
