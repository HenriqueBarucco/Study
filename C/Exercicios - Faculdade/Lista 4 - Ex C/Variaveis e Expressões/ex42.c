#include <stdio.h>

/* Receba o sala´ rio-base de um funciona´ rio. Calcule e imprima o sala´ rio a receber, sabendose que esse funciona´ rio tem uma gratificac¸a˜ o de 5% sobre o sala´ rio-base. Ale´ m disso,
ele paga 7% de imposto sobre o sala´rio-base. */
void main()
{
    double salario;

    scanf("%lf", &salario);
    printf("%.2lf", (salario*1.05)*0.93);
}