#include "../include/utils.h"

char *remove_new_line(char *linha) {
  size_t len = strlen(linha);

  if (len > 0 && linha[len - 1] == '\n') {
    linha[len - 1] = '\0';
  }

  return linha;
}

int contar_linhas(const char *caminhoArquivo) {
  FILE *arquivo = fopen(caminhoArquivo, "r");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo %s", caminhoArquivo);
    exit(1);
  }
  int linhas = 0;
  char c;

  while ((c = fgetc(arquivo)) != EOF) {
    if (c == '\n') {
      linhas++;
    }
  }

  fclose(arquivo);
  return linhas;
}

void imprimir_palavras(const char *caminhoPalavras) {
  FILE *arquivo = fopen(caminhoPalavras, "r");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo palavras.txt");
    exit(1);
  }
  int qtdPalavras = contar_linhas(caminhoPalavras);
  char **lista_palavras = malloc(qtdPalavras * sizeof(char *));
  char linha[50];
  int i = 0;
  while (fgets(linha, sizeof(linha), arquivo)) {
    remove_new_line(linha);
    lista_palavras[i] = strdup(linha);
    i++;
  }
  fclose(arquivo);
  printf("\nPalavras:\n");
  for (int i = 0; i < qtdPalavras; i++) {
    printf("%s ", lista_palavras[i]);
  }
}

void imprimir_tabuleiro(char **tabuleiro) {
  printf("\nTabuleiro:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}
