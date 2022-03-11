#include <stdio.h>

int main(void)
{

  printf("-| Multiplos de Tres |- \n\n");

  for (int i = 0; i < 100; i++)
  {
    int multiplo_tres = i % 3;

    if (multiplo_tres == 0)
    {
      printf("Multiplo Encontrado! ==> %d\n\n", i);
    };
  }

  printf("-|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|-\n");

  return 0;
}