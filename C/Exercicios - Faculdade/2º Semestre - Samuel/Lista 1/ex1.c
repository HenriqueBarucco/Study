#include <stdio.h>

// Exemplo por ponteiro.

void change(double *x, double *y);

void main()
{
  double x = 5;
  double y = 10;

  printf("x = %.2f\n", x);
  printf("y = %.2f\n", y);

  change(&x, &y);

  printf("x = %.2f\n", x);
  printf("y = %.2f\n", y);
}

void change(double *x, double *y)
{
  double temp = *x;
  *x = *y;
  *y = temp;
}