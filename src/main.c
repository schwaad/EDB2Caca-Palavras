#include "../include/jogo.h"

int main() {
  char **lista_palavras;
  lista_palavras = ler_palavras("../game/palavras.txt");
  char **tabuleiro;
  tabuleiro = ler_tabuleiro("../game/tabuleiro.txt");
  printf("Palavras:\n");
  for (int i = 0; i < 4; i++) {
    printf("%s ", lista_palavras[i]);
  }
  printf("\nTabuleiro:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}
