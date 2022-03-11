#include <stdio.h>

int main(void)
{
  long long int valor_gigabytes;

  printf("Coloque o valor de Gigabytes para serem convertidos em Bytes:\n");
  scanf("> %lld", &valor_gigabytes);

  long long int operacao = valor_gigabytes * 1024 * 1024 * 1024;

  printf("Resultado Final: %lld\n\n", operacao);
}