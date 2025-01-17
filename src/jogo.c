#include "../include/jogo.h"

char **ler_tabuleiro(const char *caminhoTabuleiro, int *linhas, int *colunas) {
  FILE *arquivo = fopen(caminhoTabuleiro, "r");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo tabuleiro.txt.");
    exit(1);
  }
  fscanf(arquivo, "%d %d\n", linhas, colunas);

  char **tabuleiro = (char **)malloc(*linhas * sizeof(char *));
  for (int i = 0; i < *linhas; i++) {
    tabuleiro[i] = (char *)malloc(*colunas * sizeof(char));
  }

  for (int i = 0; i < *linhas; i++) {
    for (int j = 0; j < *colunas; j++) {
      fscanf(arquivo, " %c", &tabuleiro[i][j]);
    }
  }

  fclose(arquivo);
  return tabuleiro;
}

Trie *ler_palavras(const char *caminhoPalavras) {
  FILE *arquivo = fopen(caminhoPalavras, "r");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo palavras.txt");
    exit(1);
  }
  int qtdPalavras = contar_linhas(caminhoPalavras);
  Trie *trie = criar_no_trie();
  char linha[50];
  int i = 0;
  while (fgets(linha, sizeof(linha), arquivo)) {
    remove_new_line(linha);
    inserir(trie, linha);
    i++;
  }
  fclose(arquivo);
  return trie;
}
