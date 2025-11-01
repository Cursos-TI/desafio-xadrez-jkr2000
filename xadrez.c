#include <stdio.h>

void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;
    for (int i = 0; i < 1; i++) {
        printf("Cima ");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    moverBispo(casasRestantes - 1);
}

void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

void moverCavalo() {
    int movimentos = 2;
    printf("Movimento do CAVALO (em 'L': duas casas para cima e uma para a direita):\n");
    for (int i = 1; i <= movimentos; i++) {
        if (i == 2) {
            printf("Cima\n");
            continue;
        }
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) {
        if (j > 1) break;
        printf("Direita\n");
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da TORRE (5 casas para a direita):\n");
    moverTorre(casasTorre);

    printf("\nMovimento do BISPO (5 casas na diagonal para cima e à direita):\n");
    moverBispo(casasBispo);

    printf("\nMovimento da RAINHA (8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    printf("\n");
    moverCavalo();

    printf("\nMovimentos concluídos!\n");
    return 0;
}
