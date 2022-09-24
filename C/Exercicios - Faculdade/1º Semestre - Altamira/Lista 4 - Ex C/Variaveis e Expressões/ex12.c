#include <stdio.h>

/* Leia uma distaˆncia em milhas e apresente-a convertida em quiloˆmetros. A fo´rmula de
conversa˜ o e´: K = 1, 61 ∗ M , sendo K a distaˆncia em quiloˆmetros e M em milhas. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", 1.61*n);
}