#include <stdio.h>

/*
 * Ler três números e verificar se eles podem representar os
 * lados de um triângulo. A regra é que um lado deve ser menor
 * que a soma dos outros dois lados.
 */

int main()
{
  int n1;
  int n2;
  int n3;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
  {
    printf("Podem representar os lados de um triângulo\n");
  }
  else
  {
    printf("Não podem representar os lados de um triângulo\n");
  }

  return 0;
}