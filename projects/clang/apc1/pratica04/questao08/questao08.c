#include <stdio.h>

int main(void)
{

  struct lista
  {
    char *nome;
    int telefone;
  } lista;

  char *nomes[10];
  int telefones[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Insira o nome:\n");
    scanf("%s", lista.nome);
    nomes[i] = lista.nome;

    printf("Insira o telefone:\n");
    scanf("%d", &lista.telefone);
    telefones[i] = lista.telefone;
  }

  for (int j = 0; j < 10; j++)
  {
    printf("\nNome: %s - Telefone: %d", nomes[j], telefones[j]);
  }

  return 0;
}