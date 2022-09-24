#include <stdio.h>

/* Leia um valor de a´ rea em acres e apresente-o convertido em metros quadrados m2
. A
fo´ rmula de conversa˜ o e´ : M = A 4048, 58, sendo M a a´rea em metros quadrados e A a
a´rea em acres. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*4048.58);
}