#include <stdio.h>

/*
Faça um Programa que peça dois números e imprima a soma.
*/
int main() {
	float n1, n2, soma;
	
	printf("Insira um valor: ");
	scanf("%f", &n1);
	
	printf("Insira outro valor: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	printf("O valor da soma de %.2f e %.2f e: %.2f", n1, n2, soma);
}
