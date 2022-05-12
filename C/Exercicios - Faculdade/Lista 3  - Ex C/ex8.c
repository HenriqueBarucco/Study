#include <stdio.h>

/*
Implemente um código em C para aprovar empréstimo bancário. O código deve pedir 3 informações: valor
do empréstimo, número de parcelas e salário do solicitante. Aprovar empréstimo caso o valor das parcelas
represente no máximo 30% do salário do solicitante.
*/
int main()
{
    float
        valor,        // Valor do emprestimo
        parcelas,     // Numero de parcelas
        valorParcela, // Valor de cada parcela
        salario;      // Salario

    printf("Insira o valor do emprestimo: ");
    scanf("%f", &valor);

    printf("Insira o numero de parcelas: ");
    scanf("%f", &parcelas);

    printf("Insira o salario do solicitante: ");
    scanf("%f", &salario);

    valorParcela = valor / parcelas;

    if (valorParcela <= (salario * 0.3))
    {
        printf("Emprestimo aprovado!");
    }
    else
    {
        printf("Emprestimo negado!");
    }
}