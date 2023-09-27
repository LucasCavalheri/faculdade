#include <stdio.h>

/*
 * Fazer um programa que leia dois números e imprima se eles
 * são iguais ou diferentes.
 */

int main()
{
  int n1;
  int n2;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  if (n1 == n2)
  {
    printf("%d e %d são iguais\n", n1, n2);
  }
  else
  {
    printf("%d e %d são diferentes\n", n1, n2);
  }

  return 0;
}