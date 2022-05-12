#include <stdio.h>

/*
Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/

void main()
{
    int
        metro;

    printf("Insira um valor em metros: ");
    scanf("%d", &metro);

    printf("%d Metros\n", metro);
    printf("%d Decimetros\n", metro * 10);
    printf("%d Centimetros\n", metro * 100);
    printf("%d Milimetros\n", metro * 1000);
}