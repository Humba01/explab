#include <stdio.h>

const int NOTAS = 10;

int main(void)
{

  float notas[NOTAS];
  float soma_notas;
  int acima_da_media = 0;
  float media;

  for (int i = 0; i < NOTAS; i++)
  {
    printf("Insira o valor de uma nota:");
    scanf("%f", &notas[i]);
  }

  for (int i = 0; i < NOTAS; i++)
  {
    soma_notas = soma_notas + notas[i];
    printf("\n[LOG/Warn-01 - Soma Notas] => %f", soma_notas);
  }

  media = soma_notas / NOTAS;

  for (int i = 0; i < NOTAS; i++)
  {
    if (notas[i] > media)
    {
      acima_da_media = acima_da_media + 1;
      printf("\n[LOG/Warn-02 - Acima da Média] => %d", acima_da_media);
    }
  }

  printf("\nO numero de notas acima da media e igual a: %d\n", acima_da_media);

  return 0;
}