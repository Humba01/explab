#include <stdio.h>
#include <ctype.h>

int main(void)
{

  int i = 0;
  char texto[] = "";
  char texto_upper[] = "";
  char texto_lower[] = "";

  printf("Insira um texto:");
  scanf("%s", texto);

  while (texto[i])
  {
    texto_upper[i] = putchar(toupper(texto[i]));
    texto_lower[i] = putchar(tolower(texto[i]));
    i++;
  }

  printf("\nMaiusculo: %s | Minusculo: %s\n", texto_upper, texto_lower);

  return 0;
}