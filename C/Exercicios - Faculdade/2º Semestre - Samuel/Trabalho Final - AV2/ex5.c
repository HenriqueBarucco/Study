#include <stdio.h>
#include <stdlib.h>

struct Client
{
    int id;
    struct Client *next;
};

struct List
{
    struct Client *head, *last;
};

typedef struct Client Client;
typedef struct List List;

Client *newClient(int id)
{
    Client *client = (Client *)malloc(sizeof(Client));
    client->id = id;
    client->next = NULL;
    return client;
}

List *initList()
{
    List *list = (List *)malloc(sizeof(List));
    list->head = list->last = NULL;
    return list;
}

void add(List *list, int id)
{
    Client *new = newClient(id);

    list->last = list->head;

    new->next = NULL;

    if (list->head == NULL)
    {
        list->head = new;
        return;
    }

    while (list->last->next != NULL)
        list->last = list->last->next;

    list->last->next = new;
}

void deleteFirst(List *list)
{
    if (list->head == NULL)
        return;
    Client *temp = list->head;
    list->head = list->head->next;
    if (list->head == NULL)
        list->last = NULL;
    free(temp);
}

void clientArrive(List *list)
{
    int id = (list->head == NULL) ? 1 : (list->last == NULL) ? 2
                                                             : list->last->next->id + 1;
    add(list, id);
}

void main()
{
    List *l = initList();
    int esc;

    while (esc != 0)
    {
        system("cls");

        printf("===== Fila do Banco =====\n");
        if (l->head != NULL)
            printf("Atual: %d\n\n", l->head->id);
        else
            printf("Nao existe clientes na fila!\n\n");

        printf("[1] - Adicionar cliente\n");
        printf("[2] - Chamar proximo\n\n");
        printf("[0] - Fechar\n");

        scanf("%d", &esc);

        if (esc == 1)
            clientArrive(l);
        else if (esc == 2)
            deleteFirst(l);
    }
}