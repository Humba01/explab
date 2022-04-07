#include <stdio.h>
#include <stdlib.h>

int main(void) {

  aula_parte_1_2();
  
  return 0;
}

int aula_parte_1_2(void) {
// Vetores em ponteiros
  
  // Acesso aos elementos
  char s[] = "OlaOleOli";
  char *ptr = s;

  for(int i = 0; s[i] != '\0'; i++) {
    printf("1/2 - s[%d] = %c [] {end: %d}\n", i, s[i], &s);
    printf("2/2 - s[%d] = %c [] {end: %d}\n\n\n", i, s[i], &s[i]);
  }
  
  // Todo vetor é um ponteiro, implicitamente.
  // Notação de vetor e a notação de ponteiro para acessar informações (mesmo funcionamento).
  printf("%c, end: {%d}  \n", *(ptr+2), &s[2]);
  printf("%c, end: {%d}  \n", *(ptr+5), &s[5]);
  printf("%c, end: {%d}  \n\n", *(ptr+8), &s[8]);
  // // // // // // // // // // // // // // // //
  printf("%c, end: {%d}  \n", *(s+2), &s[2]);
  printf("%c, end: {%d}  \n", *(s+5), &s[5]);
  printf("%c, end: {%d}  \n\n", *(s+8), &s[8]);
  // // // // // // // // // // // // // // // //
  printf("%c, end: {%d}  \n", *ptr+2, &s[2]);
  printf("%c, end: {%d}  \n", *ptr+5, &s[5]);
  printf("%c, end: {%d}  \n\n", *ptr+8, &s[8]);
  // // // // // // // // // // // // // // // //

  // Memória é linear. Não é multidimensional igual uma matriz.
  int n[2][2] = {
    {1, 3},
    {4, 5}
  };
  
  return 0;
}
