#include <stdio.h>

int main(void) {
  
  aula_parte_1();

  aula_parte_2();

  return 0;
}

int aula_parte_1() {
  
  // Valor da variável declarada.
  // Ponteiro de Inteiro.
  int valor = 6;

  // Endereço do valor da variável declarada.
  // Ela aponta para o endereço do valor descrito.
  int *ptr_valor = &valor;

  // Ponteiro que não está direcionando para nenhum valor.
  int *ptr_s = NULL;

  // Imprimindo valores do endereço e da variável.
  printf("Parte 1 - Endereço da Memória: %d\n", &valor);
  printf("Parte 1 - Valor do Endereço da Memória: %d\n\n", valor);

}

int aula_parte_2() {

  // // Tamanho das tipagens mostrado com sizeof.
  // Mostra o resultado em bytes.
  int tamanho_char = sizeof(char);
  int tamanho_int = sizeof(int); // Pode ter tamanho 2 bytes ou 4 bytes dependendo da arquitetura.
  int tamanho_float = sizeof(float);
  int tamanho_double = sizeof(double);
  // int tamanho_bool = sizeof(bool);

  int tamanho_short_int = sizeof(short int);
  
  int tamanho_long_int = sizeof(long int);
  int tamanho_long_long_int = sizeof(long long int);

  int tamanho_signed_int = sizeof(signed int);
  int tamanho_unsigned_int = sizeof(unsigned int);
  int tamanho_signed_long_int = sizeof(signed long int);
  int tamanho_unsigned_long_int = sizeof(unsigned long int);
  int tamanho_signed_long_long_int = sizeof(signed long long int);
  int tamanho_unsigned_long_long_int = sizeof(unsigned long long int);

  // // Outros tipos de ponteiro
  // Valor do ponteiro de Char.
  char f = 'r';

  // Endereço do valor de ponteiro de Char.
  char *ptr_f = &f;

  // Valor do ponteiro de Float.
  float pi = 3.14;

  // Endereço do valor de ponteiro de Float.
  float *ptr_pi = &pi;

  // // Artimética de Ponteiros
  // Declaração de variável.
  int n = 1025;
  
  // Formatos e tamanhos de bytes memória mostrados pelo tipo do ponteiro.
  // Deslocamento do endereço de memória após um incremento.
  char *ptr = &n;
  
}