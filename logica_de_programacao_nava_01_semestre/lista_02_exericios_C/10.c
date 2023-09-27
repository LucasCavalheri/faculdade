#include <stdio.h>

/*
 * Ler três números e imprimir o maior.
 */

int main()
{
  int n1;
  int n2;
  int n3;
  int maior;
  int menor;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  maior = n1;
  menor = n1;

  if (n2 > maior)
  {
    maior = n2;
  }
  else if (n2 < menor)
  {
    menor = n2;
  }

  if (n3 > maior)
  {
    maior = n3;
  }
  else if (n3 < menor)
  {
    menor = n3;
  }

  printf("O maior número é o: %d\n", maior);

  return 0;
}