#include <stdio.h>
#include <math.h>

/* Escreva um programa que leia as coordenadas x e y de pontos no R
2 e calcule sua dis taˆ ncia da
origem (0, 0). */
void main()
{
    double a, b, c, d;

    scanf("%lf%lf", &a, &b);

    c = (a * a) + (b * b);

    d = sqrt(c);

    printf("%lf", d);

}