#include <stdio.h>

int main(void)
{
  int a = 0, p = 1, temp;

  printf("Numero da serie de Fibonacci: %d\n\n", a);

  for (int i = 1; i <= 9; i++)
  {
    temp = a;
    a = a + p;

    printf("Numero da serie de Fibonacci: %d\n\n", a);
  }

  return 0;
}