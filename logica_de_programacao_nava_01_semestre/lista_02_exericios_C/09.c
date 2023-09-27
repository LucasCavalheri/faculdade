#include <stdio.h>

/*
 * Ler dois números e imprimi-los em ordem decrescente.
 */

int main()
{
  int n1;
  int n2;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  if (n1 > n2)
  {
    printf("%d\n", n1);
    printf("%d\n", n2);
  }
  else
  {
    printf("%d\n", n2);
    printf("%d\n", n1);
  }

  return 0;
}