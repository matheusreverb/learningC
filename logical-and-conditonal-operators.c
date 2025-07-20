#include <stdio.h>

// =  -> atribuição
// == -> igualdade
// >  -> maior
// <  -> menor
// >= -> maior ou igual
// <= -> menor ou igual
// != -> diferente
// && -> AND - E
// || -> OR - OU

int main() {
    int number;

    printf("Digite um número maior que 10: ");

    if (scanf("%d", &number) != 1) {
        printf("O valor digitado não é um número inteiro.\n");
        while (getchar() != '\n');
        main();
        return 0;
    }

    if (number < 10) {
        printf("O número que você digitou é menor que 10.\n");
        main();
        return 0;
    }

    printf("O número que você digitou é %d.\n", number);
    return 1;
}
