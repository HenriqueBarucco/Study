#include <stdio.h>

/* Leia um valor de a´rea em hectares e apresente-o convertido em metros quadrados m2
.
A fo´ rmula de conversa˜ o e´ : M = H 10000, sendo M a a´rea em metros quadrados e H
a a´rea em hectares. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*10000);
}