#include <stdio.h>

int main(void)
{

  char frase[6][5];
  int i = 0;
  int j = 0;
  char texto[30];

  printf("Insira um texto:");
  scanf("%s", texto);

  while (i < 6)
  {
    while (j < 5)
    {

      if ("\0")
      {
        j++;
      }
      else if (j == 5)
      {
        i++;
      }
    }
  }

  return 0;
}