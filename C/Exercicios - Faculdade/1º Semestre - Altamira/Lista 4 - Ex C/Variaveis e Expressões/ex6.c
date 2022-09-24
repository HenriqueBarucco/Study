#include <stdio.h>

/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fo´ rmula de conversa˜ o e´ : F = C (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("Fahrenheit = %.2lf", n*(9.5/5.0)+32);
}