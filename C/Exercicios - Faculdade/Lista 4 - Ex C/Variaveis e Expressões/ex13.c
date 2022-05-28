#include <stdio.h>

/* Leia uma distaˆ ncia em quiloˆ metros e apresente-a convertida em milhas. A fo´ rmula de
conversa˜ o e´: M =
K , sendo K a distaˆncia em quiloˆmetros e M em milhas. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n/1.61);
}