#include <stdio.h>

/*
 * Faça um programa que pergunte a idade da pessoa e mostre
 * na tela o valor do ingresso: R$15,00 se for maior de idade e
 * R$10,00 se for menor.
 */

int main()
{
	int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if (idade >= 18)
	{
		printf("Valor do ingresso: R$15,00\n");
	}
	else
	{
		printf("Valor do ingresso: R$10,00\n");
	}

	return 0;
}
