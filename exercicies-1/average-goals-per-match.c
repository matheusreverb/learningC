// 2 - Média de Gols por Partida

// Escreva um programa que receba o número total de gols de 
// um jogador e a quantidade de partidas jogadas.
// Depois, calcule e exiba a média de gols por partida.

#include <stdio.h>

int main() {
  int totalNumberOfGoalsOfPlayer;
  int playedGames;
  float averageGoalsPerMatch;

  printf("\n ---------- MEDIA DE GOLS DO JOGADOR ---------- \n");

  while(1) {
    printf("Quantos jogos o jogador jogou?:");
    if(scanf("%d", &playedGames) == 1 && playedGames > 0) {
      break;
    } else {
      printf("Valor invalido! \n Digite um número inteiro maior que zero\n");
      while (getchar() != '\n');
    }
  }

  while(1) {
    printf("Qual foi o número de gols da carreira do jogador:");
    if(scanf("%d", &totalNumberOfGoalsOfPlayer) == 1 && totalNumberOfGoalsOfPlayer > 0) {
      break;
    } else {
      printf("Valor invalido! \n Digite um número inteiro maior que zero\n");
      while (getchar() != '\n');
    }
  }

  averageGoalsPerMatch = (float) totalNumberOfGoalsOfPlayer / playedGames ;
  printf("A média de gol por jogo do jogador é: %.2f", averageGoalsPerMatch);

  return 1;
}