#include <stdio.h>

/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quiloˆ metros por hora). A fo´ rmula de conversa˜ o e´ : K = M 3.6, sendo K a velocidade
em km/h e M em m/s. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*3.6);
}