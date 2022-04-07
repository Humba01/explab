//* Humberto Pereira Bravo 2122130012

#include <stdio.h>

typedef struct data {
    int dia;
    int mes;
    int ano;

} t_data;

typedef struct turma {
  char *codigo;
  char *nome;
  float numero_alunos;
  t_data data_inicio;
  char *sala;

} t_turma;

int main(void) {

  t_turma turma2;
  t_turma *ptr_turma;
  *ptr_turma = turma2;

  t_turma apc_ii = {
    .codigo = "T1",
    .nome = "APC II",
    .numero_alunos = 35,
    .data_inicio = {
        .dia = 15,
        .mes = 03,
        .ano = 2022}
  };

  printf("\nDigite o nome da turma:");
  scanf("%s%*c", ptr_turma->nome);

  printf("\nDigite o codigo da turma:");
  scanf("%s%*c", ptr_turma->codigo);

  printf("\nDigite a sala da turma:");
  scanf("%s%*c", ptr_turma->sala);

  ptr_turma->numero_alunos++;

  // Modificando o número da sala com um ponteiro.
  ptr_turma->sala = "Sala 1";

      if (turma2.numero_alunos > 40)
  {
    ptr_turma->sala = "JA4/3";
  }
  else if (turma2.numero_alunos <= 40)
  {
    ptr_turma->sala = "JA1";
  }
  else if (turma2.numero_alunos < 10)
  {
    ptr_turma->sala = "Não Definido.";
  }

  printf("\n\nTurma: %s\n", ptr_turma->sala);

  return 0;
}