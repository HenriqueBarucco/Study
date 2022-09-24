#include <stdio.h>

/* Leia um valor de volume em metros cu´ bicos m3 e apresente-o convertido em litros. A
fo´ rmula de conversa˜ o e´ : L = 1000 M , sendo L o volume em litros e M o volume em
metros cu´bicos. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lfL", 1000*n);
}