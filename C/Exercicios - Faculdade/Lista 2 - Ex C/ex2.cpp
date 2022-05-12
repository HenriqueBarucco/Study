#include <stdio.h>

/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/
int main() {
	int n1, n2, n3, n4, media;
	
	printf("Informe a nota do primeiro bimestre: ");
	scanf("%d", &n1);
	
	printf("Informe a nota do segundo bimestre: ");
	scanf("%d", &n2);
	
	printf("Informe a nota do terceiro bimestre: ");
	scanf("%d", &n3);
	
	printf("Informe a nota do quarto bimestre: ");
	scanf("%d", &n4);
	
	media = (n1 + n2 + n3 + n4)/4;
	
	printf("|| Notas ||\n\n");
	printf("Primeiro bimestre: %d\n", n1);
	printf("Segundo bimestre: %d\n", n2);
	printf("Terceiro bimestre: %d\n", n3);
	printf("Quarto bimestre: %d\n\n", n4);
	printf("Media: %d", media);
}
