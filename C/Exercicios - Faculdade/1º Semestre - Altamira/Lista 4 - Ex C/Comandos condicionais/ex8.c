#include <stdio.h>

/* Fac¸a um programa que leia 2 notas de um aluno, verifique se as notas sa˜ o va´lidas e
exiba na tela a me´ dia destas notas. Uma nota va´lida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota na˜ o possua um valor va´ lido, este fato deve ser
informado ao usua´rio e o programa termina. */

void main()
{
    double nota1, nota2;

    scanf("%lf%lf", &nota1, &nota2);
    if (nota1 < 0.0 || nota1 > 10.0 || nota2 < 0.0 || nota2 > 10.0)
    {
        printf("Notas invalidas");
    }
    else
    {
        printf("Media = %.2lf", (nota1 + nota2) / 2);
    }
}