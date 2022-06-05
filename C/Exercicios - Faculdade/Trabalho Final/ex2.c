#include <stdio.h>
#include <math.h>

/* As tarifas de certo parque de estacionamento são as seguintes:
• 1ª e 2ª hora - R$ 2,00 cada
• 3ª e 4ª hora - R$ 2,80 cada
• 5ª hora e seguintes - R$ 3,00 cada
O número de horas a pagar é sempre inteiro e arredondado por
excesso. Deste modo, quem estacionar durante 61 minutos pagará´
por duas horas, que é o mesmo que pagaria se tivesse permanecido
120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e
minutos.
Por exemplo, o par 12 50 representara “dez para a uma da tarde”.
Pretende-se criar um programa que, lidos pelo teclado os momentos
de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com
intervalo não superior a 24 horas. Portanto, se uma dada hora de
chegada for superior à da partida, isso não é uma situação o de erro,
antes significará que a partida ocorreu no dia seguinte ao da chegada. */
int main()
{
    int arrive[2],
        left[2],
        stay[2];

    double payment = 0,
           stayMinutes;

    do
    {
        printf("Insira o horario de chegada do veiculo: ");
        scanf("%d%d", &arrive[0], &arrive[1]);
    } while (arrive[0] > 23 || arrive[1] > 59);

    do
    {
        printf("Insira o horario de saida do veiculo: ");
        scanf("%d%d", &left[0], &left[1]);
    } while (left[0] > 23 || left[1] > 59);

    if (arrive[0] <= left[0] && arrive[1] <= left[1]) // Hora e minuto de chegada menor que hora e minuto de saida
    {
        stay[0] = left[0] - arrive[0];
        stay[1] = (left[1] - arrive[1]);
    }
    else if (arrive[0] < left[0] && arrive[1] > left[1]) // Hora menor que hora de saida e minuto de chegada maior que minuto de saida
    {
        stay[0] = left[0] - arrive[0];
        stay[1] = 60 - (arrive[1] - left[1]);
        stay[0] -= 1;
    }
    else if (arrive[0] >= left[0] && arrive[1] > left[1]) // Hora e minuto de chegada maior que hora e minuto de saida
    {
        stay[0] = (left[0] - arrive[0]) + 24;
        stay[1] = 60 - (arrive[1] - left[1]);
        stay[0] -= 1;
    }
    else if (arrive[0] > left[0] && arrive[1] <= left[1]) // Hora maior que hora de saida e minuto de chegada menor que minuto de saida
    {
        stay[0] = (left[0] - arrive[0]) + 24;
        stay[1] = (left[1] - arrive[1]);
    }

    stayMinutes = stay[0] * 60 + stay[1];
    float hoursStayed = ceil(stayMinutes/60);

    if (hoursStayed <= 2) // 1ª e 2ª Hora
        payment = hoursStayed * 2.0;
    else if (hoursStayed <= 4) // 3ª e 4ª Hora
    {
        payment = 2 * 2.0;
        payment += (hoursStayed - 2) * 2.8;
    }
    else // 5ª Hora ou mais
    {
        payment = 2 * 2.0;
        payment += 2 * 2.8;
        payment += (hoursStayed - 4) * 3.0;
    }

    printf("Tempo de permanencia: %02d:%02dh\n", stay[0], stay[1]);
    printf("Valor do estacionamento: R$ %.2lf\n", payment);
}