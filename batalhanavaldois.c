#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int tamanhoNavio = 3;

    // =========================
    // NAVIOS ORTOGONAIS
    // =========================

    // Navio horizontal
    int hLinha = 2, hColuna = 1;

    if (hColuna + tamanhoNavio <= 10) {
        for (int j = 0; j < tamanhoNavio; j++) {
            if (tabuleiro[hLinha][hColuna + j] == 0)
                tabuleiro[hLinha][hColuna + j] = 3;
            else
                printf("Sobreposição no navio horizontal!\n");
        }
    } else {
        printf("Navio horizontal fora dos limites!\n");
    }

    // Navio vertical
    int vLinha = 5, vColuna = 7;

    if (vLinha + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[vLinha + i][vColuna] == 0)
                tabuleiro[vLinha + i][vColuna] = 3;
            else
                printf("Sobreposição no navio vertical!\n");
        }
    } else {
        printf("Navio vertical fora dos limites!\n");
    }

    // =========================
    // NAVIOS DIAGONAIS
    // =========================

    // Diagonal ↘ (principal)
    int d1Linha = 0, d1Coluna = 0;

    if (d1Linha + tamanhoNavio <= 10 && d1Coluna + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[d1Linha + i][d1Coluna + i] == 0)
                tabuleiro[d1Linha + i][d1Coluna + i] = 3;
            else
                printf("Sobreposição na diagonal 1!\n");
        }
    } else {
        printf("Diagonal 1 fora dos limites!\n");
    }

    // Diagonal ↙
    int d2Linha = 0, d2Coluna = 9;

    if (d2Linha + tamanhoNavio <= 10 && d2Coluna - (tamanhoNavio - 1) >= 0) {
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[d2Linha + i][d2Coluna - i] == 0)
                tabuleiro[d2Linha + i][d2Coluna - i] = 3;
            else
                printf("Sobreposição na diagonal 2!\n");
        }
    } else {
        printf("Diagonal 2 fora dos limites!\n");
    }

    // =========================
    // EXIBIR TABULEIRO
    // =========================

    printf("\nTabuleiro Batalha Naval:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
