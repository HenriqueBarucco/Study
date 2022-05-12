#include <stdio.h>

/*
Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
*/
int main() {
	float r, a, pi;
	pi = 3.142857;
	
	printf("Insira o raio do circulo: ");
	scanf("%f", &r);
	
	a = pi * (r * r);
	
	printf("A area de um circulo de raio %.2f e: %.2f", r, a);
}
