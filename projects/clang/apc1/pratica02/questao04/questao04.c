#include <stdio.h>

float calcula_area_hectares(float l, float c)
{
  float calculo = (l * c) / 1000;
  return calculo;
}

int main(void)
{

  float largura, comprimento;

  printf("Insira o valor da largura:\n");
  scanf("%f", &largura);

  printf("Insira o valor do comprimento\n");
  scanf("%f", &comprimento);

  float resultado = calcula_area_hectares(largura, comprimento);

  printf("Resultado da operacao: %f\n\n", resultado);
}