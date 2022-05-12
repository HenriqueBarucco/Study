#include <stdio.h>
#include <math.h>

/*
Fa�a um programa para uma loja de tintas. O programa dever� pedir o tamanho em
metros quadrados da �rea a ser pintada. Considere que a cobertura da tinta � de 1 litro
para cada 3 metros quadrados e que a tinta � vendida em latas de 18 litros, que custam
R$ 80,00. Informe ao usu�rio a quantidades de latas de tinta a serem compradas e o
pre�o total.
*/
int main() {
	float mtQ, l, tin;
	
	printf("Insira a quantidade de metros quadrado a ser pintada: ");
	scanf("%f", &mtQ);
	
	l = mtQ/3;
	tin = l/18;
	
	printf("Para pintar %0.2fmt quadrado sera necessario %.0f lata(s) de tinta. No valor de %.0f Reais.", mtQ, ceil(tin), tin * 80);
}
