#include <stdio.h>

/* Leia um valor de a´ rea em metros quadrados m2 e apresente-o convertido em acres. A
fo´ rmula de conversa˜ o e´ : A = M 0, 000247, sendo M a a´ rea em metros quadrados e A
a a´rea em acres. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*0.000247);
}