#include <stdio.h>

/* Treˆ s amigos jogaram na loteria. Caso eles ganhem, o preˆ mio deve ser repartido proporcionalmente ao valor que cada deu para a realizac¸a˜ o da aposta. Fac¸a um programa que leia
quanto cada apostador investiu, o valor do preˆ mio, e imprima quanto cada um ganharia do preˆ mio
com base no valor investido. */
void main()
{
    double a1, a2, a3, valor;

    scanf("%lf%lf%lf%lf", &a1, &a2, &a3, &valor);
    printf("Amigo 1 = %.2lf\n", (a1/100)*valor);
    printf("Amigo 2 = %.2lf\n", (a2/100)*valor);
    printf("Amigo 3 = %.2lf\n", (a3/100)*valor);
}