#include <stdio.h>

// Escreva um algoritmo na linguagem C que percorra um array de caracteres e substitua todas as ocorrências de vogais por #.

int main() {
  char array[] = "abcdefghijklmnopqrstuvwxyz";
  int i;
  for (i = 0; i < 26; i++) {
    if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u') {
      array[i] = '#';
    }
  }
  printf("%s\n", array);
  return 0;
}