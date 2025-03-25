#include <stdio.h>

void Exibirtabuleiro(int tabuleiro[10][10])
{
    char linha_horizontal[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int Linha_Vertical[10];

    printf("  ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", linha_horizontal[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\nCOLUNA: %c LINHA %d", linha_horizontal[2]);
}
int main()
{
    int tabuleiro[10][10] = {0};

    tabuleiro[1][5] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[3][5] = 3;

    Exibirtabuleiro(tabuleiro);
    return 0;
}
