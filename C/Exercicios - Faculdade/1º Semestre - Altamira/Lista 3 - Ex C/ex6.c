#include <stdio.h>

/*
Escrevaum programa que pergunte ao usuário qual operação matemática irá realizar, e em seguida receba
dois números do usuário. Na sequencia deve ser apresentado o resultado da operação selecionada (simular
uma calculadora comum)
*/
int main()
{
    int
        operacao; // Operação
    float
        valor1, // Valor 1
        valor2; // Valor 2

    printf("Escolha a operacao: \n\n");
    printf("[1] Adicao\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    scanf("%d", &operacao);

    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%f", &valor2);

    switch (operacao)
    {
    case 1:
        /* Adicao */
        printf("%.2f + %.2f = %.2f", valor1, valor2, valor1 + valor2);
        break;

    case 2:
        /* Subtracao */
        printf("%.2f - %.2f = %.2f", valor1, valor2, valor1 - valor2);
        break;

    case 3:
        /* Multiplicacao */
        printf("%.2f * %.2f = %.2f", valor1, valor2, valor1 * valor2);
        break;

    case 4:
        /* Divisao */
        printf("%.2f / %.2f = %.2f", valor1, valor2, valor1 / valor2);
        break;

    default:
        break;
    }
}