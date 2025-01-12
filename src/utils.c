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
