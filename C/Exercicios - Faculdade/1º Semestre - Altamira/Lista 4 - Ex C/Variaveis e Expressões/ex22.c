#include <stdio.h>

/* Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fo´ rmula
de conversa˜ o e´ : M = 0, 91 J, sendo J o comprimento em jardas e M o comprimento
em metros. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*0.91);
}