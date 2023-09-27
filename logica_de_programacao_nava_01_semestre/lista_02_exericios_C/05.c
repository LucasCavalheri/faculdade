#include <stdio.h>

/*
 * Ler um número com três dígitos e imprimir se o algarismo da
 * casa das centenas é par
 */

int main()
{
  int n;

  printf("Digite um número com três digitos (ex: 250): ");
  scanf("%d", &n);

  if (n >= 100 && n <= 999)
  {
    if ((n / 100) % 2 == 0)
    {
      printf("O algarismo da casa das centenas (%d) de %d é par!\n", (n / 100), n);
    }
    else
    {
      printf("O algarismo da casa das centenas (%d) de %d é ímpar!\n", (n / 100), n);
    }
  }
  else
  {
    printf("Por favor, digite um número com três dígitos.\n");
  }

  return 0;
}