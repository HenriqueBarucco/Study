#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contato
{
    int id;
    char nome[100];
    char sobrenome[100];
    char telefone[100];
    char celular[100];
    struct Contato *prox;
};

struct Agenda
{
    struct Contato *primeira, *ultima;
};

typedef struct Contato Contato;
typedef struct Agenda Agenda;

Contato *criarContato(int id, char nome[100], char sobrenome[100], char telefone[100], char celular[100])
{
    Contato *contato = (Contato *)malloc(sizeof(Contato));
    contato->id = id;
    strcpy(contato->nome, nome);
    strcpy(contato->sobrenome, sobrenome);
    strcpy(contato->telefone, telefone);
    strcpy(contato->celular, celular);
    contato->prox = NULL;
    return contato;
}

Agenda *criarAgenda()
{
    Agenda *agenda = (Agenda *)malloc(sizeof(Agenda));
    agenda->primeira = agenda->ultima = NULL;
    return agenda;
}

void inserir(Agenda *agenda, int id, char nome[100], char sobrenome[100], char telefone[100], char celular[100])
{
    Contato *novo = criarContato(id, nome, sobrenome, telefone, celular);

    agenda->ultima = agenda->primeira;

    novo->prox = NULL;

    if (agenda->primeira == NULL)
    {
        agenda->primeira = novo;
        return;
    }

    while (agenda->ultima->prox != NULL)
        agenda->ultima = agenda->ultima->prox;

    agenda->ultima->prox = novo;
}

void remover(Agenda *agenda)
{
    int idRemove;
    system("cls");
    printf((agenda->primeira == NULL) ? "Voce nao possui nenhum contato!\n" : "Insira o id que deseja remover:\n");
    scanf("%d", &idRemove);
    struct Agenda *tmp = agenda;
    if (agenda->primeira->id != idRemove && agenda->primeira != NULL)
    {
        while (tmp->primeira->prox->id != idRemove)
            tmp->primeira = tmp->primeira->prox;
        tmp->primeira->prox = tmp->primeira->prox->prox;
    }
    back();

    /*     lista->primeira = lista->primeira->prox;
    if (lista->primeira == NULL)
        lista->ultima = NULL; */
}

void printList(Agenda *agenda)
{
    struct Contato *ptr = agenda->primeira;
    system("cls");
    printf((agenda->primeira == NULL) ? "Voce nao possui nenhum contato!\n" : "Lista de contatos:\n");
    while (ptr != NULL)
    {
        printf("%d - %s %s - %s | %s\n", ptr->id, ptr->nome, ptr->sobrenome, ptr->telefone, ptr->celular);
        ptr = ptr->prox;
    }
    back();
}

void addContact(Agenda *agenda)
{
    char name[100], lastName[100], tel[100], cel[100];
    int id = (agenda->primeira == NULL) ? 1 : (agenda->ultima == NULL) ? 2
                                                                       : agenda->ultima->prox->id + 1;
    system("cls");

    printf("Adicione um contato:\n");
    printf("Nome: ");
    scanf("%s", &name);
    printf("Sobrenome: ");
    scanf("%s", &lastName);
    printf("Telefone: ");
    scanf("%s", &tel);
    printf("Celular: ");
    scanf("%s", &cel);

    inserir(agenda, id, name, lastName, tel, cel);
    back();
}

void back()
{
    int tmp;
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &tmp);
}

void main()
{
    Agenda *l = criarAgenda();
    int esc;

    while (esc != 0)
    {
        system("cls");

        printf("=== Agenda ===\n");
        printf("[1] - Visualizar\n");
        printf("[2] - Adicionar\n");
        printf("[3] - Remover\n\n");
        printf("[0] - Fechar\n");

        scanf("%d", &esc);

        if (esc == 1)
            printList(l);
        else if (esc == 2)
            addContact(l);
        else if (esc == 3)
            remover(l); // Essa função tá muito quebrada...
    }
}