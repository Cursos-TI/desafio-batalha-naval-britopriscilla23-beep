#include <stdio.h>

int main() {
    int matriz[10][10];

    // matriz de 10x10 preenchida com 0 (vazio)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }

    // =========================
    // cone 
    // =========================

    matriz[0][4] = 1;
    matriz[1][3] = 1;
    matriz[1][4] = 1;
    matriz[1][5] = 1;
    matriz[2][2] = 1;
    matriz[2][3] = 1;
    matriz[2][4] = 1;
    matriz[2][5] = 1;
    matriz[2][6] = 1;

    // =========================
    //  octaedro
    // =========================
    matriz[4][4] = 2;
    matriz[3][4] = 2;
    matriz[5][4] = 2;
    matriz[4][3] = 2;
    matriz[4][5] = 2;

    // =========================
    //  cruz
    // =========================
    matriz[7][4] = 3;
    matriz[6][4] = 3;
    matriz[8][4] = 3;
    matriz[7][3] = 3;
    matriz[7][5] = 3;

    // =========================
    // Imprimir
    // =========================
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
