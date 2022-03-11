#include <stdio.h>

int main(void)
{
  int a;

  printf("Insira um valor inteiro:\n> ");
  scanf("%d", &a);

  int verificador = a % 2;

  switch (verificador)
  {
  case 0:
    printf("O número é par!\n");
    break;
  case 1:
    printf("O número é impar!\n");
    break;
  }

  return 0;
}