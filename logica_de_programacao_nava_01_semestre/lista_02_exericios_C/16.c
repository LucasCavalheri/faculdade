#include <stdio.h>

/*
 * Acontecerá um campeonato de natação e devemos verificar em
 * qual categoria o atleta se encaixa. Ler a idade e decidir a
 * categoria conforme a regra:
 * ▪ Infantil A – 5 a 7 anos
 * ▪ Infantil B – 8 a 10 anos
 * ▪ Juvenil A – 11 a 13 anos
 * ▪ Juvenil B – 14 a 17 anos
 * ▪ Sênior – 18 anos ou mais
 */

int main()
{
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  switch (idade)
  {
  case 5:
  case 6:
  case 7:
    printf("Categoria: Infantil A\n");
    break;

  case 8:
  case 9:
  case 10:
    printf("Categoria: Infantil B\n");
    break;

  case 11:
  case 12:
  case 13:
    printf("Categoria: Juvenil A\n");
    break;

  case 14:
  case 15:
  case 16:
  case 17:
    printf("Categoria: Juvenil B\n");
    break;

  default:
    if (idade >= 18)
    {
      printf("Categoria: Sênior\n");
    }
    else
    {
      printf("Idade fora das categorias disponíveis.\n");
    }
  }

  return 0;
}