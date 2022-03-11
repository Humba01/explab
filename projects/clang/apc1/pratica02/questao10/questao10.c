#include <stdio.h>

int faz_tabuada(int v)
{

  for (int i = 0; i < 11; i++)
  {
    printf("%d X %d = %d\n\n", v, i, v * i);
  }
}

int main(void)
{

  int valor;

  printf("Insira um valor inteiro:\n");
  scanf("%d", &valor);

  int resultado = faz_tabuada(valor);
}