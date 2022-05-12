#include <stdio.h>

/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês
*/
int main() {
	float hrGan, sal;
	int hrMen;
	
	printf("Qual o seu ganho por hora? ");
	scanf("%f", &hrGan);
	
	printf("Qual a quantidade de horas trabalhadas no mes? ");
	scanf("%d", &hrMen);
	
	sal = hrGan * hrMen;
	
	printf("O salario mensal e de: %.2f", sal);
}
