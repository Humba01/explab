#include <stdio.h>

int main(void)
{

  int a;
  float desc;

  printf("Insira um valor inteiro:\n> ");
  scanf("%d", &a);

  if (a >= 1 || a <= 100)
  {
    desc = a * 0.01;
    printf("Desconto = %f\n", desc);
  }
  else if (a >= 101 || a <= 500)
  {
    desc = a * 0.05;
    printf("Desconto = %f\n", desc);
  }
  else if (a > 500)
  {
    desc = a * 0.1;
    printf("Desconto = %f\n", desc);
  }

  return 0;
}