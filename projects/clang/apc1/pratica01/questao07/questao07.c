#include <stdio.h>
#include <math.h>

int main(void)
{
  float valor, distancia, altura;

  printf("Insira o angulo para realizar o seno:\n> ");
  scanf("%f", &valor);

  if (valor > 45.0f)
  {
    printf("Valor adicionado maior que 45 graus! Tente novamente.\n\n");
    return 0;
  }
  else
  {
    valor = valor / 180;
  }

  printf("Insira a distancia:\n> ");
  scanf("%f", &distancia);

  altura = sin(valor) * distancia;

  printf("A altura final eh: %5.f\n\n", altura);
}