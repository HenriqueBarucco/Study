#include <stdio.h>

/*
Crie um algoritmo que leia tres notas, calcule a m�dia, e em seguida, informe se o aluno foi
aprovado ou reprovado, lembrando que a m�dia para aprova��o � 6.
*/
int main(){
	int nota1, nota2, nota3;
	
	printf("Informe a primeira nota: ");
	scanf("%d",&nota1);
	
	printf("Informe a segunda nota: ");
	scanf("%d",&nota2);
	
	printf("Informe a terceira nota: ");
	scanf("%d",&nota3);
	
	int soma = nota1+nota2+nota3;
	int media = soma/3;
	
	if (media >= 6){
		printf("Nota 1 = %d\nNota 2 = %d\nNota 3 = %d\nMedia = %d\nAluno APROVADO!",nota1,nota2,nota3,media);
	}
	else {
		printf("Nota 1 = %d\nNota 2 = %d\nNota 3 = %d\nMedia = %d\nAluno REPROVADO!",nota1,nota2,nota3,media);
	}
}

