#include "./avl.h"
#include "./trie.h"
#include "./utils.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef JOGO_H
#define JOGO_H

char **ler_tabuleiro(const char *caminhoTabuleiro, int *linhas, int *colunas);
Trie *ler_palavras(const char *caminhoPalavras);
#endif
