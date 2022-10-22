#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tarefa
{
    int id;
    char nome[100];
    char descricao[500];
    struct Tarefa *prox;
};

struct Lista
{
    struct Tarefa *primeira, *ultima;
};

typedef struct Tarefa Tarefa;
typedef struct Lista Lista;

Tarefa *criarTarefa(int id, char nome[100], char descricao[100])
{
    Tarefa *tarefa = (Tarefa *)malloc(sizeof(Tarefa));
    tarefa->id = id;
    strcpy(tarefa->nome, nome);
    strcpy(tarefa->descricao, descricao);
    tarefa->prox = NULL;
    return tarefa;
}

Lista *criarLista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->primeira = lista->ultima = NULL;
    return lista;
}

void inserir(Lista *lista, int id, char nome[100], char descricao[100])
{
    Tarefa *nova = criarTarefa(id, nome, descricao);

    lista->ultima = lista->primeira; 
  
    nova->prox = NULL;
 
    if (lista->primeira == NULL)
    {
       lista->primeira = nova;
       return;
    } 
      
    while (lista->ultima->prox != NULL)
        lista->ultima = lista->ultima->prox;
  
    lista->ultima->prox = nova;
}

void remover(Lista *lista)
{
    if (lista->primeira == NULL)
        return;
    Tarefa *temp = lista->primeira;
    lista->primeira = lista->primeira->prox;
    if (lista->primeira == NULL)
        lista->ultima = NULL;
    free(temp);
}

void printList(Lista *lista) {
   struct Tarefa *ptr = lista->primeira;
   while(ptr != NULL) {
      printf("%d - %s (%s)\n", ptr->id, ptr->nome, ptr->descricao);
      ptr = ptr->prox;
   }
}

void addTask(Lista *lista) {
    char nameTask[100], descTask[500];

    printf("Insira uma tarefa:\n");
    printf("Nome: ");
    scanf("%s", &nameTask);
    printf("Descricao: ");
    scanf("%s", &descTask);

    inserir(lista, (lista->ultima->prox->id + 111), nameTask, descTask);
}

int main()
{
    Lista *l = criarLista();
    inserir(l, 111, "Tarefa 1", "Pesquisar o que e lista em C");
    inserir(l, 222, "Tarefa 2", "Estudar exemplos de lista");
    inserir(l, 333, "Tarefa 3", "Criar um exemplo");
    //remover(l);

    printList(l);
    addTask(l); // Função desenvolvida para inserir tarefa
    printList(l); 

    return 0;
}