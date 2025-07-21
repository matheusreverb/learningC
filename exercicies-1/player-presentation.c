#include <stdio.h>

int main() {
    char playerName[50];
    int age;
    int numberOfGoals;

    printf("Digite o nome do jogador: ");
    scanf("%49s", playerName);

    while (1) {
        printf("Digite a idade do jogador: ");
        if (scanf("%d", &age) == 1) {
            break;
        } else {
            printf("Valor inválido! Digite um número inteiro para a idade.\n");
            while (getchar() != '\n');
        }
    }

    while (1) {
        printf("Digite a quantidade de gols que o jogador fez durante sua carreira: ");
        if (scanf("%d", &numberOfGoals) == 1) {
            break;
        } else {
            printf("Valor inválido! Digite um número inteiro para os gols.\n");
            while (getchar() != '\n');
        }
    }

    printf("\n--- Dados do Jogador ---\n");
    printf("Nome: %s\n", playerName);
    printf("Idade: %d\n", age);
    printf("Gols na carreira: %d\n", numberOfGoals);

    return 0;
}
