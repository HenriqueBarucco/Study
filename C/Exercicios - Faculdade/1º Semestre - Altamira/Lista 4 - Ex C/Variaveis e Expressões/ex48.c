#include <stdio.h>

//Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
void main()
{
    int seg;

    scanf("%d", &seg);
    printf("Horas: %d\n", seg/60/60);
    printf("Minutos: %d\n", seg/60);
    printf("Segundos: %d\n", seg);
}