#include <stdio.h>

float calcula_imc(float p, float a)
{
  float calculo = p / (a * a);
  return calculo;
}

int main(void)
{

  float peso, altura;

  printf("Insira o valor do peso:\n");
  scanf("%f", &peso);

  printf("Insira o valor da altura:\n");
  scanf("%f", &altura);

  float resultado = calcula_imc(peso, altura);

  printf("Resultado do IMC: %f\n\n", resultado);
}