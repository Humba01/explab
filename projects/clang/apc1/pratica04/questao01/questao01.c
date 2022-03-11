#include <stdio.h>

int main(void)
{

  int matriz[10];
  int valor;

  for (int i = 0; i < 10; i++)
  {
    matriz[i] = i;
  }

  printf("insira o valor que voce acha que esta na sequencia de valores desse programa:\n");
  scanf("%d", &valor);

  for (int i = 0; i < 10; i++)
  {
    if (matriz[i] == valor)
    {
      printf("\nValor existe dentro da sequencia de valores do programa. Posicao: %d\n\n", i);
    }
    else
    {
      printf("\nValor nao existe dentro da sequencia de valores do programa.\n\n");
    }
  }

  return 0;
}