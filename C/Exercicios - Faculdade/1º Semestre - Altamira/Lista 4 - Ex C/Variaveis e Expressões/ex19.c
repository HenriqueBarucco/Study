#include <stdio.h>

/* Leia um valor de volume em litros e apresente-o convertido em metros cu´ bicos m3
. A
fo´rmula de conversa˜ o e´: M =
L , sendo L o volume em litros e M o volume em metros
cu´bicos. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n/1000);
}