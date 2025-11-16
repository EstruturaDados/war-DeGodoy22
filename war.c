#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio:
    Armazena informações sobre cada território:
    - nome: nome do território
    - cor: cor do exército associado
    - tropas: quantidade de tropas naquele território
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    // Entrada de dados
    printf("=== Cadastro de Territorios ===\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        // Lendo nome
        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome); // strings simples sem espaço

        // Lendo cor do exército
        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        // Lendo quantidade de tropas
        printf("Digite o numero de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territorios Cadastrados ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}