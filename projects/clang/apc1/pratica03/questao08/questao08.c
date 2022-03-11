#include <stdio.h>

int main(void)
{

  int valor;

  printf("Insira um valor para realizar o fatorial:\n\n");
  scanf("%d", &valor);

  long long int fatorial = 1;

  while (valor != 0)
  {
    fatorial = fatorial * valor;
    valor--;

    printf("O Fatorial é: %lld\n", fatorial);

    if (valor <= 1)
    {
      break;
    }
  }

  return 0;
}