#include <stdio.h>

/*
Crie um algoritmo que leia um numero inteiro e informe se ele é divisivel por 8.
*/
int main(){
	int num;
	
	printf("Informe um numero: ");
	scanf("%d",&num);
	
	if (num%8 == 0){
		printf("O numero %d pode ser divisivel por 8.",num);
	}
	else {
		printf("O numero %d nao pode ser divisivel por 8.",num);
	}
}

