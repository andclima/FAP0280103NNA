#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

void cadastrar_aluno(struct aluno *novoAluno) {
    printf(" Informe a matricula: ");
    scanf("%d%*c", &novoAluno->matricula);

    printf(" Informe o nome: ");
    scanf("%s%*c", &novoAluno->nome);

    printf(" Informe a 1a nota: ");
    scanf("%f%*c", &novoAluno->n1);

    printf(" Informe a 2a nota: ");
    scanf("%f%*c", &novoAluno->n2);

    printf(" Informe a 3a nota: ");
    scanf("%f%*c", &novoAluno->n3);
}

int main() {

    printf("=================================\n");
    printf("Implementacao de Lista Sequencial\n");
    printf("=================================\n");
    printf("\n");

    Lista* listaAluno;
    listaAluno = cria_lista();

    struct aluno aluno1;
    aluno1.matricula = 10;
    strcpy(aluno1.nome, "Fulano de Tal");
    aluno1.n1 = 7.5;
    aluno1.n2 = 8.1;
    aluno1.n3 = 9.0;

    insere_lista_final(listaAluno, aluno1);

    struct aluno aluno2;
    aluno2.matricula = 20;
    strcpy(aluno2.nome, "Beltrano Pereira");
    aluno2.n1 = 5.0;
    aluno2.n2 = 8.0;
    aluno2.n3 = 10.0;

    insere_lista_final(listaAluno, aluno2);

    struct aluno aluno3;
    aluno3.matricula = 30;
    strcpy(aluno3.nome, "Sicrano Silva");
    aluno3.n1 = 6.0;
    aluno3.n2 = 7.0;
    aluno3.n3 = 9.0;

    insere_lista_final(listaAluno, aluno3);

    // printf("Tamanho da lista: %d \n", tamanho_lista(listaAluno));

    // imprime_lista(listaAluno);

    int opcao = 0;
    struct aluno *novo = NULL;
    do {
        printf("\n\n");
        printf("------------------------- \n");
        printf("1: Inserir aluno \n");
        printf("2: Imprimir lista \n");
        printf("0: Sair \n");
        printf("------------------------- \n");
        printf("Informe a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                novo = (struct aluno*) malloc(sizeof(struct aluno));
                cadastrar_aluno(novo);
                insere_lista_final(listaAluno, *novo);
                break;
            case 2:
                imprime_lista(listaAluno);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida! %d\n", opcao);
                break;
        }
    } while (opcao != 0);
    return 0;
}



