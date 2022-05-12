#include <stdio.h>

/*
Escreva um programa em C que apresente a tabuada de um número qualquer digitado pelo usuário.
*/
int main()
{
    int
        valor, // Valor para a tabuada
        i;     // Variavel para o for

    printf("Insira um valor: ");
    scanf("%d", &valor);

    for (i = 1; i < 11; ++i)
    {
        // Ele repetira o printf enquanto o i não for igual a 11.
        printf("%dx%d = %d\n", valor, i, valor * i);
    }
}