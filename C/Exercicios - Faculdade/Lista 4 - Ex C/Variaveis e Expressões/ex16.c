#include <stdio.h>

/* Leia um valor de comprimento em polegadas e apresente-o convertido em cent´ımetros.
A fo´ rmula de conversa˜ o e´ : C = P 2, 54, sendo C o comprimento em cent´ımetros e P o
comprimento em polegadas. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*2.54);
}