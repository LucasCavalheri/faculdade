#include <stdio.h>

/*
    19. Faça um programa que leia o numerador e o denominador de
    uma fração e calcule seu valor decimal.
*/

int main()
{
    int numerador;
    int denominador;
    double valorDecimal;

    printf("Digite o numerador da fração: ");
    scanf("%d", &numerador);

    printf("Digite o denominador da fração: ");
    scanf("%d", &denominador);

    valorDecimal = (double)numerador / denominador;

    printf("O valor decimal da fração é: %.2lf\n", valorDecimal);

    return 0;
}