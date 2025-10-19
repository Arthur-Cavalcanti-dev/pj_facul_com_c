#include <stdio.h>

// Funções recursivas

// Torre: move-se em linha reta (direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }
}

// Bispo: move-se na diagonal (Cima, Direita)
// Usando recursividade + loops aninhados (externo vertical, interno horizontal)
void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {        // loop vertical (Cima)
            for (int j = 0; j < 1; j++) {    // loop horizontal (Direita)
                printf("Cima, Direita\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva
    }
}

// Rainha: move-se em todas as direções (Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }
}

// Função principal

int main() {

    // TORRE

    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // BISPO

    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // RAINHA

    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // CAVALO → loops complexos/aninhados

    int casasCima = 2;       // movimento vertical
    int casasDireita = 1;    // movimento horizontal
    int i, j;

    printf("Movimento do Cavalo:\n");

    for (i = 1; i <= casasCima; i++) {
        printf("Cima\n"); // sobe duas casas

        j = 1;
        while (j <= casasDireita && i == casasCima) {
            // só move para direita após subir as 2 casas
            printf("Direita\n");
            j++;
        }
    }

    return 0;
}
