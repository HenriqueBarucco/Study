#include <stdio.h>

/* Escreva um programa que leia um nu´ mero inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao nu´ mero 251 correspondera´ o valor
8 (2 + 5 + 1). Se o nu´ mero lido na˜ o for maior do que zero, o programa terminara´ com a
mensagem “Nu´mero inva´lido”. */
void main()
{
    int n, sum, sumTotal;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Numero invalido");
    }
    else
    {
        for (int i = 0; i < 1; i++)
        {
            while (n > 10 * i)
            {
                n--;
                sum++;
            }

            sumTotal += sum;
            printf("%d\n", sum);
        }

        printf("%d", sum);
    }
}