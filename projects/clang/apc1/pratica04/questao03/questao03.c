#include <stdio.h>

const int TAM = 10;

int main(void)
{

  float preco[TAM];
  int quantidade[TAM];
  float conta[TAM];
  float total;

  for (int i = 0; i < TAM; i++)
  {

    printf("\nInsira o preco do produto: (%d/%d)\n", i + 1, TAM);
    scanf("%f", &preco[i]);

    printf("\nInsira a quantidade do produto: (%d/%d)\n", i + 1, TAM);
    scanf("%d", &quantidade[i]);

    conta[i] = preco[i] * quantidade[i];
  }

  for (int i = 0; i < TAM; i++)
  {

    printf("0%d => R$ %f | %d | R$ %f\n", i + 1, preco[i], quantidade[i], conta[i]);

    total = total + conta[i];
  }

  printf("Total: R$ %f\n", total);

  return 0;
}