#include <stdio.h>

int main() {
  int numberOfGoals = 0;

  printf("Avaliar o desempenho do jogador\n");
  printf("Quantos gols o jogador marcou? ");
  scanf("%d", &numberOfGoals);

  if(numberOfGoals > 10) {
    printf("Excelente temporada!");
  } else if(numberOfGoals >= 5 && numberOfGoals <= 10) {
    printf("Boa temporada!");
  } else if(numberOfGoals < 5) {
    printf("Temporada abaixo do esperado");
  }

  return 0;
}