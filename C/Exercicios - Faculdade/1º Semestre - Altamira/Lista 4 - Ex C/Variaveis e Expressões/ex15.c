#include <stdio.h>

/* Leia um aˆngulo em radianos e apresente-o convertido em graus. A fo´rmula de conversa˜ o
e´: G = R ∗ 180/π, sendo G o aˆngulo em graus e R em radianos e π = 3.14. */
void main()
{
    double n;
    double pi = 3.14159;

    scanf("%lf", &n);
    printf("%.2lf", n*180/pi);
}