#include <stdio.h>

// Escreva um algoritmo na linguagem C que verifica se um array de caracteres contém vogais.

int main()
{
  char array[] = "abcdefghijklmnopqrstuvwxyz";
  int i;
  int vogais = 0;
  for (i = 0; i < 26; i++)
  {
    if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
    {
      vogais++;
    }
  }
  if (vogais > 0)
  {
    printf("O array possui vogais.\n");
  }
  else
  {
    printf("O array não possui vogais.\n");
  }
  return 0;
}