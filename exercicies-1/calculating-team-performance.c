// 4 - Calculando o Aproveitamento de um Time

// Crie um programa que peça o número de vitórias, 
// empates e derrotas de um time. Depois, 
// calcule o número total de pontos, seguindo a regra:

// Vitória = 3 pontos
// Empate = 1 ponto
// Derrota = 0 pontos

#include <stdio.h>

int main() {
  int victories;
  int defeats;
  int draws;

  int totalVictoriesPoints = 0;

  while (1) {
    printf("Digite o número de vitórias:");
    if(scanf("%d", &victories) == 1) {
      break;
    } else {
      printf("O Valor de vitórias é inválido");
      while (getchar() != '\n');
    }
  }

  while (1) {
    printf("Digite o número de empates:");
    if(scanf("%d", &draws) == 1) {
      break;
    } else {
      printf("O Valor de empates é inválido");
      while (getchar() != '\n');

    }
  }

  while (1) {
    printf("Digite o número de derrotas:");
    if(scanf("%d", &defeats) == 1) {
      break;
    } else {
      printf("O Valor de derrotas é inválido");
      while (getchar() != '\n');

    }
  }
  
  totalVictoriesPoints = victories * 3;

  printf("Vitorias: %d\n", victories);
  printf("Empates: %d\n", draws);
  printf("Derrotas: %d\n", defeats);
  printf("Número total de pontos: %d\n", totalVictoriesPoints + draws);

  return 1;
}