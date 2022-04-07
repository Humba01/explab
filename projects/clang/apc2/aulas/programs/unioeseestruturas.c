#include <stdio.h>

typedef unsigned int unint;

typedef struct Pessoa {

  char *nome;
  unint idade;
  char sexo;
  char *cpf;

} t_pessoa;

typedef struct {
  int n1, n2;
} t_numbers;



// Estrutura dentro de Estrutura
typedef struct {
  int dia, mes, ano;
} t_data;

typedef struct {
  char nome[100];
  char desc[500];
  t_data validade;

} t_produto;

int main(void) {

  struct Pessoa p1, v_p[10];

  t_pessoa ana = {"Ana", 23, 'F', "12345678910"};
  
  t_pessoa beto = {
    
    .nome = "Beto",
    .idade = 64,
    .sexo = 'M',
    .cpf = "11122233344"
  
  };

  printf("Altere a idade da Ana, insira um número:");

  scanf("%u", &ana.idade);

  // Estrutura em forma de ponteiro
  t_pessoa *ptr_pessoa;
  ptr_pessoa->nome = "";
  ptr_pessoa->idade = 0;
  ptr_pessoa->sexo = 'N';
  ptr_pessoa->cpf = "555";

  return 0;
  
}