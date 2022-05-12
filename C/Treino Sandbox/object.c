#include <stdio.h>

struct Valores
{
    int valor1;
    int valor2;
    int valor3;
};

int main()
{
    struct Valores Teste[2];

    int
        num;

    Teste[1].valor1 = 5;
    Teste[1].valor2 = 8;
    Teste[1].valor3 = 15;

    Teste[2].valor1 = 848;
    Teste[2].valor2 = 995;
    Teste[2].valor3 = 105;

    printf("Insira um valor:");
    scanf("%d", &num);

    if (num > 2 || num < 0) return printf("Erro!");

    printf("Soma = %d\n", Teste[num].valor1);
    printf("Dividir = %d\n", Teste[num].valor2);
    printf("Subtracao = %d\n", Teste[num].valor3);
}