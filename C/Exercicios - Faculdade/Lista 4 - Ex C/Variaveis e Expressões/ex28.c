#include <stdio.h>

/* Fac¸a a leitura de treˆ s valores e apresente como resultado a soma dos quadrados dos
treˆ s valores lidos. */
void main()
{
    double n1, n2, n3;

    scanf("%lf%lf%lf", &n1, &n2, &n3);
    printf("%.2lf", (n1*n1)+(n2*n2)+(n3*n3));
}