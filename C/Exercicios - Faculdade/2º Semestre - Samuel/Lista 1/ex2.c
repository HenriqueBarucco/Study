#include <stdio.h>
#include <stdlib.h>

void main()
{
  int *ptr;
  int n, i;

  printf("Insira um valor numerico: \n");
  scanf("%d", &n);

  // Alocando memoria utilizando malloc()
  ptr = (int *)malloc(n);

  for (i = 0; i < n; ++i)
  {
    ptr[i] = i + 1;
  }

  printf("Elementos do vetor: ");
  for (i = 0; i < n; ++i)
  {
    printf("%d, ", ptr[i]);
  }

  free(ptr); // Liberação da memoria utilizando a função free()

  return 0;
}