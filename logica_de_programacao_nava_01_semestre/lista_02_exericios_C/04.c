#include <stdio.h>

/*
 * A prefeitura de uma cidade resolveu criar uma linha de crédito
 * aos seus servidores. A regra é que a prestação não pode
 * ultrapassar 30% do salário bruto. Faça um programa que
 * recebe o valor do salário bruto e o valor da prestação e indique
 * se é ou não possível o empréstimo.
 */

int main()
{
  double salarioBruto;
  double valorPrestacao;

  printf("Digite o valor do salário bruto: ");
  scanf("%lf", &salarioBruto);

  printf("Digite o valor da prestação: ");
  scanf("%lf", &valorPrestacao);

  if (valorPrestacao < (salarioBruto * (30 / 100)))
  {
    printf("O empréstimo é possível\n");
  }
  else
  {
    printf("Infelizmente não é possível um empréstimo\n");
  }

  return 0;
}