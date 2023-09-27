#include <stdio.h>

/*
 * Em um campeonato de arco e flecha tem-se equipes de três
 * atletas para cada estado. Crie um programa que leia a quantidade
 * de pontos obtidos por cada um deles e informe se a equipe foi
 * classificada de acordo com a seguinte especificação:
 * ▪ Ler os pontos de cada jogador da equipe
 * ▪ Mostrar os valores em ordem crescente
 * ▪ Se a soma dos pontos for maior que 100, imprimir a média dos pontos,
 * senão imprimir desclassificada
 */

int main()
{
  int pontos1;
  int pontos2;
  int pontos3;
  int soma;

  printf("Digite os pontos do jogador 1: ");
  scanf("%d", &pontos1);

  printf("Digite os pontos do jogador 2: ");
  scanf("%d", &pontos2);

  printf("Digite os pontos do jogador 3: ");
  scanf("%d", &pontos3);

  soma = pontos1 + pontos2 + pontos3;

  int menor, meio, maior;

  if (pontos1 < pontos2 && pontos1 < pontos3)
  {
    menor = pontos1;
    if (pontos2 < pontos3)
    {
      meio = pontos2;
      maior = pontos3;
    }
    else
    {
      meio = pontos3;
      maior = pontos2;
    }
  }
  else if (pontos2 < pontos1 && pontos2 < pontos3)
  {
    menor = pontos2;
    if (pontos1 < pontos3)
    {
      meio = pontos1;
      maior = pontos3;
    }
    else
    {
      meio = pontos3;
      maior = pontos1;
    }
  }
  else
  {
    menor = pontos3;
    if (pontos1 < pontos2)
    {
      meio = pontos1;
      maior = pontos2;
    }
    else
    {
      meio = pontos2;
      maior = pontos1;
    }
  }

  // Verificar se a equipe foi classificada
  if (soma > 100)
  {
    double media = (double)soma / 3;
    printf("Pontos em ordem crescente: %d, %d, %d\n", menor, meio, maior);
    printf("Equipe Classificada! Média dos pontos: %.2lf\n", media);
  }
  else
  {
    printf("Pontos em ordem crescente: %d, %d, %d\n", menor, meio, maior);
    printf("Equipe Desclassificada.\n");
  }

  return 0;
}