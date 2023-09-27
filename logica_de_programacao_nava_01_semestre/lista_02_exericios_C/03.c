#include <stdio.h>

/**
 * Ler um número e imprimir se ele é ou não múltiplo de 3.
 */

int main()
{
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  if (n % 3 == 0)
  {
    printf("O número %d é múltiplo de 3\n", n);
  }
  else
  {
    printf("O número %d não é múltiplo de 3\n", n);
  }

  return 0;
}