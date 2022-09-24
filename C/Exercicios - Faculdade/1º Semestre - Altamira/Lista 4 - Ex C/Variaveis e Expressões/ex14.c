#include <stdio.h>

/* Leia um aˆngulo em graus e apresente-o convertido em radianos. A fo´rmula de conversa˜ o
e´: R = G ∗ π/180, sendo G o aˆngulo em graus e R em radianos e π = 3.14. */
void main()
{
    double n;
    double pi = 3.14159;

    scanf("%lf", &n);
    printf("%.2lf", n*pi/180);
}