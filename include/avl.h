#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef AVL_H
#define AVL_H

typedef struct AVL {
  char *dado;
  struct AVL *esquerdo;
  struct AVL *direito;
  int altura;
} AVL;

int obter_altura(AVL *no);
int calcular_fator_de_balanceamento(AVL *no);
AVL *criar_no_avl(char *dado);
AVL *rotacao_direita(AVL *y);
AVL *rotaca_esquerda(AVL *x);
AVL *inserir_no(AVL *no, char *dado);
AVL *menor_valorNo(AVL *no);
AVL *remover_no(AVL *raiz, char *dado);
void imprimir_em_ordem(AVL *raiz);

#endif
