#include "../include/trie.h"

Trie *criar_no_trie() {
  Trie *novo_no = (Trie *)malloc(sizeof(Trie));
  if (novo_no == NULL) {
    perror("Erro ao alocar memória para o nó da Trie");
    exit(1);
  }

  novo_no->fim_da_palavra = false;
  for (int i = 0; i < ALFABETO; i++) {
    novo_no->filhos[i] = NULL;
  }

  return novo_no;
}

void inserir(Trie *raiz, const char *palavra) {
  Trie *atual = raiz;

  for (int i = 0; palavra[i] != '\0'; i++) {
    if (palavra[i] < 'a' || palavra[i] > 'z') {
      fprintf(stderr, "Erro: palavra contém caractere inválido: '%c'\n",
              palavra[i]);
      return;
    }
    int indice = palavra[i] - 'a';

    if (atual->filhos[indice] == NULL) {
      atual->filhos[indice] = criar_no_trie();
    }

    atual = atual->filhos[indice];
  }

  atual->fim_da_palavra = true;
}

bool buscar(Trie *raiz, const char *palavra) {
  Trie *atual = raiz;

  for (int i = 0; palavra[i] != '\0'; i++) {
    int indice = palavra[i] - 'a';

    if (atual->filhos[indice] == NULL)
      return false;

    atual = atual->filhos[indice];
  }

  return atual->fim_da_palavra;
}

void liberar_trie(Trie *raiz) {
  if (raiz == NULL)
    return;

  for (int i = 0; i < ALFABETO; i++)
    liberar_trie(raiz->filhos[i]);

  free(raiz);
}
