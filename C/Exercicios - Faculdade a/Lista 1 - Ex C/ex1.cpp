#include <stdio.h>

/*
Crie um algoritmo que leia um numero e alerte se ele é menor que 50, igual a 50 ou maior que 50.
*/
int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num < 50){
		return printf("%d e menor que 50.",num);
	}
	if(num == 50){
		return printf("%d e igual a 50.",num);
	}
	else {
		return printf("%d e maior que 50.",num);
	}
}

