#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *remove_new_line(char *linha);
int contar_linhas(const char *caminhoArquivo);
void imprimir_tabuleiro(char **tabuleiro, int linhas, int colunas);
void imprimir_palavras(const char *caminhoPalavras);
void imprimir_resultados();
void liberar_recursos();

#endif
