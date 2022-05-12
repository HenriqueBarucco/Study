#include <stdio.h>

/*
Desenvolva um programa para comparar a idade de Paulo, de Antônia e de Irene e informar quem é o mais
velho. Dados de entrada: idade de Paulo, de Antônia e de Irene (tipo das variáveis: inteiro, e valor em anos).
Considere que essas pessoas possuem idades diferentes.
*/
int main()
{
    int
        paulo,   // Idade de Paulo
        antonia, // Idade de Antonia
        irene;   // Idade de Irene

    printf("Informe a idade de Paulo: ");
    scanf("%d", &paulo);

    printf("Informe a idade da Antonia: ");
    scanf("%d", &antonia);

    printf("Informe a idade de Irene: ");
    scanf("%d", &irene);

    if (paulo > irene && paulo > antonia)
    {
        // Paulo é o mais velho
        return printf("Paulo e o mais velho entre os 3, tendo %d anos.", paulo);
    }
    if (antonia > irene && antonia > paulo)
    {
        // Antonia é a mais velha
        return printf("Antonia e a mais velha entre os 3, tendo %d anos.", antonia);
    }
    if (irene > paulo && irene > antonia)
    {
        // Irene é a mais velha
        return printf("Irene e a mais velha entre os 3, tendo %d anos.", irene);
    }
    else
    {
        printf("Ha pessoas com idades semelhantes entre os valores.");
    }
}