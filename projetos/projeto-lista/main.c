#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

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

    printf("Tamanho da lista: %d \n", tamanho_lista(listaAluno));

    libera_lista(listaAluno);
    return 0;
}



