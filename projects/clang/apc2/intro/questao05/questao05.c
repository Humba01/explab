#include <stdio.h>

// Escreva um algoritmo na linguagem C que verifica se um array de caracteres contém números.

int main() {
  char array[] = "abcdefghijklmnopq777rstuvwxyz";
  int i;
  int numeros = 0;
  for (i = 0; i < 26; i++) {
    if (array[i] >= '0' && array[i] <= '9') {
      numeros++;
    }
  }
  if (numeros > 0) {
    printf("O array possui números.\n");
  } else {
    printf("O array não possui números.\n");
  }
  return 0;
}