#include <stdio.h>

/* Escreva um programa que, dada a idade de um nadador, classifique-o
em uma das seguintes categorias: */
void main()
{
    int age;
    char *class;

    do
    {
        printf("Insira a idade do nadador para ser classificado: ");
        scanf("%d", &age);
        fseek(stdin, 0, SEEK_END);

        if (age >= 5 && age <= 7)
            class = "Infantil A";

        else if (age >= 8 && age <= 10)
            class = "Infantil B";

        else if (age >= 11 && age <= 13)
            class = "Juvenil A";

        else if (age >= 14 && age <= 17)
            class = "Juvenil B";

        else if (age >= 18)
            class = "Senior";

        else
            printf("Valor invalido!\n");
    } while (age <= 4);

    printf("Nadador de classificacao: %s", class);
}