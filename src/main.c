#include "../include/avl.h"
#include "../include/jogo.h"

int main() {
  Trie *trie;
  trie = criar_no_trie();
  trie = ler_palavras("../game/palavras.txt");
  char **tabuleiro = ler_tabuleiro("../game/tabuleiro.txt");
  imprimir_tabuleiro(tabuleiro);
  imprimir_palavras("../game/palavras.txt");
  printf("\n");
  AVL *avl = NULL; // Inicializa a AVL como NULL
  char teste1[16], teste2[16],
      teste3[16]; // Aumenta o tamanho para suportar palavras maiores
  printf("Digite três palavras:\n");
  scanf("%15s %15s %15s", teste1, teste2,
        teste3); // Limita a entrada a 15 caracteres para evitar overflow
  // Insere os valores na árvore AVL
  avl = inserir_no(avl, teste3);
  avl = inserir_no(avl, teste2);
  avl = inserir_no(avl, teste1);

  // Verifica se os dados estão na trie
  if (avl != NULL) {
    if (buscar(trie, avl->dado)) {
      printf("%s está no arquivo palavras.txt\n", avl->dado);
    }

    if (avl->esquerdo != NULL && buscar(trie, avl->esquerdo->dado)) {
      printf("%s está no arquivo palavras.txt\n", avl->esquerdo->dado);
    }
    if (avl->direito != NULL && buscar(trie, avl->direito->dado)) {
      printf("%s está no arquivo palavras.txt\n", avl->direito->dado);
    }
  }
}
