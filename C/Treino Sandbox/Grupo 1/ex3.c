#include <stdio.h>

/*
Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal
*/

void main()
{
    long
        num,
        coc,
        rec;

    int
        i = 1,
        j = 0,
        octal[100];

    char
        hexa[100];

    printf("Insira um numero: ");
    scanf("%d", &num);

    printf("%d Decimal\n", num);

    // Conversor de Decimal para Octal
    coc = num;
    while (coc != 0)
    {
        octal[i++] = coc % 8;
        coc = coc / 8;
    }

    for (j = i - 1; j > 0; j--)
        printf("%d", octal[j]);

    printf(" Octal\n");
    // Fim do Conversor

    // Conversor de Decimal para Hexa (As vezes sai umas letras quando o numero é muito pequeno, não consegui resolver, passar bem)
    coc = num;
    while (coc != 0)
    {
        rec = coc % 16;
        if (rec < 10)
            hexa[j++] = 48 + rec;
        else
            hexa[j++] = 55 + rec;
        coc = coc / 16;
    }
    for (i = j; i >= 0; i--)
        printf("%c", hexa[i]);

    printf(" Hexadecimal\n");
    // Fim do Conversor
}