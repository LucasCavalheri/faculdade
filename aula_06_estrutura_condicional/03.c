#include <stdio.h>

/*
 * Faça um programa que seja uma calculadora. O usuário
 * digitará um inteiro, um char indicando a operação (+ - * /) e outro
 * inteiro. Depois disso calcular e imprimir o resultado.
 */

int main()
{
  char opcao;
  int n1;
  int n2;
  int total;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Agora digite a operação a ser realizada (+, -, *, /): ");
  scanf(" %c", &opcao);

  printf("Agora digite o segundo número: ");
  scanf("%d", &n2);

  if (opcao == '+')
  {
    total = n1 + n2;

    printf("O resultado da soma entre %d e %d é: %d\n", n1, n2, total);
  }
  else if (opcao == '-')
  {
    total = n1 - n2;

    printf("O resultado da subtração entre %d e %d é: %d\n", n1, n2, total);
  }
  else if (opcao == '*')
  {
    total = n1 * n2;

    printf("O resultado da multiplicação entre %d e %d é: %d\n", n1, n2, total);
  }
  else if (opcao == '/')
  {
    total = n1 / n2;

    printf("O resultado da divisão entre %d e %d é: %d\n", n1, n2, total);
  }
  else
  {
    printf("Opção inválida!\n");
  }

  return 0;
}