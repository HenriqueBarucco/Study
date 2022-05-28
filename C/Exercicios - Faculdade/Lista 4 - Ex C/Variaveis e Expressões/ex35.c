#include <stdio.h>
#include <math.h>

/* Sejam a e b o√s catetos de um triaˆngulo, onde a hipotenusa e´ obtida pela equac¸a˜ o:
hipotenusa = a
2 + b
2. Fac¸a um programa que receba os valores de a e b e calcule
o valor da hipotenusa atrave´ s da equac¸a˜ o. Imprima o resultado dessa operac¸a˜ o. */
void main()
{
    double a, b;

    scanf("%lf%lf", &a, &b);
    printf("%.2lf", sqrt(a*a+b*b));
}