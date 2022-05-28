#include <stdio.h>

/* Leia uma velocidade em km/h (quiloˆ metros por hora) e apresente-a convertida em m/s
(metros por segundo). A fo´ rmula de conversa˜ o e´ : M = K/3.6, sendo K a velocidade em
km/h e M em m/s. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n/3.6);
}