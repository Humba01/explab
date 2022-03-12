#include <stdio.h>

int main()
{
  int vet[] = {55, 77, 45, 67, 99};

  int i;

  int maior_valor;

  int menor_valor;

  for (i = 0; i < 10; i++)
  {

    int valor_base = vet[0];

    if (vet[i] > valor_base)
    {

      maior_valor = vet[i];
    }

    if (vet[i] < valor_base)
    {

      menor_valor = vet[i];
    }
  }

  printf("MV: %d | mV: %d", maior_valor, menor_valor);
}