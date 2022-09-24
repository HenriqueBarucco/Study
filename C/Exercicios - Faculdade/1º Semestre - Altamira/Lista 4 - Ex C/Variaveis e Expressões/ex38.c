#include <stdio.h>

/* Leia o sala´ rio de um funciona´ rio. Calcule e imprima o valor do novo sala´ rio, sabendo que
ele recebeu um aumento de 25%. */
void main()
{
    double n;

    scanf("%lf", &n);
    printf("%.2lf", n*1.25);
}