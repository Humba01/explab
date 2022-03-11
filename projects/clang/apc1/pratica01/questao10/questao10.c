#include <stdio.h>

int main(void)
{

  char *valor;

  printf("Insira um valor inteiro:\n");
  scanf("%s", *&valor);

  printf("Resultado Final:\n\t %c Unidade(s)\n\t %c Dezena(s)\n\t %c Centena(s)\n\t %c Milhare(s)\n", valor[3], valor[2], valor[1], valor[0]);
}