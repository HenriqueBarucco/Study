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
  if (lista->ultima == NULL)
  {
    lista->primeira = lista->ultima = nova;
    return;
  }
  lista->ultima->prox = nova;
  lista->ultima = nova;
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

int main()
{
  Lista *l = criarLista();
  inserir(l, 111, "Tarefa 1", "Pesquisar o que é lista em C");
  inserir(l, 222, "Tarefa 2", "Estudar exemplos de lista");
  inserir(l, 333, "Tarefa 3", "Criar um exemplo");
  remover(l);
  printf("Primeira tarefa: %d %s \n", l->primeira->id);
  printf("Ultima tarefa: %d", l->ultima->id);
  return 0;
}