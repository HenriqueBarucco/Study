#include <stdio.h>

/* Elabore um programa que preencha uma matriz 4x2, calcule e mostre:
a) o maior elemento da matriz
b) a posição do maior elemento da matriz (linha e coluna)
c) o menor elemento da matriz
d) a posição do menor elemento da matriz (linha e coluna) */
void main()
{
    int matriz[4][2],
        bigger = -2147483647,
        smaller = 2147483647,
        biggerPosition[2],
        smallerPosition[2];

    printf("Insira os valores na matriz:\n");

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > bigger)
            {
                bigger = matriz[i][j];
                biggerPosition[0] = i+1;
                biggerPosition[1] = j+1;
            }
            if (matriz[i][j] < smaller)
            {
                smaller = matriz[i][j];
                smallerPosition[0] = i+1;
                smallerPosition[1] = j+1;
            }
        }

    printf("O maior elemento da matriz: %d\n", bigger);
    printf("A posicao do maior elemento da matriz: %d, %d\n", biggerPosition[0], biggerPosition[1]);
    printf("O menor elemento da matriz: %d\n", smaller);
    printf("A posicao do menor elemento da matriz: %d, %d\n", smallerPosition[0], smallerPosition[1]);
}