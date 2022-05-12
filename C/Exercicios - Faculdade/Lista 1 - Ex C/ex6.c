#include <stdio.h>

/*
Crie um algoritimo que leia a medida dos 3 lados de um triangulo e determine se ele � equilatero,
isosceles ou escaleno. Lembrando que quando os tres lados forem iguais, trata-se de equilatero,
quando dois lados s�o iguais trata-se de is�celes e quando nenhum lado for igual � escaleno.

3 lados iguais = equilatero
2 lados iguais = is�celes
0 lados iguais = escaleno
*/
int main(){
	int l1, l2, l3;
	
	printf("Insira o valor dos 3 lados do triangulo: ");
	scanf("%d%d%d", &l1, &l2, &l3);
	
	if (l1 == l2 && l1 == l3 && l2 == l3) {
		/*
		Verifica se todos os lados s�o os mesmos, se sim, � entrado neste If.
		*/
		return printf("O triangulo de lados: %d, %d e %d e um equilatero!", l1, l2, l3);
	}
	if (l1 != l2 && l1 != l3 && l2 != l3) {
		/*
		Verifica se todos os lados n�o s�o os mesmos, se todos forem diferente, � entrado neste If.
		*/
		return printf("O triangulo de lados: %d, %d e %d e um escaleno!", l1, l2, l3);
	}
	else {
		/*
		Caso n�o entre em nenhum dos if's, acaba caindo aqui, que mostra que � um triangulo is�celes.
		*/
		printf("O triangulo de lados: %d, %d e %d e um isoceles!", l1, l2, l3);
	}
}

