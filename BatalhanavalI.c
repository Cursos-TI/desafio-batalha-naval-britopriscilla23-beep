#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho dos navios
    int tamanhoNavio = 3;

    // Coordenadas iniciais dos navios
    int navioHorizontalLinha = 2, navioHorizontalColuna = 1;
    int navioVerticalLinha = 5, navioVerticalColuna = 7;

    // Valida limites (horizontal)
    if (navioHorizontalColuna + tamanhoNavio <= 10) {
        for (int j = 0; j < tamanhoNavio; j++) {
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + j] = 3;
        }
    } else {
        printf("Navio horizontal fora dos limites!\n");
    }

    // Valida limites (vertical)
    if (navioVerticalLinha + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            // Verifica sobreposição
            if (tabuleiro[navioVerticalLinha + i][navioVerticalColuna] == 0) {
                tabuleiro[navioVerticalLinha + i][navioVerticalColuna] = 3;
            } else {
                printf("Navio vertical sobreposto! Posicionamento inválido.\n");
            }
        }
    } else {
        printf("Navio vertical fora dos limites!\n");
    }

    // Exibir o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
