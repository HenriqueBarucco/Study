#include <stdio.h>

/*
Fa�a um Programa que converta metros para cent�metros.
*/
int main() {
	float mt, ct;
	
	printf("Insira o valor em metros: ");
	scanf("%f", &mt);
	
	ct = mt * 100;
	
	printf("%.2f metros em centimetros: %.2f", mt, ct);
}
