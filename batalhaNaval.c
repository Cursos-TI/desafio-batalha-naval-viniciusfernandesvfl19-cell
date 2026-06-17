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
#include <stdio.h>

int main()
{

    int tabuleiro[10][10] = {0};

    int erro_validacao = 0;

    printf("=== TABULEIRO BATALHA NAVAL ===\n");

    printf("\n");

    printf("    A B C D E F G H I J \n");

    // --- 1. Navio Horizontal (Linha 1, Colunas 1 a 3) ---
    if ((1 >= 0 && 1 < 10) && (1 >= 0 && 3 < 10) && (tabuleiro[1][1] == 0 && tabuleiro[1][2] == 0 && tabuleiro[1][3] == 0))
    {
        tabuleiro[1][1] = 3, tabuleiro[1][2] = 3, tabuleiro[1][3] = 3;
    }
    else
    {
        erro_validacao = 1;
    }

    // --- 2. Navio Vertical (Coluna 5, Linhas 1 a 3) ---
    if ((1 >= 0 && 3 < 10) && (5 >= 0 && 5 < 10) &&
        (tabuleiro[1][5] == 0 && tabuleiro[2][5] == 0 && tabuleiro[3][5] == 0))
    {
        tabuleiro[1][5] = 3, tabuleiro[2][5] = 3, tabuleiro[3][5] = 3;
    }
    else
    {
        erro_validacao = 1;
    }

    // --- 3. Navio Diagonal 1 (Descendo: [4][1], [5][2], [6][3]) ---
    if ((4 >= 0 && 6 < 10) && (1 >= 0 && 3 < 10) &&
        (tabuleiro[4][1] == 0 && tabuleiro[5][2] == 0 && tabuleiro[6][3] == 0))
    {
        tabuleiro[4][1] = 3, tabuleiro[5][2] = 3, tabuleiro[6][3] = 3;
    }
    else
    {
        erro_validacao = 1;
    }

    // --- 4. Navio Diagonal 2 (Subindo: [6][8], [7][7], [8][6]) ---
    if ((6 >= 0 && 8 < 10) && (6 >= 0 && 8 < 10) &&
        (tabuleiro[6][8] == 0 && tabuleiro[7][7] == 0 && tabuleiro[8][6] == 0))
    {
        tabuleiro[6][8] = 3, tabuleiro[7][7] = 3, tabuleiro[8][6] = 3;
    }
    else
    {
        erro_validacao = 1;
    }

    if (erro_validacao == 1)
    {
        printf("Erro na validação de limites ou sobreposição de navios!\n");
    }
    else
    {
        // Exibição do tabuleiro
        for (int i = 0; i < 10; i++)
        {
            printf("%2d ", i + 1);
            for (int j = 0; j < 10; j++)
            {
                printf(" %d", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
