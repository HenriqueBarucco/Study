#include <stdio.h>

/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
fo´ rmula de conversa˜ o e´ : C = K 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("Celsius = %.2lf", n - 273.15);
}