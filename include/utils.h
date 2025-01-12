#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef UTILS_H
#define UTILS_H

char *remove_new_line(char *linha);
int contar_linhas(const char *caminhoArquivo);
void imprimir_tabuleiro(char **tabuleiro);
void imprimir_palavras(const char *caminhoPalavras);

#endif
