#include <stdio.h>

/*
 * Entrar com dois números e imprimir o maior
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
    printf("%d é o maior\n", n1);
  }
  else
  {
    printf("%d é o maior\n", n2);
  }

  return 0;
}