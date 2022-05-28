#include <stdio.h>

/* Fac¸a um programa para ler as dimenso˜ es de um terreno (comprimento c e largura l), bem como o
prec¸o do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela. */
void main()
{
    double dimC, dimL, pre;

    scanf("%lf%lf%lf", &dimC, &dimL, &pre);
    printf("%.2lf", 2*(dimC+dimL)*pre);
}