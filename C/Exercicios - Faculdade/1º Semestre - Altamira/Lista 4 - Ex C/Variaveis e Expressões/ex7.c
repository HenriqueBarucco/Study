#include <stdio.h>

/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A fo´ rmula de conversa˜ o e´ : C = 5.0 (F 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("Celsius = %.2lf", 5.0 * (n - 32.00)/9.0);
}