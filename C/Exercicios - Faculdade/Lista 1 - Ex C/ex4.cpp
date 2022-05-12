#include <stdio.h>
#include <stdlib.h>

/*
Crie um algoritmo que calcule o desconto de uma loja, para isso, receba o valor do produto,
receba o metodo de pagamento, se o pagamento for em dinheiro, aplicar 10% de desconto, se for em pix,
aplicar 15% de desconto, e se for outra forma de pagamento, não aplicar desconto. Informe o
valor final do produto.

Dinheiro 10%
Pix 15%

TO DO: 
Aceitar valores com decimais (ex: 8,50)
*/
int main(){
	int met, val;
	
	printf("Informe o valor do produto: ");
	scanf("%d",&val);
	
	system("@cls||clear"); /*Função para limpar a tela*/
	
	printf("Informe o metodo de pagamento:\n \n");
	printf("[1] - Dinheiro\n");
	printf("[2] - PIX\n");
	printf("[3] - Outro(a)\n");
	scanf("%d",&met);
	
	system("@cls||clear"); /*Função para limpar a tela*/
	
	/*
	Variaveis com o desconto, para ser utilizadas abaixo.
	*/
	int res10 = val * 0.9; /*Multiplicação por 0.9, perdendo 10% de seu valor*/
	int res15 = val * 0.85; /*Multiplicação por 0.85, perdendo 15% de seu valor*/
	
	switch (met) {
		case 1:
			printf("|| Dinheiro ||\n \n");
			printf("Valor com 10%% de desconto: %d", res10);
			break;
		case 2:
			printf("|| PIX ||\n \n");
			printf("Valor com 15%% de desconto: %d", res15);
			break;
		case 3:
			printf("|| Outro(a) ||\n \n");
			printf("Valor sem desconto: %d", val);
			break;
	}
}


