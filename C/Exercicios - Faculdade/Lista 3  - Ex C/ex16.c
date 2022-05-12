#include <stdio.h>

/*
Escreva um programa em C que desenhe na tela uma árvore de Natal como a que se segue.
*/

int main()
{
    int
        i, // Valor para o for responsavel por fazer a arvore (Todas as linhas, com excessão do tronco)
        j, // Valor para o for responsavel por fazer os "galhos" (Sequencia de "*")
        l; // Valor para o for responsavel por fazer o tronco

    for (i = 1; i < 8; i++) // Base inicial = 1, sera repetido até que seja menor que 8.
    {
        for (j = i; j <= 6; j++) // Base inicial de acordo com o numero atual de execução do for principal, sera repetido até que seja igual ou menor que 6.
        {
            printf(" "); // Espaço em branco :)
        }
        for (j = 1; j <= i * 2; j++) // Base inicial igual a 1, sera repetido de acordo com o numero atual do for principal x 2
        {
            printf("*"); // Representação visual de um galho :)
        }
        printf("\n"); // Quando finalizar o "galho" pula de linha para o proximo ou o fim do for
    }

    for (l = 1; l <= 3; l++) // Criação do tronco, Valor inicial igual a 1, se repetira 3x
    {
        printf("      **\n"); // Tronco
    }
}