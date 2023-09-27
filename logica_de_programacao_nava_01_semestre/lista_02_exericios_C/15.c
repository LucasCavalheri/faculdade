#include <stdio.h>

/*
 * Ler três notas, calcular a média e se esta for maior ou igual a 7
 * imprimir aprovado ou reprovado.
 */

int main()
{
  float n1;
  float n2;
  float n3;
  float media;

  printf("Digite a primeira nota: ");
  scanf("%f", &n1);

  printf("Digite a segunda nota: ");
  scanf("%f", &n2);

  printf("Digite a terceira nota: ");
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;

  if (media >= 7)
  {
    printf("APROVADO\n");
  }
  else
  {
    printf("REPROVADO\n");
  }

  return 0;
}