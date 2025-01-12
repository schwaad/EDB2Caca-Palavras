#include "../include/avl.h"

int obter_altura(AVL *avl) {
  if (avl == NULL)
    return -1;
  else
    return avl->altura;
}

int calcular_fator_de_balanceamento(AVL *avl) {
  if (avl == NULL)
    return 0;
  else
    return obter_altura(avl->esquerdo) - obter_altura(avl->direito);
}

AVL *criar_no_avl(char *dado) {
  AVL *avl = (AVL *)malloc(sizeof(AVL));
  avl->dado = dado;
  avl->esquerdo = NULL;
  avl->direito = NULL;
  avl->altura = 0;

  return avl;
}

AVL *rotacao_direita(AVL *y) {
  AVL *x = y->esquerdo;
  AVL *z = x->direito;

  x->direito = y;
  y->esquerdo = z;

  if (obter_altura(y->esquerdo) > obter_altura(y->direito))
    y->altura = 1 + obter_altura(y->esquerdo);
  else
    y->altura = 1 + obter_altura(y->direito);

  if (obter_altura(x->esquerdo) > obter_altura(x->direito))
    x->altura = 1 + obter_altura(x->esquerdo);
  else
    x->altura = 1 + obter_altura(x->direito);

  return x;
}

AVL *rotacao_esquerda(AVL *x) {
  AVL *y = x->direito;
  AVL *z = y->esquerdo;

  y->esquerdo = x;
  x->direito = z;

  if (obter_altura(x->esquerdo) > obter_altura(x->direito))
    x->altura = 1 + obter_altura(x->esquerdo);
  else
    x->altura = 1 + obter_altura(x->direito);

  if (obter_altura(y->esquerdo) > obter_altura(y->direito))
    y->altura = 1 + obter_altura(y->esquerdo);
  else
    y->altura = 1 + obter_altura(y->direito);

  return y;
}

AVL *inserir_no(AVL *no, char *dado) {
  if (no == NULL)
    return criar_no_avl(dado);

  if (strcmp(dado, no->dado) < 0)
    no->esquerdo = inserir_no(no->esquerdo, dado);
  else if (strcmp(dado, no->dado) > 0)
    no->direito = inserir_no(no->direito, dado);
  else
    return no;

  if (obter_altura(no->esquerdo) > obter_altura(no->direito))
    no->altura = 1 + obter_altura(no->esquerdo);
  else
    no->altura = 1 + obter_altura(no->direito);

  int balanceamento = calcular_fator_de_balanceamento(no);

  if (balanceamento > 1 && strcmp(dado, no->esquerdo->dado) == -1)
    return rotacao_direita(no);

  if (balanceamento < -1 && strcmp(dado, no->direito->dado) == 1)
    return rotacao_esquerda(no);

  if (balanceamento > 1 && strcmp(dado, no->esquerdo->dado) == 1) {
    no->esquerdo = rotacao_esquerda(no->esquerdo);
    return rotacao_direita(no);
  }

  if (balanceamento < -1 && strcmp(dado, no->direito->dado) == -1) {
    no->direito = rotacao_direita(no->direito);
    return rotacao_esquerda(no);
  }

  return no;
}

AVL *menor_valorNo(AVL *avl) {
  AVL *atual = avl;

  while (atual->esquerdo != NULL)
    atual = atual->esquerdo;

  return atual;
}

AVL *remover_no(AVL *raiz, char *dado) {
  if (raiz == NULL)
    return raiz;

  if (dado < raiz->dado) {
    raiz->esquerdo = remover_no(raiz->esquerdo, dado);
  } else if (dado > raiz->dado) {
    raiz->direito = remover_no(raiz->direito, dado);
  } else {
    if ((raiz->esquerdo == NULL) || (raiz->direito == NULL)) {
      AVL *temp;

      if (raiz->esquerdo != NULL)
        temp = raiz->esquerdo;
      else
        temp = raiz->direito;

      if (temp == NULL) {
        temp = raiz;
        raiz = NULL;
      } else {
        *raiz = *temp;
      }

      free(temp);
    } else {
      AVL *temp = menor_valorNo(raiz->direito);

      raiz->dado = temp->dado;

      raiz->direito = remover_no(raiz->direito, temp->dado);
    }
  }

  if (raiz == NULL)
    return raiz;

  if (obter_altura(raiz->esquerdo) > obter_altura(raiz->direito))
    raiz->altura = 1 + obter_altura(raiz->esquerdo);
  else
    raiz->altura = 1 + obter_altura(raiz->direito);

  int balanceamento = calcular_fator_de_balanceamento(raiz);

  if (balanceamento > 1 && calcular_fator_de_balanceamento(raiz->esquerdo) >= 0)
    return rotacao_direita(raiz);

  if (balanceamento > 1 &&
      calcular_fator_de_balanceamento(raiz->esquerdo) < 0) {
    raiz->esquerdo = rotacao_esquerda(raiz->esquerdo);
    return rotacao_direita(raiz);
  }

  if (balanceamento < -1 && calcular_fator_de_balanceamento(raiz->direito) <= 0)
    return rotacao_esquerda(raiz);

  if (balanceamento < -1 &&
      calcular_fator_de_balanceamento(raiz->direito) > 0) {
    raiz->direito = rotacao_direita(raiz->direito);
    return rotacao_esquerda(raiz);
  }

  return raiz;
}

void imprimir_em_ordem(AVL *raiz) {
  if (raiz != NULL) {
    imprimir_em_ordem(raiz->esquerdo);
    printf("%s ", raiz->dado);
    imprimir_em_ordem(raiz->direito);
  }
}
