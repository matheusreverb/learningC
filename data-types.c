#include <stdio.h>

int main() {
  int numero = 10;
  float numeroQuebrado = 50.48;
  char letra = 'A';
  char nome[8] = "Matheus";

  printf("Numero: %d \n", numero);
  printf("Flutuante: %.2f \n", numeroQuebrado);
  printf("Letra: %c \n", letra);
  printf("Nome: %s \n", nome);
  
  return 0;
}