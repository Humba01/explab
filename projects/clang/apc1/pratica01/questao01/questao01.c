#include <stdio.h>

int main(void) {

  float a1, a2;

  printf("Coloque o valor da nota um:\n");
  scanf("%f", &a1);

  printf("Coloque o valor da nota dois:\n");
  scanf("%f", &a2);
  
  float media = (a1 * 0.4) + (a2 * 0.6);

  if((a1 > 10) || (a2 > 10) || (a1 < 0) || (a2 < 0)) {
    printf("Valor Inválido adicionado. Tente Novamente.");
  } else {
    printf("A média é igual a: %f\n", media);
  }
}