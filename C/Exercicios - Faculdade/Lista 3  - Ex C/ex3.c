#include <stdio.h>

/*
Faça um programa que o usuário informe o salário recebido e o total gasto. Deverá ser exibido na tela
“Gastos dentro do orçamento” caso o valor gasto não ultrapasse o valor do salário e “Orçamento estourado”
se o valor gasto ultrapassar o valor do salário.
*/
int main()
{
    float
        salario, // Valor do salario
        gasto;   // Valor gasto

    printf("Insira o seu salario: ");
    scanf("%f", &salario);

    printf("Insira o total gasto: ");
    scanf("%f", &gasto);

    if (salario < gasto)
    {
        // Orçamento estourado
        printf("O seu orcamento foi estourado!");
    }
    else
    {
        printf("Voce esta dentro do orcamento!");
    }
}