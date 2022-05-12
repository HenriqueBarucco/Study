#include <stdio.h>

/*
Faça um programa que responda se um ano é bissexto ou não
*/
int main()
{
    int
        year; // Variavel do ano

    printf("Insira um ano: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        // Verifica se há sobra na multiplicação do ano por 4, caso não, o ano é bissexto.
        printf("O ano %d e bissexto!", year);
    }
    else
    {
        // Se a condição do if não for verdadeira, é enviado o "else" logo o ano não é bissexto.
        printf("O ano %d nao e bissexto!", year);
    }
}