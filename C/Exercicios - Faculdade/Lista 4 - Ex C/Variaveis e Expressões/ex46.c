#include <stdio.h>

/* Fac¸a um programa que leia um nu´ mero inteiro positivo de treˆ s d´ıgitos (de 100 a 999).
Gere outro nu´mero formad o pelos d´ıgitos invertidos do nu´mero lido. */
void main()
{
    int i, j;
    char num[3], numInvertido[3];

    gets(num);

    for (i = 0, j = 2; i < 3; i++, j--)
    {
        numInvertido[j] = num[i];
    }

    for (i = 0; i < 3; i++)
    {
        printf("%c", numInvertido[i]);
    }
}