// 3 - Conversão de Minutos para Tempo de Jogo

// Peça ao usuário para digitar o tempo jogado em minutos. Depois, 
// converta esse valor para horas e minutos e exiba o resultado.

#include <stdio.h>

int main() {
  int playTimeInMinutes;

  int hour = 0;
  int minutes = 0;

  while (1) {
    printf("Digite o tempo jogo em minutos que seja maior que zero:");
    if(scanf("%d", &playTimeInMinutes) == 1 && playTimeInMinutes > 0) {
      break;
    } else {
      while (getchar() != '\n');
      printf("O tempo de jogo digitado é inválido \n");
    }  
  }

  hour = playTimeInMinutes / 60;
  minutes = playTimeInMinutes % 60;

  // while(1) {
  //   if(playTimeInMinutes < 60) {
  //     minutes = playTimeInMinutes;
  //     break;
  //   } else {
  //     playTimeInMinutes -= 60;
  //     hour++;
  //   }
  // }
  
  printf("O tempo total de jogo é de: %d horas e %d minutos", hour, minutes);

  return 1;
}

