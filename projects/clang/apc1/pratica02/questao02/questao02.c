#include <stdio.h>

int acha_resto(int valor1, int valor2)
{
  int resto = valor1 % valor2;
  return resto;
}

int acha_quociente(int valor1, int valor2)
{
  int quociente = valor1 / valor2;
  return quociente;
}

int main(void)
{

  int a, b;

  printf("Insira o primeiro valor inteiro:\n");
  scanf("%d", &a);

  printf("Insira o segundo valor inteiro:\n");
  scanf("%d", &b);

  int quociente = acha_quociente(a, b);

  int resto = acha_resto(a, b);

  printf("Quociente: %d | Resto: %d\n\n", quociente, resto);
}