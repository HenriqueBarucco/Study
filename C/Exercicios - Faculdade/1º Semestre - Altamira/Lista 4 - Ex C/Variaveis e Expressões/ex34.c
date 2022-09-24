#include <stdio.h>

/* Leia o valor do raio de um c´ırculo e calcule e imprima a a´rea do c´ırculo correspondente.
A a´rea do c´ırculo e´ π ∗ raio2
, considere π = 3.141592. */
void main()
{
    double n;
    double pi = 3.141592;

    scanf("%lf", &n);
    printf("%lf", pi*n*n);
}