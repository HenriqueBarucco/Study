#include <stdio.h>

/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas 
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se
que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o
sindicato, faça um programa que nos dê: salário bruto, quanto
pagou ao INSS, quanto pagou ao sindicato, o salário líquido.

Quanto ganha por hora
Horas trabalhadas

Total do salario
-11% Imposto de Renda
-8% INSS
-5 % Sindicato

Salario bruto
Quanto pagou para o INSS, Sindicato
Salario liquido
*/
int main(){
	float hrGanho, hrTrab, salBruto, salLiquid, impRen, inss, sind;
	
	printf("Insira o valor ganho por hora trabalhada: ");
	scanf("%f", &hrGanho);
	
	printf("Insira o numero de horas trabalhadas no mes: ");
	scanf("%f", &hrTrab);
	
	salBruto = hrGanho * hrTrab;
	impRen = salBruto * 0.11;
	inss = salBruto * 0.08;
	sind = salBruto * 0.05;
	salLiquid = salBruto - (impRen + inss + sind);
	
	printf("|| Salario ||\n\n");
	printf("Valor bruto: %.2f\n", salBruto);
	printf("Imposto de renda: %.2f\n", impRen);
	printf("INSS: %.2f\n", inss);
	printf("Sindicato: %.2f\n", sind);
	printf("Valor liquido: %.2f", salLiquid);
}
