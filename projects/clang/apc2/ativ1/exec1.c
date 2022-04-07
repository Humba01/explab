#include <stdio.h>

int main(void) {

  char str[] = "Teste avaliativo";
  char ch;
  int i;
  printf("Digite um caractere: ");
  scanf("%c", &ch);

  for (i = 0; i < sizeof(str); i++)
  {
    if (str[i] == ch)
    {
    
      printf("O caractere %c foi encontrado na posicao %d.\n", ch, i);
    
    } else {
      
      printf("Código %d\n", -1);
    
    }
  }

  return 0;
}