#include <stdio.h>

/*
Desenvolva um programa que recebe do usuário, o placar de um jogo de futebol (os gols de cada time) e os
nomes dos times, em seguida, informa se o resultado foi um empate, se a vitória foi do primeiro time ou do
segundo time.

Ele não aceita nomes compostos... :)
*/
int main()
{
    int
        placar1, // Quantidade de gols do primeiro time
        placar2; // Quatidade de gold do segundo time

    char
        time1[30], // Nome do primeiro time
        time2[30]; // Nome do segundo time

    printf("Insira o placar do primeiro time: ");
    scanf("%d", &placar1);

    printf("Insira o placar do segundo time: ");
    scanf("%d", &placar2);

    printf("Insira o nome do primeiro time: ");
    scanf("%s", time1);

    printf("Insira o nome do segundo time: ");
    scanf("%s", time2);

    if (placar1 > placar2)
    {
        // Vitorio do time1
        return printf("O %s ganhou do %s por %dx%d!", time1, time2, placar1, placar2);
    }
    if (placar1 < placar2)
    {
        // Vitoria do time2
        return printf("O %s ganhou do %s por %dx%d!", time2, time1, placar2, placar1);
    }
    if (placar1 == placar2)
    {
        // Empate
        return printf("Empate entre os times %s e %s de %dx%d!", time1, time2, placar1, placar2);
    }
}