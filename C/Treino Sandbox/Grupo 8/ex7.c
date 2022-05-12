/*
Construir um programa em "C" que implementa uma agenda eletrônica. O
programa deve ter um menu com as seguintes opções:

1- Entrar um nome na agenda
2- Imprimir na tela os dados de uma das pessoas cadastradas (consulta por
nome)
3- Imprimir na impressora a lista dos nomes que começam pela letra indicada

Cada entrada da agenda deve ter os seguintes campos:

char nome[30];
char endereco[100];
char fone[10];
long int CEP;

Obs: a agenda deve ter capacidade para 100 entradas.
*/

#include <stdio.h>
#include <stdlib.h>

struct Pessoas
{
    char nome[30];
    char *endereco[100];
    long int fone;
    long int CEP;
};

int main()
{
    int
        esc,
        back,
        addTime = 0;

    char
        nomeBusca;

    struct Pessoas pessoa[50];

    do
    {
        system("@cls||clear");

        printf("|| Agenda ||\n");
        printf("[1] Adicionar\n");
        printf("[2] Remover\n");
        printf("[3] Consulta por nome\n");
        printf("[4] Consulta por letra\n");
        printf("[0] Fechar\n");
        scanf("%d", &esc);

        while (esc > 4)
        {
            esc = 6;
            printf("Valor incorreto, insira um valor disponivel: ");
            scanf("%d", &esc);
        }

        switch (esc)
        {
        case 1:
            /* Adicionar */
            printf("Insira o nome da pessoa: ");
            scanf("%s", pessoa[addTime].nome);

            printf("Insira o endereco da pessoa: ");
            scanf("%s", pessoa[addTime].endereco);

            printf("Insira o telefone da pessoa: ");
            scanf("%ld", &pessoa[addTime].fone);

            printf("Insira o CEP da pessoa: ");
            scanf("%ld", &pessoa[addTime].CEP);

            addTime++;

            printf("Cadastro salvo!\nDigite 0 para voltar: ");
            scanf("%d", &back);

            if (back == 0)
            {
                break;
            }

        case 2:
            for (int i = 0; i < addTime; i++)
            {
                printf("%d - %s\n", i + 1, pessoa[i].nome);
            }

            printf("Digite 0 para voltar: ");
            scanf("%d", &back);

            if (back == 0)
            {
                break;
            }

        case 3:
            printf("Insira um nome para buscar: ");
            scanf("%s", &nomeBusca);

            for (int i = 0; i < addTime; i++)
            {
                if (nomeBusca == pessoa[i].nome)
                {
                    printf("Contato encontrado:\n");
                    printf("Nome: %s\n", pessoa[i].nome);
                    printf("Endereco: %s\n", pessoa[i].endereco);
                    printf("Telefone: %ld\n", pessoa[i].fone);
                    printf("CEP: %ld\n", pessoa[i].CEP);

                    return 0;
                }
                else
                {
                    printf("Contato não encontrado!");
                }
            }
            printf("Digite 0 para voltar: ");
            scanf("%d", &back);

            if (back == 0)
            {
                break;
            }

        default:
            break;
        }

    } while (esc != 0);
}