#include <stdio.h>

int main() {
  int stadiumCapacity;
  int numberOfFans;

  printf("Classificação do nivel da partida com base na quantidade de torcedores\n");

  printf("Digite a capacidade do Estádio: ");
  scanf("%d", &stadiumCapacity);

  printf("Digite o número de torcedores: ");
  scanf("%d", &numberOfFans);

  if (numberOfFans <= (stadiumCapacity * 50 / 100)) {
    printf("Morumbis\n");
  } else if (numberOfFans < (stadiumCapacity * 70 / 100)) {
    printf("Público razoável\n");
  } else if (numberOfFans < (stadiumCapacity * 90 / 100)) {
    printf("Ótima presença de público\n");
  } else {
    printf("Lotado\n");
  }

  return 0;
}
