#include <stdio.h>

int main() {
  int firstPlayerAmmount = 0;
  int secondPlayerAmmount = 0;
  int diff = 0;

  printf("Saiba qual a diferença entre valores do jogador 1 para o jogador 2\n");

  printf("Digite o valor do primeiro jogador: ");
  scanf("%d", &firstPlayerAmmount);

  printf("Digite o valor do segundo jogador: ");
  scanf("%d", &secondPlayerAmmount);
  
  diff = (firstPlayerAmmount > secondPlayerAmmount) 
          ? firstPlayerAmmount - secondPlayerAmmount 
          : secondPlayerAmmount - firstPlayerAmmount;

  printf("Jogador 1: %d\n", firstPlayerAmmount);
  printf("Jogador 2: %d\n", secondPlayerAmmount);
  printf("Diferença: %d\n", diff);

  return 0;
}