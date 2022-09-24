#include <stdio.h>

struct Pessoa
{
    char cpf[11];
    char primeiro_nome[100];
    char ultimo_nome[100];
    int idade;
    float peso;
};

void main()
{
    struct Pessoa pessoa;

    printf("Insira o cpf:\n");
    scanf("%s", &pessoa.cpf);
    printf("Insira o primeiro nome:\n");
    scanf("%s", &pessoa.primeiro_nome);
    printf("Insira o ultimo nome:\n");
    scanf("%s", &pessoa.ultimo_nome);
    printf("Insira a idade:\n");
    scanf("%d", &pessoa.idade);
    printf("Insira o peso:\n");
    scanf("%f", &pessoa.peso);

    printf("\nUsuario inserido:\n\n");
    printf("Nome: %s %s\n", pessoa.primeiro_nome, pessoa.ultimo_nome);
    printf("CPF: %s\n", pessoa.cpf);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f", pessoa.peso);
}