#include <stdio.h>

int main(void)
{
  float PI = 3.1416;

  int raio;

  printf("Coloque o valor do raio:\n");
  scanf("%d", &raio);

  float perimetroDaPizza = 2 * PI * raio;

  printf("\nO valor do perímetro da Pizza é: %f\n", perimetroDaPizza);
}