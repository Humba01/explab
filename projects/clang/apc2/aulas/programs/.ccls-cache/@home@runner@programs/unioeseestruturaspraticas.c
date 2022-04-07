#include <stdio.h>

// 01 - a) Crie uma estrutura Pet com os seguintes atributos: nome, idade, raça, sexo.
// 01 - b) Solicite ao usúario para inserir os dados do pet.
// 01 - c) Imprimir os valores do pet na tela.

typedef unsigned int unint;

typedef struct Pet {
  char nome[200];
  unint idade;
  char raca[40];
  char sexo;

} t_pet;

int main(void) {

  t_pet pet;

  printf("[01] - Insira o nome do pet: ");
  scanf("%[^\n]%*c", pet.nome);

  printf("[02] - Insira a idade do pet: ");
  scanf("%u%*c", &pet.idade);

  printf("[03] - Insira a raca do pet: ");
  scanf("%s%*c", pet.raca);
  
  printf("[04] - Insira o sexo do pet: ");
  scanf("%c%*c", &pet.sexo);

  printf("\n\n");
  
  fflush(stdin);

  printf("Nome: %s, Idade: %u, Raca: %s, Sexo: %c\n\n", pet.nome, pet.idade, pet.raca, pet.sexo);
  
}