#include <stdio.h>

/*
Escreva um programa que informe o valor de uma corrida de taxi. Para calcular o valor da corrida é
necessário saber a distância percorrida em quilômetros e qual o tipo da bandeira da corrida, 1 ou 2. Caso a
bandeira seja 1, o preço do quilometro percorrido é de R$ 3,70, se a bandeira for 2 o valor é de R$ 5,30.
*/
int main()
{
    float
        distancia, // Distancia em km
        valor;     // Valor da corrida

    int
        bandeira; // Bandeira escolhida

    printf("Insira a distancia em quilometros: ");
    scanf("%f", &distancia);

    printf("Insira o tipo de bandeira: ");
    scanf("%d", &bandeira);

    switch (bandeira)
    {
    case 1:
        printf("O valor da corrida ficou: %2.f Reais", distancia * 3.70);
        break;

    case 2:
        printf("O valor da corrida ficou: %2.f Reais", distancia * 5.30);
        break;

    default:
        break;
    }
}