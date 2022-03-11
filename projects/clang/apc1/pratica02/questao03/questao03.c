#include <stdio.h>

float celcius_para_fahrenheit(float valor)
{
  float calculo = (valor * (9 / 5)) + 32;
  return calculo;
}

int main(void)
{

  float valor_celcius;

  printf("Insira o valor da temperatura em Graus Celcius:\n");
  scanf("%f", &valor_celcius);

  float resultado = celcius_para_fahrenheit(valor_celcius);

  printf("Resultado (em Fahrenheit): %f\n", resultado);
}