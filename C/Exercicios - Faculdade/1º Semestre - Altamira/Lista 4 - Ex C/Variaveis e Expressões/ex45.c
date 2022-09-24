#include <stdio.h>

/* Fac¸a um programa para converter uma letra maiu´ scula em letra minu´ scula. Use a tabela
ASCII para resolver o problema. */
void main()
{
    char c;

    scanf("%c", &c);

    int pA = 'A';

    int pM = 'a';

    int dif = pA - pM;

    printf("%c", c + dif);
}