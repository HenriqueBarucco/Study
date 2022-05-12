#include <stdio.h>

/*
Faça um programa em C, que a uma vez que se forneça um número inteiro de 1 a 12, apresente o nome do
mês correspondente por extenso ou uma mensagem de inválido, caso o usuário digite um número fora do
estabelecido.
*/
int main()
{
    int
        i,
        valor; // Valor do usuario

    char*
        mes[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; // Meses

    printf("Insira um valor: ");
    scanf("%d", &valor);
    
    for(i = 0; i < 12; i++){
        if(i == valor-1){
            printf("%s", mes[i]);
        }
    }
}