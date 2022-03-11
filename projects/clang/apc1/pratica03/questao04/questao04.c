#include <stdio.h>

int main(void)
{

  char tecla;

  printf("Insira uma tecla:");
  scanf("%c", &tecla);

  int conv = tecla;

  if ((conv >= 65 && conv <= 90) || (conv >= 97 && conv <= 122))
  {
    printf("\nA tecla eh uma letra. ");
  }

  else if ((conv >= 0 && conv <= 47) || (conv >= 123 && conv <= 127))
  {
    printf("\nA tecla eh um caractere especial. ");
  }

  else if (conv >= 48 && conv <= 57)
  {
    printf("\nA tecla eh um digito. ");
  }

  printf("-> Na Tabela ASCII: %d.\n", tecla);

  return 0;
}