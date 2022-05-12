#include <stdio.h>

/*
Uma empresa resolveu aumentar os preços dos seus produtos pelo percentual da inflação do ano corrente.
Para tanto encomendou a você um programa que irá receber o preço de um produto e um percentual da
inflação. Nessa função, você deverá calcular e retornar o valor de aumento do produto e mostrar o valor
corrigido, já com o acréscimo calculado.
*/
int main()
{
  float
      valor, // Valor do produto
      infla, // Valor da infação
      res;   // Resultado

  printf("Insira o valor do produto: ");
  scanf("%f", &valor);

  printf("Insira o percentual da infacao: ");
  scanf("%f", &infla);

  res = valor * (1 + (infla / 100)); // Conta para calcular o resultado (transformar a porcentagem em decimal, adicionar "1" e multiplicar o valor)

  printf("O valor final e: %2.f", res);
}