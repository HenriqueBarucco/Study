#include <stdio.h>

//Leia um nu´mero inteiro e imprima o seu antecessor e o seu sucessor
void main()
{
    int n;

    scanf("%d", &n);
    printf("%d e %d", n-1, n+1);
}