#include <stdio.h>

/*
Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
*/
int main() {
	float r, a, pi;
	pi = 3.142857;
	
	printf("Insira o raio do circulo: ");
	scanf("%f", &r);
	
	a = pi * (r * r);
	
	printf("A area de um circulo de raio %.2f e: %.2f", r, a);
}
