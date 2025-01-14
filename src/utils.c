#include "../include/utils.h"

char *remove_new_line(char *linha) {
  size_t len = strlen(linha);

  while (len > 0 && (linha[len - 1] == '\n' || linha[len - 1] == '\r')) {
    linha[len - 1] = '\0';
    len--;
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
  if (lista_palavras == NULL) {
    perror("Erro ao alocar memória para as palavras");
    fclose(arquivo);
    exit(1);
  }

  char linha[50];
  int i = 0;
  while (fgets(linha, sizeof(linha), arquivo)) {
    remove_new_line(linha);
    lista_palavras[i] = strdup(linha);
    if (lista_palavras[i] == NULL) {
      perror("Erro ao duplicar a palavra");
      fclose(arquivo);
      exit(1);
    }
    i++;
  }
  fclose(arquivo);

  printf("\nPalavras:\n");
  for (int i = 0; i < qtdPalavras; i++) {
    printf("%s ", lista_palavras[i]);
    free(lista_palavras[i]);
  }
  free(lista_palavras);
}

void imprimir_tabuleiro(char **tabuleiro, int linhas, int colunas) {
  printf("\nTabuleiro:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}

void imprimir_resultados() {
  printf("Imprimindo resultados (completo)...\n");
  // implementar a leitura dos resultados armazenados na AVL ou outra estrutura
}

void liberar_recursos() {
  printf("Liberando recursos alocados...\n");
  // implementar a liberação de memória de AVL e Trie aqui
}
