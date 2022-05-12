#include <stdio.h>

/*
Faça um programa C que leia dez números de 0 a 10, e que apresente: a) a soma dos números; b) a média
dos números; c) o maior número; d) o menor número. Trate em caso do usuário digitar números diferentes
do que é aceito
*/
int main()
{
    int
        i,
        num,
        soma,
        media,
        maior,
        menor;

    printf("Insira um numero de 0 a 10: \n");
    scanf("%d", &num);

    if (num > 10)
        return printf("O valor precisa ser entre 0 a 10.");

    maior = num;
    menor = num;
    soma = num;

    for (i = 1; i < 10; i++)
    {
        printf("Insira outro numero de 0 a 10: \n");
        scanf(" %d", &num);

        if (num > 10)
            return printf("O valor precisa ser entre 0 a 10.");

        soma += num;

        if (num > maior)
            maior = num;
        if (num < menor)
            menor = num;
    }

    printf("A soma dos valores e: %d\n", soma);
    printf("A media dos valores e: %d\n", soma / 10);
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
}