#include <stdio.h>

//Leia quatro notas, calcule a me´dia aritme´ tica e imprima o resultado.
void main()
{
    double n1, n2, n3, n4;

    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    printf("%.2lf", (n1+n2+n3+n4)/4);
}