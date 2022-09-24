#include <stdio.h>

/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
fo´ rmula de conversa˜ o e´ : K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("Kelvin = %.2lf", n + 273.15);
}