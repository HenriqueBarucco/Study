#include <stdio.h>

/* Escreva um programa que, dada a idade de um nadador, classifique-o 
em uma das seguintes categorias: */
void main()
{
    int idade;
    char *class;

    printf("Insira a idade do nadador para ser classificado: ");
    scanf("%d", &idade);

    if (idade <= 4)
        return printf("Nadador sem idade suficiente para ter uma classificacao!");

    if (idade >= 5 && idade <= 7)
        class = "Infantil A";

    else if (idade >= 8 && idade <= 10)
        class = "Infantil B";

    else if (idade >= 11 && idade <= 13)
        class = "Juvenil A";

    else if (idade >= 14 && idade <= 17)
        class = "Juvenil B";

    else
        class = "Senior";

    printf("Nadador de classificacao: %s", class);
}