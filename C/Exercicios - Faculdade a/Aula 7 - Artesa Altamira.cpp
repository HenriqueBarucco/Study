#include <stdio.h>	// Biblioteca padão
#include <stdlib.h> // Biblioteca para o uso da função "system("@cls||clear")"
/*
Calcular o valor ideal dos produtos
Caixa da empresa /\/\/\/\/\

Trico
Custo = Somo lãs + Preço do tempo
Preço do tempo = Tempo gasto * Valor da hora
Preço total = Custo + 10%

Pintura
Custo = (Soma total tintas / 3) + Preço tempo gasto
Preço do tempo = Tempo * Valor da hora
Preço total = Custo + 10%
*/

int main()
{
	int
		i,			// Base do for
		produto,	// Escolha do cliente para o SwitchCase
		tempoGasto; // Tempo gasto em horas para a confecção

	float
		custoMat,	// Custo do material (Tanto lã, quanto tintas)
		valorHora,	// Valor de custo por hora trabalhada
		precoTempo, // Preço do tempo total (tempoGasto*valorHora)
		custo,		// Custo do produto
		precoTotal; // Preço total do produto (Custo + 10%)

	for (i = 0; i < 3; i++) // Repetir o escopo abaixo 3x
	{
		system("@cls||clear"); // Limpar o terminal

		printf("Escolha um dos produtos abaixo:\n\n");
		printf("[1] - Trico\n");
		printf("[2] - Pintura\n");
		printf("[0] - Nenhum\n");
		scanf("%d", &produto); // Adicionar o valor inserido pelo usuario para a variavel "produto"

		switch (produto) // Usar a variavel "produto" e dar escolhas para a mesma
		{
		case 1: // Caso o valor inserido em "produto" for 1
			// Trico
			printf("Informe o valor do custo das las: ");
			scanf("%f", &custoMat);

			printf("Informe o tempo gasto: ");
			scanf("%d", &tempoGasto);

			printf("Informe o valor da hora: ");
			scanf("%f", &valorHora);

			precoTempo = tempoGasto * valorHora;
			custo += custoMat + precoTempo;
			precoTotal += custo * 1.10;
			break;
		case 2: // Caso o valor inserido em "produto" for 2
			// Pintura
			printf("Informe o valor do custo das tintas: ");
			scanf("%f", &custoMat);

			printf("Informe o tempo gasto: ");
			scanf("%d", &tempoGasto);

			printf("Informe o valor da hora: ");
			scanf("%f", &valorHora);

			precoTempo = tempoGasto * valorHora;
			custo += (custoMat / 3) + precoTempo;
			precoTotal += custo * 1.10;
			break;
		case 0:	   // Caso o valor inserido em "produto" for 0
			break; // Não vai fazer nada, simplesmente terminara essa execução
		}

		system("@cls||clear"); // Limpar o terminal

		printf("Total faturado: %.2f Reais\n", precoTotal);
		printf("Valor gasto na semana: %.2f Reais", (precoTotal - custo) / 3);
	}
}
