#include <stdio.h>

/*
Escreva um programa que apresente na telauma pirâmide de números e seu reflexo como a que se segue.
Para isso deverá pedir ao utilizador o valor de N que deverá ser obrigatoriamente maior ou igual 2. A
pirâmide apresentada é o exemplo para N = 5.

*/
int main()
{
    int
        i,     // Valor do for principal, no qual fara a piramide (de 1 até o numero total de linhas)
        j,     // Valor do for responsavel por colocar "espaço"
        l = 0, // Valor do for responsavel por colocar os numeros
        n;     // Valor escolhido pelo usuario

    printf("Insira um valor: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // Repetira o codigo por quantas vezes o usuario colocar em "n" de forma crescente (Fazendo com que tenha esse mesmo valor de linhas)
    {
        for (j = 1; j <= n - i; j++) // Colocara os espaços necessarios no inicio da piramide.
        {
            printf("  "); // Espaço em branco :)
        }
        for (l = 1; l <= i; l++) // Numeros crescente de acordo com a linha atual (Ex: linha = 3, logo imprimira 3 2 1)
            printf("%d ", l);
        for (l = i - 1; l >= 1; l--) // Numeros decrescente de acordo com a linha atual (Ex: linha = 5, logo imprimira 5 4 3 2 1)
            printf("%d ", l);
        printf("\n");
    }

    printf("\n");

    for (i = n; i >= 1; i--) // Repetira o codigo por quantas vezes o usuario colocar em "n" de forma decrescente (Fazendo com que tenha esse mesmo valor de linhas)
    {
        for (j = 1; j <= n - i; j++) // Colocara os espaços necessarios no inicio da piramide.
        {
            printf("  "); // Espaço em branco :)
        }
        for (l = 1; l <= i; l++) // Numeros crescente de acordo com a linha atual (Ex: linha = 3, logo imprimira 3 2 1)
            printf("%d ", l);
        for (l = i - 1; l >= 1; l--) // Numeros decrescente de acordo com a linha atual (Ex: linha = 5, logo imprimira 5 4 3 2 1)
            printf("%d ", l);
        printf("\n");
    }
}