#include <stdio.h>

float calcula_salario_bruto(float ht, int hst)
{
  float resultado = ht * hst;
  return resultado;
}

int main(void)
{

  float ir = 0.25f;
  float inss = 0.11f;
  float hora_de_trabalho;
  int horas_trabalhadas;
  float salario_bruto;
  float salario_liquido;
  float impostos_descontados;

  printf("Insira o valor da hora de trabalho:\n");
  scanf("%f", &hora_de_trabalho);

  printf("Insira o valor das horas trabalhadas:\n");
  scanf("%d", &horas_trabalhadas);

  salario_bruto = calcula_salario_bruto(hora_de_trabalho, horas_trabalhadas);

  salario_liquido = (salario_bruto * ir) + (salario_bruto * inss);

  impostos_descontados = salario_bruto - salario_liquido;

  printf("\n\tSalario Bruto: %.2f\n\tSalario Liquido: %.2f\n\tImpostos Descontados: %.2f\n\n", salario_bruto, salario_liquido, impostos_descontados);
}