#include <stdio.h>

int main(void)
{

  struct lista
  {
    int matricula;
    char *email;
  } lista;

  int matriculas[10];
  char *emails[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Insira a matricula:\n");
    scanf("%d", &lista.matricula);
    matriculas[i] = lista.matricula;

    printf("Insira o email:\n");
    scanf("%s", lista.email);
    emails[i] = lista.email;
  }

  char resposta;
  int matricula_resp;

  printf("Procurar email a partir de uma matricula? (S/N)\n");
  scanf("%c", &resposta);

  if (resposta == 's' || resposta == 'S')
  {
    printf("Insira a matricula:\n");
    scanf("%d", &matricula_resp);

    for (int y = 0; y < 10; y++)
    {

      if (matricula_resp == matriculas[y])
      {
        printf("Matricula encontrada! aqui está: %d\n", matriculas[y]);
      }
    }
  }

  if (resposta == 'n' || resposta == 'N')
  {
    return 0;
  }

  for (int j = 0; j < 10; j++)
  {
  }

  return 0;
}