#include <stdio.h>

/*
Faça um programa que receba dois valores inteiros (X e Y) e mostre 0 para falso ou 1 para verdadeiro nas
seguintes expressões:
a) X>10 && Y<20     f) X>10 || Y<20
b) X<10 && Y>20     g) X<10 || c) Y>20
c) X<=10 && Y>20    h) X<=10 || Y>20
d) X>10 && Y <=20   i) X>10 || Y <=20
e) X!=10 && Y ==20  j) X!=10 || Y==20
*/
int main()
{
    int
        X,
        Y;

    printf("Insira o valor de X: ");
    scanf("%d", &X);

    printf("Insira o valor de Y: ");
    scanf("%d", &Y);

    if (X > 10 && Y < 20) // A
        printf("A) 1\n");
    else
        printf("A) 0\n");

    if (X < 10 && Y > 20) // B
        printf("B) 1\n");
    else
        printf("B) 0\n");

    if (X <= 10 && Y > 20) // C
        printf("C) 1\n");
    else
        printf("C) 0\n");

    if (X > 10 && Y <= 20) // D
        printf("D) 1\n");
    else
        printf("D) 0\n");

    if (X != 10 && Y == 20) // E
        printf("E) 1\n");
    else
        printf("E) 0\n");

    if (X > 10 || Y < 20) // F
        printf("F) 1\n");
    else
        printf("F) 0\n");

    if (X < 10 || Y > 20) // G
        printf("G) 1\n");
    else
        printf("G) 0\n");

    if (X <= 10 || Y > 20) // H
        printf("H) 1\n");
    else
        printf("H) 0\n");

    if (X > 10 || Y <= 20) // I
        printf("I) 1\n");
    else
        printf("I) 0\n");

    if (X != 10 || Y == 20) // J
        printf("J) 1\n");
    else
        printf("J) 0\n");
}