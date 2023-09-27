#include <stdio.h>

/*
 * Ler um número e se ele for maior que 20, então imprimir a
 * metade do número.
 */

int main()
{
  int n;
  float metade;

  printf("Digite um número: ");
  scanf("%d", &n);

  if (n > 20)
  {
    metade = (float)n / 2;
    printf("A metade de %d, é: %.1f\n", n, metade);
  }

  return 0;
}