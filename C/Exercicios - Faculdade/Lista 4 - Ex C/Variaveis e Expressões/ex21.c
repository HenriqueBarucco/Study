#include <stdio.h>

/* Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fo´ rmula
de conversa˜ o e´: K = L ∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*0.45);
}