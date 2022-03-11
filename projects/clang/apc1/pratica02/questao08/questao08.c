#include <stdio.h>
#include <math.h>

double calcula_distancia(float x1, float x2, float y1, float y2)
{
  double calculo = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
  return calculo;
}

int main(void)
{

  float x1, x2, y1, y2;

  printf("Insira o valor de x1:\n");
  scanf("%f", &x1);

  printf("Insira o valor de x2:\n");
  scanf("%f", &x2);

  printf("Insira o valor de y1:\n");
  scanf("%f", &y1);

  printf("Insira o valor de y2:\n");
  scanf("%f", &y2);

  double resultado = calcula_distancia(x1, x2, y1, y2);

  printf("A distância entre os dois pontos eh de %.4f.\n", resultado);
}