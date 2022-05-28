#include <stdio.h>

/* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fo´ rmula
de conversa˜ o e´: J =
M , sendo J o comprimento em jardas e M o comprimento em
metros. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n/0.91);
}