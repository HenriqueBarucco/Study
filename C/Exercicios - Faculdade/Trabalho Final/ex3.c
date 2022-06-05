#include <stdio.h>

/* Faça um programa que tenha como variável que receba o número de
sua matricula (somente números). Em seguida apresente um menu de
opções para o cálculo das seguintes operações entre o primeiro e último
número da matricula.
• Se o usuário digitar um número igual o quarto número de sua
matricula - faça uma adição
• Se o usuário digitar um número igual o segundo número de sua
matricula - faça uma subtração
• Se o usuário digitar um número igual o quinto número de sua
matricula - faça uma multiplicação
• Se o usuário digitar um número igual o terceiro número de sua
matricula - faça uma divisão.
• Se o usuário digitar um número igual o primeiro número de sua
matricula - saída do programa. */

void main()
{
    int userMat[5],
        esc;

    printf("Insira a sua matricula: ");
    scanf("%01d%01d%01d%01d%01d", &userMat[0], &userMat[1], &userMat[2], &userMat[3], &userMat[4]);
    fseek(stdin,0,SEEK_END);

    printf("|| Escolha ||\n\n");
    printf("[%d] Adicao\n", userMat[3]);
    printf("[%d] Subtracao\n", userMat[1]);
    printf("[%d] Multiplicacao\n", userMat[4]);
    printf("[%d] Divisao\n\n", userMat[2]);
    printf("[%d] Sair\n\n", userMat[0]);

    scanf("%d", &esc);

    if (esc == userMat[3])
        printf("%d + %d = %d", userMat[0], userMat[4], userMat[0] + userMat[4]);
    else if (esc == userMat[1])
        printf("%d - %d = %d", userMat[0], userMat[4], userMat[0] - userMat[4]);
    else if (esc == userMat[4])
        printf("%d * %d = %d", userMat[0], userMat[4], userMat[0] * userMat[4]);
    else if (esc == userMat[2])
        printf("%d / %d = %d", userMat[0], userMat[4], userMat[0] / userMat[4]);
    else
        printf("Programa encerrado!");
}