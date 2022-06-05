#include <stdio.h>

/* Escreva um programa que, dada a idade de um nadador, classifique-o 
em uma das seguintes categorias: */
void main()
{
    int age;
    char *class;

    printf("Insira a idade do nadador para ser classificado: ");
    scanf("%d", &age);

    if (age <= 4)
        return printf("Nadador sem idade suficiente para ter uma classificacao!");

    if (age >= 5 && age <= 7)
        class = "Infantil A";

    else if (age >= 8 && age <= 10)
        class = "Infantil B";

    else if (age >= 11 && age <= 13)
        class = "Juvenil A";

    else if (age >= 14 && age <= 17)
        class = "Juvenil B";

    else
        class = "Senior";

    printf("Nadador de classificacao: %s", class);
}