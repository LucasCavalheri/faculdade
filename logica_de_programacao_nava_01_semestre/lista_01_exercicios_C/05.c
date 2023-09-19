#include <stdio.h>

/*
    5. Faça um programa que leia um número e imprima seu
    sucessor e antecessor.
*/

int main()
{
    int numero;

    printf("Digite um número na tela para saber seu sucessor e antecessor: ");
    scanf("%d", &numero);

    printf("O antecessor do número %d é: %d, e o sucessor é: %d\n", numero, (numero -1), (numero + 1));

    return 0;
}