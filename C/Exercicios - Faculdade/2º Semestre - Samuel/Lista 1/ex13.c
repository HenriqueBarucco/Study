#include <stdio.h>
#pragma pack(1)

typedef struct
{
  char nome[6];
  int idade;
  double salario;
} func;

typedef int teste;

int main(void) {
  func f1;
  printf("Tamanho ocupado em memoria: ");
  printf("\n f1: %d bytes \n", sizeof(f1));
  return 0;
}
