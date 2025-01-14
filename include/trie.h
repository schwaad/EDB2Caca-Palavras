#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef TRIE_H
#define TRIE_H
#define ALFABETO 26

typedef struct Trie {
  struct Trie *filhos[ALFABETO];
  bool fim_da_palavra;
} Trie;

Trie *criar_no_trie();
void inserir(Trie *raiz, const char *palavra);
bool buscar(Trie *raiz, const char *palavra);
void liberar_trie(Trie *raiz);

#endif
