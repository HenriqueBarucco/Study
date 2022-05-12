#include <stdio.h>

/*
Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/

void main()
{
    int
        i,
        j;

    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < 11; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n\n");
    }
}