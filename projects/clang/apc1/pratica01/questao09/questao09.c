#include <stdio.h>

int main(void)
{
  int idade_anos, idade_meses, idade_dias;

  printf("Insira o valor da sua idade em Anos:\n");
  scanf("%d", &idade_anos);

  printf("Insira o valor da sua idade em Meses:\n");
  scanf("%d", &idade_meses);

  printf("Insira o valor da sua idade em Dias:\n");
  scanf("%d", &idade_dias);

  int conv_anos = idade_anos * 12 * 30;
  int conv_meses = idade_meses * 30;
  int conv_dias = conv_anos + conv_meses + idade_dias;

  printf("Valor da idade em dias: %d\n", conv_dias);
}