#include <stdio.h>

/*
Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.
*/
int main() {
	float l, a;
	
	printf("Insira o valor do lado do quadrado: ");
	scanf("%f", &l);
	
	a = l * l;
	
	printf("A area do quadrado de lado %.2f e: %.2f\nO dobro desta area e: %.2f", l, a, a * 2);
}
