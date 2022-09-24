#include <stdio.h>

/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular e´ calculado por meio da seguinte fo´ rmula: V = π raio2
 altura,
onde π = 3.141592. */
void main()
{
    double a, r;
    double pi = 3.141592;

    scanf("%lf%lf", &a, &r);
    printf("%.2lf", pi*r*r*a);
}