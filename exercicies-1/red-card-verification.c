#include <stdio.h>

int main() {
  int yellowCard = 2;

  if(yellowCard > 1) {
    printf("Jogador recebeu o segundo cartão amarelo\n");
    printf("Jogador expulso\n");
    return 0;
  }

  if(yellowCard == 1) {
    printf("Jogador recebeu um cartão amarelo");
    return 0;
  }

  printf("O jogador não possui nenhum cartão no jogo");
  
  return 0;
}