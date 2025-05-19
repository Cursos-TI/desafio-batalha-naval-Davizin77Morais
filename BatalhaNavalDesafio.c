#include <stdio.h>

int main() {

    
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int tabuleiro[10][10];
    
    // inicializa o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    
    int tamanhoNavio = 3;
    // NAVIO 1: horizontal
    int linhaNavio1 = 2, colunaNavio1 = 3;
    int podePosicionarNavio = 1;

    // verifica se pode posicionar horizontalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        int r = linhaNavio1;
        int c = colunaNavio1 + i;

        if (r >= 10 || c >= 10 || tabuleiro[r][c] != 0) {
            podePosicionarNavio = 0;
            break;
        }
    }

    // posiciona o navio 1
    if (podePosicionarNavio) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio1][colunaNavio1 + i] = 3;
        }
    } else {
        printf("Não é possível posicionar o navio horizontal na posição (%d, %d)\n", linhaNavio1, colunaNavio1);
    }

    // NAVIO 2: vertical
    int linhaNavio2 = 5, colunaNavio2 = 6;
    podePosicionarNavio = 1;

    // verifica se pode posicionar verticalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        int r = linhaNavio2 + i;
        int c = colunaNavio2;

        if (r >= 10 || c >= 10 || tabuleiro[r][c] != 0) {
            podePosicionarNavio = 0;
            break;
        }
    }

    // posiciona o navio 2
    if (podePosicionarNavio) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio2 + i][colunaNavio2] = 3;
        }
    } else {
        printf("Não é possível posicionar o navio vertical na posição (%d, %d)\n", linhaNavio2, colunaNavio2);
    }

    // NAVIO 3: diagonal primária
    int linhaNavio3 = 0, colunaNavio3 = 0;
    podePosicionarNavio = 1;

    // verifica se pode posicionar diagonalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        int r = linhaNavio3 + i;
        int c = colunaNavio3 + i;

        if (r >= 10 || c >= 10 || tabuleiro[r][c] != 0) {
            podePosicionarNavio = 0;
            break;
        }
    }

    // posiciona o navio 3
    if (podePosicionarNavio) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = 3;
        }
    } else {
        printf("Não é possível posicionar o navio diagonal na posição (%d, %d)\n", linhaNavio3, colunaNavio3);
    }

    // NAVIO 4: diagonal secundária
    int linhaNavio4 = 0, colunaNavio4 = 9;
    podePosicionarNavio = 1;

    // verifica se pode posicionar diagonalmente
    for (int i = 0; i < tamanhoNavio; i++) {
        int r = linhaNavio4 + i;
        int c = colunaNavio4 - i;

        if (r >= 10 || c < 0 || tabuleiro[r][c] != 0) {
            podePosicionarNavio = 0;
            break;
        }
    }

    // posiciona o navio 4
    if (podePosicionarNavio) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = 3;
        }
    } else {
        printf("Não é possível posicionar o navio diagonal na posição (%d, %d)\n", linhaNavio4, colunaNavio4);
    }



    // exibe o tabuleiro

    printf("\nTabuleiro:\n  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    



}
