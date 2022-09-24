#include <stdio.h>

/* Uma empresa contrata um encanador a R$ 30,00 por dia. Fac¸a um programa que solicite
o nu´ mero de dias trabalhados pelo encanador e imprima a quantia l´ıquida que devera´ ser
paga, sabendo-se que sa˜o descontados 8% para imposto de renda. */
void main()
{
    int n;

    scanf("%d", &n);
    printf("%.2lf", (n*30.00)*0.92);
}