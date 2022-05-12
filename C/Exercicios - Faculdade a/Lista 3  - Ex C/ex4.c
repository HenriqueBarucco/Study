#include <stdio.h>

/*
Escreva um programa que receba três variáveis inteiras (uma para dia, uma para mês e uma para ano) e
verifique se a data recebida é válida ou não.
*/
int main()
{
    int
        dia, // Valor do dia
        mes, // Valor do mes
        ano; // Valor do ano

    printf("Insira o dia: ");
    scanf("%d", &dia);

    printf("Insira o mes: ");
    scanf("%d", &mes);

    printf("Insira o ano: ");
    scanf("%d", &ano);

    if (dia <= 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && ano > 0)
    {
        // Todos os meses que tem 31 dias. (1,3,5,7,8,10,12)
        return printf("%d/%d/%d e uma data valida!", dia, mes, ano);
    }
    if (dia <= 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11) && ano > 0)
    {
        // Todos os meses que tem 30 dias. (4,6,9,11)
        return printf("%d/%d/%d e uma data valida!", dia, mes, ano);
    }
    if (dia <= 29 && mes == 2 && ano % 4 == 0)
    {
        // Todos os anos bissextos que tem 29 dias em fevereiro.
        return printf("%d/%d/%d e uma data valida!", dia, mes, ano);
    }
    if (dia <= 28 && mes == 2 && ano % 4 != 0)
    {
        // Todos os anos que tem 28 dias em fevereiro.
        return printf("%d/%d/%d e uma data valida!", dia, mes, ano);
    }
    else
    {
        return printf("Esta data nao e valida!");
    }
}