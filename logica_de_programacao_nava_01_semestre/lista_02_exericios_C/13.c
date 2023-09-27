#include <stdio.h>

/*
 * Ler 5 números e imprimir o maior e o menor.
 */

int main()
{
  int n1;
  int n2;
  int n3;
  int n4;
  int n5;
  int maior;
  int menor;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  printf("Digite o quarto número: ");
  scanf("%d", &n4);

  printf("Digite o quinto número: ");
  scanf("%d", &n5);

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

  if (n4 > maior)
  {
    maior = n4;
  }
  else if (n4 < menor)
  {
    menor = n4;
  }

  if (n5 > maior)
  {
    maior = n5;
  }
  else if (n5 < menor)
  {
    menor = n5;
  }

  printf("O maior número é o: %d\n", maior);
  printf("O menor número é o: %d\n", menor);

  return 0;
}