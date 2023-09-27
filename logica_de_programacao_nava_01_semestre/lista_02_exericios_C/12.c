#include <stdio.h>

/*
 * Ler três números e guarda-los em três variáveis com os
 * nomes: maior, intermediário e menor.
 */

int main()
{
  int n1;
  int n2;
  int n3;
  int maior;
  int intermediario;
  int menor;
  int aux;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  if (n1 > n2)
  {
    aux = n1;
    n1 = n2;
    n2 = aux;
  }

  if (n2 > n3)
  {
    aux = n2;
    n2 = n3;
    n3 = aux;
  }

  if (n1 > n2)
  {
    aux = n1;
    n1 = n2;
    n2 = aux;
  }

  menor = n1;
  intermediario = n2;
  maior = n3;

  return 0;
}