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

/*
    variável = matricula
    ////
    apresentsar um menu
    opções vai calcular (primeiro e o ultimo digito da matricula)
    escolha do usuario == (4º posição = adição) 
    escolha do usuario == (2º posição = subtração) 
    escolha do usuario == (5º posição = multiplicação) 
    escolha do usuario == (3º posição = divisão) 

    escolha do usuario == (1º posição = encerrar) 
*/

void main()
{
    int userMat[6],
        lastDigit,
        esc;

    printf("Insira a sua matricula: ");
    scanf("%01d%01d%01d%01d%01d%d", &userMat[0], &userMat[1], &userMat[2], &userMat[3], &userMat[4], &userMat[5]);
    fseek(stdin,0,SEEK_END);

    printf("|| Escolha ||\n\n");
    printf("[%d] Adicao\n", userMat[3]);
    printf("[%d] Subtracao\n", userMat[1]);
    printf("[%d] Multiplicacao\n", userMat[4]);
    printf("[%d] Divisao\n\n", userMat[2]);
    printf("[%d] Sair\n\n", userMat[0]);

    scanf("%d", &esc);

    lastDigit = userMat[5] % 10;

    if (esc == userMat[3])
        printf("%d + %d = %d", userMat[0], lastDigit, userMat[0] + lastDigit);
    else if (esc == userMat[1])
        printf("%d - %d = %d", userMat[0], lastDigit, userMat[0] - lastDigit);
    else if (esc == userMat[4])
        printf("%d * %d = %d", userMat[0], lastDigit, userMat[0] * lastDigit);
    else if (esc == userMat[2])
        printf("%d / %d = %d", userMat[0], lastDigit, userMat[0] / lastDigit);
    else
        printf("Programa encerrado!");
}