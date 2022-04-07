#include <stdio.h>

int main() {

  atividade_2_ponteiros();
  
  atividade_3_ponteiros();
  
  atividade_4_ponteiros();
  
}

int atividade_2_ponteiros() {

  char s[] = "afgssdsfd";
  
  int k = 0;

  for(int i = 0; s[i] != '\0'; i++) {


    k++;
    
  }

  return printf("%d\n\n", k);
  
}

int atividade_3_ponteiros() {

  char s[] = "afgessdrsfuiod";

  for(int i = 0; s[i] != '\0'; i++) {

    switch(s[i]) {
      case 'a':
        s[i] = '#';
        break;
      case 'e':
        s[i] = '#';
        break;
      case 'i':
        s[i] = '#';
        break;
      case 'o':
        s[i] = '#';
        break;
      case 'u':
        s[i] = '#';
        break;
      
    }
    
  }

  return printf("%s\n\n", s);
  
}

int atividade_4_ponteiros() {
  // em formato de ponteiro *(<variavel>+3) | Formato Tradicional -> c[i]

  int y[] = {55, 11, 33, 44, 66, 6, 1, 88, 99}, maior, menor;
  
  for(int i = 0; i < 9; i++) {

    if(*(y+i) > maior) { maior = *(y+i); }

    if(*(y+i) < menor) { menor = *(y+i); }

  }

  return printf("M: %d, m: %d\n\n", maior, menor);
  
}

