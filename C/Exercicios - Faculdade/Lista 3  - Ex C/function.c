#include <stdio.h>

int main()
{
    int
        valor;

    printf("Insira um valor: ");
    scanf("%d", &valor);

    ex15(valor);
}

int ex15(int valor)
{
    int
        i,
        j,
        l = 0;

    for (i = 1; i <= valor; i++)
    {
        for (j = 1; j <= valor - i; j++)
        {
            printf("  ");
        }
        for (l = 1; l <= i; l++)
            printf("%d ", l);
        for (l = i - 1; l >= 1; l--)
            printf("%d ", l);
        printf("\n");
    }

    printf("\n");

    for (i = valor; i >= 1; i--)
    {
        for (j = 1; j <= valor - i; j++)
        {
            printf("  ");
        }
        for (l = 1; l <= i; l++)
            printf("%d ", l);
        for (l = i - 1; l >= 1; l--)
            printf("%d ", l);
        printf("\n");
    }
}