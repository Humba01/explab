#include <stdio.h>

int main(void)
{

  float base, altura;

  printf("Coloque o valor da base:\n");
  scanf("%f", &base);

  printf("Coloque o valor da altura:\n");
  scanf("%f", &altura);

  float areaDoTriangulo = (base * altura) / 2;

  printf("O valor da área do triângulo é igual a: %f\n", areaDoTriangulo);
}