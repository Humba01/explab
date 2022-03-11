#include <stdio.h>

int main(void)
{

  int a;

  printf("Insira a sua nota:\n\n");
  printf("1 -> Ruim\n");
  printf("2 -> Insuficiente\n");
  printf("3 -> Suficiente\n");
  printf("4 -> Bom\n");
  printf("5 -> Ótimo");
  printf("\n> ");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    printf("Nota Selecionada = 1 -> Ruim.\n");
    break;
  case 2:
    printf("Nota Selecionada = 2 -> Insuficiente.\n");
    break;
  case 3:
    printf("Nota Selecionada = 3 -> Suficiente.\n");
    break;
  case 4:
    printf("Nota Selecionada = 4 -> Bom.\n");
    break;
  case 5:
    printf("Nota Selecionada = 5 -> Ótimo.\n");
    break;
  default:
    printf("Nota Inexistente, tente novamente.\n");
    break;
  }

  return 0;
}