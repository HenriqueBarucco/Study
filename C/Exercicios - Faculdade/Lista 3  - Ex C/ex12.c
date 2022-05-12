#include <stdio.h>

/*
A empresa XKW concedeu um bônus de 30% do valor do salário a todos os funcionários com tempo de
trabalho na empresa superior a 5 anos, 20% aos com 5 anos e de 10% aos demais. Faça um programa que
receba o salário e o tempo de serviço de um funcionário, calcule e mostre o valor do bônus recebido por ele.
*/
int main()
{
    float
        salario,
        tempo,
        valor;

    printf("Informe o seu salario: ");
    scanf("%f", &salario);

    printf("Informe o seu tempo de servico: ");
    scanf("%f", &tempo);

    if (tempo > 5)
    {
        // Superior a 5 anos - 30%
        valor = salario * 1.30;
        return printf("Salario reajustado para: %.2f", valor);
    }
    if (tempo == 5)
    {
        // Igual 5 anos - 20%
        valor = salario * 1.20;
        return printf("Salario reajustado para: %.2f", valor);
    }
    else
    {
        // Outros
        valor = salario * 1.10;
        return printf("Salario reajustado para: %.2f", valor);
    }
}