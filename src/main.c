#include "../include/avl.h"
#include "../include/jogo.h"
#include "../include/utils.h"
#include <stdio.h>
#include <stdlib.h>

// menu do jogo
void exibir_menu() {
  printf("\n=== Jogo de Caça-Palavras ===\n");
  printf("1. Carregar tabuleiro\n");
  printf("2. Carregar palavras\n");
  printf("3. Buscar palavras\n");
  printf("4. Imprimir resultados\n");
  printf("5. Sair\n");
  printf("Escolha uma opção: ");
}

void liberar_tabuleiro(char **tabuleiro, int linhas) {
  for (int i = 0; i < linhas; i++) {
    free(tabuleiro[i]);
  }
  free(tabuleiro);
}

int main() {
  Trie *trie = criar_no_trie(); // criação da trie
  AVL *avl = NULL;
  char **tabuleiro = NULL;
  char arquivo_tabuleiro[100], arquivo_palavras[100];
  int linhas = 0, colunas = 0; // Dimensões do tabuleiro
  int opcao;

  do {
    exibir_menu();
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
    case 1:
      printf("Digite o caminho do arquivo do tabuleiro: ");
      scanf("%s", arquivo_tabuleiro);

      // ler o tabuleiro e obter as dimensões
      tabuleiro = ler_tabuleiro(arquivo_tabuleiro, &linhas, &colunas);

      if (tabuleiro != NULL) {
        printf("Tabuleiro carregado com sucesso!\n");
        imprimir_tabuleiro(tabuleiro, linhas, colunas);
      } else {
        printf("Erro ao carregar o tabuleiro.\n");
      }
      break;

    case 2:
      printf("Digite o caminho do arquivo de palavras: ");
      scanf("%s", arquivo_palavras);
      trie = ler_palavras(arquivo_palavras);
      if (trie != NULL) {
        printf("Palavras carregadas com sucesso!\n");
        imprimir_palavras(arquivo_palavras);
      } else {
        printf("Erro ao carregar palavras.\n");
      }
      break;

    case 3: {
      char teste1[16], teste2[16], teste3[16];
      printf("Digite três palavras:\n");
      scanf("%15s %15s %15s", teste1, teste2, teste3);

      // inserção das palavras na AVL
      avl = inserir_no(avl, teste3);
      avl = inserir_no(avl, teste2);
      avl = inserir_no(avl, teste1);

      // verificação das palavras na trie
      if (buscar(trie, teste1)) {
        printf("%s está no arquivo palavras.txt\n", teste1);
      }
      if (buscar(trie, teste2)) {
        printf("%s está no arquivo palavras.txt\n", teste2);
      }
      if (buscar(trie, teste3)) {
        printf("%s está no arquivo palavras.txt\n", teste3);
      }
      break;
    }

    case 4:
      printf("Resultados:\n");
      imprimir_resultados();
      break;

    case 5:
      printf("Saindo...\n");

      if (tabuleiro != NULL) {
        liberar_tabuleiro(tabuleiro, linhas);
      }
      liberar_recursos();
      break;

    default:
      printf("Opção inválida. Tente novamente.\n");
    }
  } while (opcao != 5);

  return 0;
}
