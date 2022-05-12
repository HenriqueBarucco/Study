#include <stdio.h>

/*
Faça um programa que peça o tamanho de um arquivo para download (em MB) e a
velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado
de download do arquivo usando este link (em minutos).
*/
int main() {
	float mb, mbps, tempo;
	
	printf("Insira o tamanho do arquivo em MB: ");
	scanf("%f", &mb);
	
	printf("Insira a velocidade da Internet em Mbps: ");
	scanf("%f", &mbps);
	
	tempo = ((mb * 8) / mbps) / 60;
	
	printf("Tempo aproximado para download: %.2f Minutos", tempo);
}
