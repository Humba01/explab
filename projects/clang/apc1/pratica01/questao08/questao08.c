#include <stdio.h>

int main(void)
{
  int segundos, conv_segundos;
  float conv_minutos, conv_horas;

  printf("Insira o valor em segundos para transformar:\n> ");
  scanf("%d", &segundos);

  conv_horas = segundos / 3600;
  conv_minutos = segundos / 60;
  conv_segundos = segundos % 3600;

  if (conv_minutos > 59)
  {
    conv_horas = conv_horas + 1.0;
    conv_minutos = conv_minutos - 59;
  }

  if (conv_segundos > 59)
  {
    conv_segundos = conv_segundos / 60;
  }

  printf("De Segundos para Horas/Minutos/Segundos > %.0f Hora(s) %.0f Minuto(s) %d Segundo(s).\n", conv_horas, conv_minutos, conv_segundos);
}