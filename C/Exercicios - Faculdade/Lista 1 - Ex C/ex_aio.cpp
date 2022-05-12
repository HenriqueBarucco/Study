#include <stdio.h>
#include <stdlib.h>

/*
Este é a junção de todos os exercicios em um arquivo!
*/

int main(){
	int esc;
	printf("|||||||||||||||||||||||||||||||||||||\n");
	printf("||||||| Selecione o exercicio |||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||\n \n");
	printf("[1] Exercicio 1 - Numero <=> 50\n");
	printf("[2] Exercicio 2 - Media\n");
	printf("[3] Exercicio 3 - Divisivel por 8\n");
	printf("[4] Exercicio 4 - Desconto Dinheiro ou Pix\n");
	printf("[5] Exercicio 5 - 50%% ou 45%% Desconto\n");
	printf("[6] Exercicio 6 - Triangulo\n");
	printf("[7] Exercicio 7 - Viagem\n \n");
	printf("[0] Cancelar\n \n");
	printf("|||||||||||||||||||||||||||||||||||||\n");
	scanf("%d", &esc);
	system("@cls||clear");
	
	int num, nota1, nota2, nota3, soma, media, num1, met, val, res10, res15, val1, res, l1, l2, l3;
	
	switch (esc) {
		case 0:
			printf("Cancelado!");
			break;
			
		case 1:
			printf("Digite um numero: ");
			scanf("%d", &num);
			system("@cls||clear");
	
			if(num < 50){
				return printf("%d e menor que 50.", num);
			}
			if(num == 50){
				return printf("%d e igual a 50.", num);
			}
			else {
				return printf("%d e maior que 50.", num);
			}
			
		case 2:
			printf("Informe a primeira nota: ");
			scanf("%d", &nota1);
			system("@cls||clear");
	
			printf("Informe a segunda nota: ");
			scanf("%d", &nota2);
			system("@cls||clear");
			
			printf("Informe a terceira nota: ");
			scanf("%d", &nota3);
			system("@cls||clear");
	
			soma = nota1+nota2+nota3;
			media = soma/3;
			
			if (media >= 6){
				return printf("Nota 1 = %d\nNota 2 = %d\nNota 3 = %d\nMedia = %d\nAluno APROVADO!", nota1, nota2, nota3, media);
			}
			else {
				return printf("Nota 1 = %d\nNota 2 = %d\nNota 3 = %d\nMedia = %d\nAluno REPROVADO!", nota1, nota2, nota3, media);
			}
			
		case 3:
			printf("Informe um numero: ");
			scanf("%d", &num1);
	
			if (num1%8 == 0){
				return printf("O numero %d pode ser divisivel por 8.", num1);
			}
			else {
				return printf("O numero %d nao pode ser divisivel por 8.", num1);
			}
		
		case 4:
			printf("Informe o valor do produto: ");
			scanf("%d",&val);
	
			system("@cls||clear");
	
			printf("Informe o metodo de pagamento:\n \n");
			printf("[1] - Dinheiro\n");
			printf("[2] - PIX\n");
			printf("[3] - Outro(a)\n");
			scanf("%d",&met);
	
			system("@cls||clear");
	
			res10 = val * 0.9;
			res15 = val * 0.85;
	
			switch (met) {
				case 1:
					printf("|| Dinheiro ||\n \n");
					return printf("Valor com 10%% de desconto: %d Reais", res10);
				case 2:
					printf("|| PIX ||\n \n");
					return printf("Valor com 15%% de desconto: %d Reais", res15);
				case 3:
					printf("|| Outro(a) ||\n \n");
					return printf("Valor sem desconto: %d Reais", val);
			}
			
		case 5:
			printf("Insira o valor do produto: ");
			scanf("%d", &val1);
			system("@cls||clear");
	
			if (val1 < 200){
				res = val1 * 1.5;
				return printf("O valor de revenda do produto e: %d", res);
			}
			else {
				res = val1 * 1.45;
				return printf("O valor de revenda do produto e: %d", res);
			}
			
		case 6:
			printf("Insira o valor dos 3 lados do triangulo: ");
			scanf("%d%d%d", &l1, &l2, &l3);
			system("@cls||clear");
	
			if (l1 == l2 && l1 == l3 && l2 == l3) {
				return printf("O triangulo de lados: %d, %d e %d e um equilatero!", l1, l2, l3);
			}
			if (l1 != l2 && l1 != l3 && l2 != l3) {
				return printf("O triangulo de lados: %d, %d e %d e um escaleno!", l1, l2, l3);
			}
			else {
				return printf("O triangulo de lados: %d, %d e %d e um isoceles!", l1, l2, l3);
			}
			
		case 7:
			return printf("NAO FIZ AINDA!");
			}
}
