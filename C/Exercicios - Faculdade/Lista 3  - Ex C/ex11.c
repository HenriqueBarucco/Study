#include <stdio.h>

/*
Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele.
Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média,
informar o conceito de acordo com a tabela:
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E
*/
int main()
{
    double
        nota1, // Nota 1
        nota2, // Nota 2
        nota3, // Nota 3
        ME,    // Media de Exercicios
        MA;    // Media de Aproveitamento

    printf("Insira a nota 1: ");
    scanf("%lf", &nota1);

    printf("Insira a nota 2: ");
    scanf("%lf", &nota2);

    printf("Insira a nota 3: ");
    scanf("%lf", &nota3);

    printf("Insira a media das notas dos exercicios: ");
    scanf("%lf", ME);

    MA = (nota1 + nota2 * 2 + nota3 * 3 + ME) / 7;
    printf("%lf", MA);

    if (MA >= 9)
    {
        // Maior ou igual a 9 A
        return printf("A nota final foi A");
    }
    if (MA >= 7.5 && MA < 9)
    {
        // Maior ou igual a 7.5 e menor que 9 B
        return printf("A nota final foi B");
    }
    if (MA >= 6 && MA < 7.5)
    {
        // Maior ou igual a 6 e menor que 7.5 C
        return printf("A nota final foi C");
    }
    if (MA >= 4 && MA < 6)
    {
        // Maior ou igual a 4 e menor que 6 D
        return printf("A nota final foi D");
    }
    if (MA < 4)
    {
        // Menor que 4 E
        return printf("A nota final foi E");
    }
}