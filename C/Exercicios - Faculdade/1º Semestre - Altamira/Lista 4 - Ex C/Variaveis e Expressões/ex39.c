#include <stdio.h>

/* A importaˆ ncia de R$ 780.000,00 sera´
Sendo que da quantia total:
dividida entre treˆ s ganhadores de um concurso.
• O primeiro ganhador recebera´ 46%;
• O segundo recebera´ 32%;
• O terceiro recebera´ o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores. */
void main()
{
    double n = 780000.00;

    printf("Primeiro ganhador %.2lf\n", n*0.46);
    printf("Segundo ganhador %.2lf\n", n*0.32);
    printf("Terceiro ganhador %.2lf", n*0.22);
}