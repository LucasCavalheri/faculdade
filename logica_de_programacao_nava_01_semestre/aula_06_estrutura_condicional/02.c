#include <stdio.h>

/*
 * Reescreva o exercício anterior usando o operador condicional.
 */

int main()
{
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  idade >= 18 ? printf("Valor do ingresso: R$15,00\n") : printf("Valor do ingresso: R$10,00\n");

  return 0;
}