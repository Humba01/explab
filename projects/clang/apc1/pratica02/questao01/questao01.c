#include <stdio.h>

int faz_media_aritmetica(int valor1, int valor2, int valor3)
{
  int calculo = (valor1 + valor2 + valor3) / 3;
  return calculo;
}

int main(void)
{

  int a, b, c;

  printf("Insira o primeiro valor inteiro:\n");
  scanf("%d", &a);

  printf("Insira o segundo valor inteiro:\n");
  scanf("%d", &b);

  printf("Insira o terceiro valor inteiro:\n");
  scanf("%d", &c);

  int resultado = faz_media_aritmetica(a, b, c);

  printf("%d\n\n", resultado);
}