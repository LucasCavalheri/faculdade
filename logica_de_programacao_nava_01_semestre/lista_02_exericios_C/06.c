#include <stdio.h>

/*
 * Entrar com um número e imprimir se ele é igual a 20, menor ou
 * maior.
 */

int main()
{
  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  if (n == 20)
  {
    printf("%d é igual a 20\n", n);
  }
  else if (n < 20)
  {
    printf("%d é menor que 20\n", n);
  }
  else
  {
    printf("%d é maior a 20\n", n);
  }

  return 0;
}