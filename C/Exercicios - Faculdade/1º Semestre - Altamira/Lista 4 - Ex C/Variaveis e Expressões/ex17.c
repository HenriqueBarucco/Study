#include <stdio.h>

/* Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas.
A fo´rmula de conversa˜ o e´: P =
C , sendo C o comprimento em cent´ımetros e P o
comprimento em polegadas. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n/2.54);
}