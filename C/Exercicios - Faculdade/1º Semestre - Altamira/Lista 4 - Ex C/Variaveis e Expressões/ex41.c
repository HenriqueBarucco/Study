#include <stdio.h>

/* Fac¸a um programa que leia o valor da hora de trabalho (em reais) e nu´ mero de horas
trabalhadas no meˆ s. Imprima o valor a ser pago ao funciona´ rio, adicionando 10% sobre
o valor calculado. */
void main()
{
    double valor, hora;

    scanf("%lf%lf", &valor, &hora);
    printf("%.2lf", (hora*valor)*1.10);
}