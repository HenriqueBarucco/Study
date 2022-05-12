#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 200

struct funcionario
{
    char
        name[50];
    int
        idade;
    float
        salario;
} s[10];

void main()
{
    int
        i;
    char
        buffer[MAX_SIZE] = {0};

    FILE *fp = NULL;

    // Criar o arquivo
    fp = fopen("funcionarios.txt", "w");
    if (fp == NULL)
    {
        printf("ERRO EM CRIAR O ARQUIVO\n");
        exit(1);
    }

    // Input de dado
    printf("Insira algo que deseja ser armazenado = ");
    if (fgets(buffer, MAX_SIZE, stdin) == NULL)
    {
        printf("Erro em ler o input\n");
        // Fecha o arquivo
        fclose(fp);
        exit(1);
    }

    // Escreve o dado no arquivo
    fputs(buffer, fp);
    // Fecha o arquivo
    fclose(fp);
    printf("Arquivo criado e salvo com sucesso\n");

    /* printf("|| Funcionarios ||\n");
    printf("[1] Adicionar funcionario\n");
    printf("[2] Remover funcionario\n");
    printf("[3] Lista de funcionarios\n");
    printf("[4] Pesquisar funcionario\n");
    printf("[0] Cancelar\n"); */
}