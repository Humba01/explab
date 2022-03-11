#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, delta, x1, x2, raiz_delta;

  printf("\nInsira o valor de a: ");
  scanf("%f", &a);

  printf("\nInsira o valor de b: ");
  scanf("%f", &b);

  printf("\nInsira o valor de c: ");
  scanf("%f", &c);

  // processamento de dados
  delta = (b * b) - (4 * (a * c));

  raiz_delta = sqrt(delta);

  x1 = (-b + raiz_delta) / (2 * a);

  x2 = (-b - raiz_delta) / (2 * a);

  // apresentação
  printf("O delta da equação é %0.02f \n", delta);

  // se tivermos um delta menor que zero a equação não possui raiz
  if (delta < 0)
  {
    printf("A equação não possui raizes reais.\n");
  }
  else
  {
    printf("X1: %0.02f \n", x1);
    printf("X2: %0.02f \n", x2);
  }

  return 0;
}