#include <stdio.h>

int main(void)
{

  int maior_valor, menor_valor, valor;
  int valores[10];

  for (int i = 1; i < 11; i++)
  {

    printf("Insira um valor: - %d de 10:\n\n", i);
    scanf("%d", &valor);

    valores[i] = valor;

    if (i == 1)
    {
      maior_valor = menor_valor;
      menor_valor = valor;
    }

    if (i > 1)
    {
      if (valor > maior_valor)
      {
        maior_valor = valor;
      }

      if (valor < maior_valor)
      {
        continue;
      }

      if (valor < menor_valor)
      {
        menor_valor = valor;
      }

      if (valor > menor_valor)
      {
        continue;
      }
    }
  }

  printf("Menor Valor: %d | Maior Valor: %d\n", menor_valor, maior_valor);

  return 0;
}