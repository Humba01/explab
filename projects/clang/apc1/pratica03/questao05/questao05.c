#include <stdio.h>

int main(void)
{
  int ano;

  printf("Insira o valor do ano:\n > ");
  scanf("%d", &ano);

  float multiplo_quatro = ano % 4;
  float multiplo_cem = ano % 100;
  float multiplo_quatrocentos = ano % 400;

  if ((multiplo_quatro == 0 && multiplo_cem != 0) || (multiplo_quatrocentos == 0))
  {
    printf("O ano inserido eh bissexto.\n");
  }

  else
  {
    printf("O ano inserido nao eh bissexto.\n");
  }

  return 0;
}