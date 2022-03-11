#include <stdio.h>
#include <string.h>

int main(void)
{

  char *verbo;

  printf("Escreva um verbo:\n");
  scanf("%s", verbo);

  // if( (strstr(verbo, "AR") ) {

  // } else if( (strstr(verbo, "IR") ) {

  // } else if( (strstr(verbo, "ER") ) {

  // }

  char *eu = "O";
  char *tu = "AS";
  char *ele = "A";
  char *nos = "OS";
  char *vos = "AIS";
  char *eles = "AM";

  char *conjugacao[] = {eu, tu, ele, nos, vos, eles};

  for (int i = 0; i < 7; i++)
  {
    printf("Conjugacao: %s%s\n", verbo, conjugacao[i]);
  }

  return 0;
}