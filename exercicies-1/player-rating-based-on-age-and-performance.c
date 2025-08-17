#include <stdio.h>

int main() {
  int playerAge = 0;
  int playerGoals = 0;

  printf("Classificação do jogador baseada em idade e desempenho\n");

  printf("Digite a idade do jogador: ");
  scanf("%d", &playerAge);

  printf("Digite a quantidade de gols marcados: ");
  scanf("%d", &playerGoals);

  if (playerAge > 20) {
    if (playerGoals > 15) {
      printf("Jogador experiente em grande fase!\n");
    } else {
      printf("Estevão\n");
    }
  } else {
    if (playerGoals > 10) {
      printf("Jovem talento promissor!\n");
    } else {
      printf("Jovem em desenvolvimento\n");
    }
  }

  return 0;
}
