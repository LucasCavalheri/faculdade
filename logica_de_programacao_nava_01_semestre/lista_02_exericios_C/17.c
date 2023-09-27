#include <stdio.h>
#include <math.h>

/*
 * Pesquise a função sqrt da biblioteca math.h. Faça um programa
 * que leia três variáveis (a, b,e c) e resolva uma equação do
 * segundo grau.
 */

int main()
{
  double a;
  double b;
  double c;
  double discriminante;
  double x1;
  double x2;

  printf("Digite o primeiro valor: ");
  scanf("%lf", &a);

  printf("Digite o segundo valor: ");
  scanf("%lf", &b);

  printf("Digite o terceiro valor: ");
  scanf("%lf", &c);

  discriminante = (b * b) - (4 * a * c);

  if (discriminante > 0)
  {
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);
    printf("Duas raízes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
  }
  else if (discriminante == 0)
  {
    x1 = -b / (2 * a);
    printf("Uma raiz real (raíz dupla): x1 = %.2lf\n", x1);
  }
  else
  {
    double parteReal = -b / (2 * a);
    double parteImaginaria = sqrt(-discriminante) / (2 * a);
    printf("Sem raízes reais. Raízes complexas: x1 = %.2lf + %.2lfi e x2 = %.2lf - %.2lfi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);
  }

  return 0;
}