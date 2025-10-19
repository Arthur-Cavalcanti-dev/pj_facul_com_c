#include <stdio.h>

int main() {

    // Configuração do Tabuleiro

    int tabuleiro[10][10] = {0}; // 0 → água, 3 → navio, 5 → área de habilidade
    int tamanhoNavio = 3;

    // Definição dos navios

    int linhaNavioH = 2, colunaNavioH = 3; // horizontal
    int linhaNavioV = 5, colunaNavioV = 7; // vertical
    int linhaNavioD1 = 0, colunaNavioD1 = 0; // diagonal principal
    int linhaNavioD2 = 0, colunaNavioD2 = 9; // diagonal secundária

    // Posicionando os navios

    for(int i=0;i<tamanhoNavio;i++){
        if(colunaNavioH+i<10 && tabuleiro[linhaNavioH][colunaNavioH+i]==0)
            tabuleiro[linhaNavioH][colunaNavioH+i]=3;

        if(linhaNavioV+i<10 && tabuleiro[linhaNavioV+i][colunaNavioV]==0)
            tabuleiro[linhaNavioV+i][colunaNavioV]=3;

        if(linhaNavioD1+i<10 && colunaNavioD1+i<10 && tabuleiro[linhaNavioD1+i][colunaNavioD1+i]==0)
            tabuleiro[linhaNavioD1+i][colunaNavioD1+i]=3;

        if(linhaNavioD2+i<10 && colunaNavioD2-i>=0 && tabuleiro[linhaNavioD2+i][colunaNavioD2-i]==0)
            tabuleiro[linhaNavioD2+i][colunaNavioD2-i]=3;
    }

    // Definindo as habilidades

    // Matriz de tamanho 5x5 para as habilidades
    int tamanhoHabilidade = 5;

    // Pontos de origem das habilidades
    int origemConeLinha = 1, origemConeColuna = 5;
    int origemCruzLinha = 7, origemCruzColuna = 2;
    int origemOctaedroLinha = 5, origemOctaedroColuna = 5;

    // Aplicando Habilidade: Cone

    // Forma de cone apontando para baixo
    for(int i=0;i<tamanhoHabilidade;i++){
        for(int j=-i;j<=i;j++){
            int linha = origemConeLinha + i;
            int coluna = origemConeColuna + j;
            if(linha>=0 && linha<10 && coluna>=0 && coluna<10 && tabuleiro[linha][coluna]!=3){
                tabuleiro[linha][coluna] = 5;
            }
        }
    }


    // Aplicando Habilidade: Cruz

    // Forma de cruz centralizada no ponto de origem
    for(int i=-2;i<=2;i++){
        for(int j=-2;j<=2;j++){
            int linha = origemCruzLinha + i;
            int coluna = origemCruzColuna + j;
            if(linha>=0 && linha<10 && coluna>=0 && coluna<10 && tabuleiro[linha][coluna]!=3){
                if(i==0 || j==0) // cruz
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    // Aplicando Habilidade: Octaedro

    // Forma de losango centralizado
    for(int i=-2;i<=2;i++){
        for(int j=-2;j<=2;j++){
            int linha = origemOctaedroLinha + i;
            int coluna = origemOctaedroColuna + j;
            if(linha>=0 && linha<10 && coluna>=0 && coluna<10 && tabuleiro[linha][coluna]!=3){
                if(abs(i)+abs(j)<=2) // condição para formar o losango
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    // Exibindo o Tabuleiro

    printf("Tabuleiro do Batalha Naval com Habilidades:\n\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
