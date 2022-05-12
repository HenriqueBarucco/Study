#include <stdio.h>

/*
Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem.
 a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
 C=(f-32.0) * (5.0/9.0).

 b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
 C=(f-32)*(5/9).
*/

void main()
{
    long
        i,
        fahInt,
        fahIntPrint;

    double
        fahDoub;

    printf("Escolha uma das opcoes:\n");
    printf("[1] Int\n");
    printf("[2] Double\n");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("Insira um valor: ");
        scanf("%ld", &fahInt);

        printf("%ld", (fahInt-32)*(5/9));
        break;

    case 2:
        printf("Insira um valor: ");
        scanf("%lf", &fahDoub);

        printf("%lf", (fahDoub-32.0)*(5.0/9.0));
        break;
    
    default:
        break;
    }
}