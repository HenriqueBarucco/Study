#include <stdio.h>

/* Leia um valor em real e a cotac¸a˜ o do do´ lar. Em seguida, imprima o valor correspondente
em do´lares. */
void main()
{
    double real, cotDolar;

    scanf("%lf%lf", &real, &cotDolar);
    printf("%.2lf", real*cotDolar);
}