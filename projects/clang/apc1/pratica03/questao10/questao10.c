#include <stdio.h>
#include <string.h>

int main(void)
{

  int valor, resto, tamanho;

  printf("Insira um valor em decimal para transformar:\n");
  scanf("%d", &valor);

  printf("Valor Inserido: %d\n\n", valor);

  char numero_binario[500];

  while (valor > 1)
  {
    valor = valor / 2;
    tamanho++;
  }

  while (valor > 2)
  {
    valor = valor / 2;
    resto = valor % 2;

    if (resto == 0)
    {
      numero_binario[tamanho] = '0';
    }

    if (resto == 1)
    {
      numero_binario[tamanho] = '1';
    }

    if (valor == 2)
    {
      numero_binario[tamanho] = '0';
    }

    if (valor == 3)
    {
      numero_binario[tamanho] = '1';
    }

    tamanho--;
  }

  for (int i = 0; i <= tamanho; i++)
  {
    printf("%c", numero_binario[tamanho]);
  }

  return 0;
}