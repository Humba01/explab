#include <stdio.h>

float calcula_depreciacao(float vc, int af, int ad)
{
  int calculo = ((ad - af) * 0.01 * vc);
  return calculo;
}

int main(void)
{

  float valor_compra;
  int ano_fabricacao, ano_depreciacao;

  printf("Insira o valor de compra do veiculo:\n");
  scanf("%f", &valor_compra);

  printf("Insira o valor do ano de fabricacao do veiculo:\n");
  scanf("%d", &ano_fabricacao);

  printf("Insira o valor do ano de depreciacao do veiculo:\n");
  scanf("%d", &ano_depreciacao);

  float resultado = calcula_depreciacao(valor_compra, ano_fabricacao, ano_depreciacao);

  printf("Resultado do calculo de Depreciacao do Veiculo: %f\n\n", resultado);
}