#include <stdio.h>

/* Leia um nu´ mero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro. */
void main()
{
    int n;

    scanf("%d", &n);
    printf("%d", ((n*3)+1)+((n*2)-1));
}