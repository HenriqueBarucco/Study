#include <stdio.h>

/* Fac¸a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fo´rmulas (onde h corresponde a` altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44,7 */
void main()
{
    double high, sex;

    scanf("%lf", &high);
    printf("1 - Homem\n2 - Mulher\n");
    scanf("%lf", &sex);

    if (sex == 1)
    {
        printf("Peso ideal = %.2lf", ((72.7 * high) - 58));
    }
    else
    {
        printf("Peso ideal = %.2lf", ((62.1 * high) - 44.7));
    }
}