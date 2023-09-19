#include <stdio.h>

/*
 * Reescreva o programa do exercício anterior usando switch.
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

  switch (opcao)
  {
  case '+':
    total = n1 + n2;

    printf("O resultado da soma entre %d e %d é: %d\n", n1, n2, total);
    break;
  case '-':
    total = n1 - n2;

    printf("O resultado da subtração entre %d e %d é: %d\n", n1, n2, total);
    break;
  case '*':
    total = n1 * n2;

    printf("O resultado da multiplicação entre %d e %d é: %d\n", n1, n2, total);
    break;
  case '/':
    total = n1 / n2;

    printf("O resultado da divisão entre %d e %d é: %d\n", n1, n2, total);
    break;
  default:
    printf("Opção inválida!\n");
  }

  return 0;
}