#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};

    printf("=== TABULEIRO BATALHA NAVAL ===\n");

    //navio horizontal na linha 1
    tabuleiro[1][1] = 3, tabuleiro[1][2] = 3, tabuleiro[1][3] = 3;

    //navio vertical na coluna 5
    tabuleiro[1][5] = 3, tabuleiro[2][5] = 3, tabuleiro[3][5] = 3;

    //Exibição do tabuleiro
    for(int i = 0; i < 10; i++) {
        printf("%d ", i+1);
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
