#include <stdio.h>

/*
Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s
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
