#include <stdio.h>

int main() {
  int AGE_LIMIT = 20;
  int playerAge;
  

  printf("Verificar se jogador pode jogar\n");

  printf("Digite a idade do jogador:");
  if(scanf("%d", &playerAge) && playerAge < AGE_LIMIT) {
    printf("Idade minima de jogador não permitida");
  } else {
    printf("Idade de jogador permitida, pode jogar!");
  }

  return 0;
}