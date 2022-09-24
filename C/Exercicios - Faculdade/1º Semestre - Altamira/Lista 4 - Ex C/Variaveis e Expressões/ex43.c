#include <stdio.h>

/* Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
a comissa˜o do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
• a comissa˜o do vendedor, no caso da venda ser parcelada (5% sobre o valor total) */
void main()
{
    double valor;

    scanf("%lf", &valor);
    printf("Total a pagar com desconto %.2lf\n", valor*0.90);
    printf("Valor de parcela, em 3x %.2lf\n", valor/3);
    printf("Comissao do vendedor, no caso de venda ser a vista %.2lf\n", (valor*0.90)*0.05);
    printf("Comissao do vendedor, no caso da venda ser parcelada %.2lf\n", valor*0.05);
}