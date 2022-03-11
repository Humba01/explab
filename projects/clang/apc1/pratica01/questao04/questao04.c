#include <stdio.h>

int main(void)
{
  float imcs = 0.17f;
  float cofins = 0.076f;
  float pis_pasep = 0.0165f;
  float valor_final = 0.0f;
  float valor_inicial = 0.0f;

  printf("Insira o valor inicial:\n> ");
  scanf("%f", &valor_inicial);

  valor_final = (1 + imcs + cofins + pis_pasep) * valor_inicial;

  printf("\nO valor final é:\n> %f\n", valor_final);
}