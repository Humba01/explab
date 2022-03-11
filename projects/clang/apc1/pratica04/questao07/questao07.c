#include <stdio.h>

int main(void)
{

  struct data
  {
    int dia;
    int mes;
    int ano;
  } data;

  printf("Insira o dia da data:\n");
  scanf("%d", &data.dia);

  printf("Insira o mes da data:\n");
  scanf("%d", &data.mes);

  printf("Insira o ano da data:\n");
  scanf("%d", &data.ano);

  if (data.dia <= 31 && data.mes <= 12)
  {
    return printf("\n[Questao-07] Formato US: %d/%d/%d | Formato BR: %d/%d/%d", data.mes, data.dia, data.ano, data.dia, data.mes, data.ano);
  }

  if (data.dia > 31)
  {
    printf("\n[Questao-07] Dia invalido!\n");
    return printf("\n[Questao-07] Formato US: %d/--/%d | Formato BR: --/%d/%d", data.mes, data.ano, data.mes, data.ano);
  }

  if (data.mes > 12)
  {
    printf("\n[Questao-07] Mes Invalido!\n");
    return printf("\n[Questao-07] Formato US: --/%d/%d | Formato BR: %d/--/%d", data.dia, data.ano, data.dia, data.ano);
  }

  if (data.dia > 31 && data.mes > 12)
  {
    printf("\n[Questao-07] Dia e Mes Invalidos!\n");
    return printf("\n[Questao-07] Formato US: --/--/%d | Formato BR: --/--/%d", data.ano, data.ano);
  }

  return 0;
}