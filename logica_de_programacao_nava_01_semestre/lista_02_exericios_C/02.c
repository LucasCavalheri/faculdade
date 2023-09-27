#include <stdio.h>

/**
 * Ler um número e imprimir se ele é positivo, negativo ou nulo.
 */

int main()
{
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  if (n > 0)
  {
    printf("O número %d é positivo\n", n);
  }
  else if (n < 0)
  {
    printf("O número %d é negativo\n", n);
  }
  else
  {
    printf("O número %d é nulo\n", n);
  }

  return 0;
}