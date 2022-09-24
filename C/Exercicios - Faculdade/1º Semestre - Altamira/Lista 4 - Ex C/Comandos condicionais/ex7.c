#include <stdio.h>

/* Fac¸a um programa que receba dois nu´ meros e mostre o maior. Se por acaso, os dois
nu´meros forem iguais, imprima a mensagem N´umeros iguais. */
void main()
{
    double n, m;

    scanf("%lf%lf", &n, &m);
    if (n == m)
    {
        printf("Numeros iguais!");
    }
    else if (n > m)
    {
        printf("%.2lf maior que %.2lf\n", n, m);
    }
    else
    {
        printf("%.2lf maior que %.2lf\n", m, n);
    }
}