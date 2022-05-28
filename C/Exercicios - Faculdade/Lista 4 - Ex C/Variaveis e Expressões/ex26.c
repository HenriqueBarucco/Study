#include <stdio.h>

/* Leia um valor de a´ rea em metros quadrados m2 e apresente-o convertido em hectares.
A fo´ rmula de conversa˜ o e´ : H = M 0, 0001, sendo M a a´rea em metros quadrados e H
a a´rea em hectares. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*0.0001);
}