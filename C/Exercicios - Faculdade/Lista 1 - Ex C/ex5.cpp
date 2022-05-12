#include <stdio.h>

/*
Joao comprou um produto e quer vendê-lo com um lucro de 50% se o valor do produto for menor que
$200,00, caso contrario o lucro será de 45%.
*/
int main(){
	int val;
	
	printf("Insira o valor do produto: ");
	scanf("%d", &val);
	
	if (val < 200){
		/*
		Valor menor que 200, logo o lucro é de 50%
		*/
		int res = val * 1.5; /*Soma de 50% sobre o valor*/
		printf("O valor de revenda do produto e: %d", res);
	}
	else {
		/*
		Valor maior ou igual que 200, logo o lucro é de 45%
		*/
		int res = val * 1.45; /*Soma de 45% sobre o valor*/
		printf("O valor de revenda do produto e: %d", res);
	}
}

