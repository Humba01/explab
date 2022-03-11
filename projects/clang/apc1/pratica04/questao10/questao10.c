#include <stdio.h>

int main(void)
{

  enum meses
  {
    janeiro = 1,
    fevereiro = 2,
    marco = 3,
    abril = 4,
    maio = 5,
    junho = 6,
    julho = 7,
    agosto = 8,
    setembro = 9,
    outubro = 10,
    novembro = 11,
    dezembro = 12
  } mes;

  int valor;

  printf("insira o numero de um mes:\n");
  scanf("%d", &valor);

  switch (valor)
  {
  case janeiro:
    printf("O mes inserido é Janeiro!");
    break;
  case fevereiro:
    printf("O mes inserido é Fevereiro!");
    break;
  case marco:
    printf("O mes inserido é Marco!");
    break;
  case abril:
    printf("O mes inserido é Abril!");
    break;
  case maio:
    printf("O mes inserido é Maio!");
    break;
  case junho:
    printf("O mes inserido é Junho!");
    break;
  case julho:
    printf("O mes inserido é Julho!");
    break;
  case agosto:
    printf("O mes inserido é Agosto!");
    break;
  case setembro:
    printf("O mes inserido é Setembro!");
    break;
  case outubro:
    printf("O mes inserido é Outubro!");
    break;
  case novembro:
    printf("O mes inserido é Novembro!");
    break;
  case dezembro:
    printf("O mes inserido é Dezembro!");
    break;
  default:
    printf("O mes inserido é inválido!");
    break;
  }

  return 0;
}