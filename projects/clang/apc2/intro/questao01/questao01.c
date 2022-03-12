#include <stdio.h>

int main() {
  int vet[] = { 7, 3, 6, 8, 5 };
  
  float resultado = 0;
  
  int i;
  
  for(i = 0; i < 5; i++) {
	resultado = resultado + vet[i];
  }
  
  resultado / 5;
  
 printf("A media foi: %f", resultado);
  
}