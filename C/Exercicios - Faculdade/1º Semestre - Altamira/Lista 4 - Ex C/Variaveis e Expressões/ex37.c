#include <stdio.h>

/* Fac¸a um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12% */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*0.88);
}