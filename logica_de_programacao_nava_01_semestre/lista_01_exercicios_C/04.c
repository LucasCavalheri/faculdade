#include <stdio.h>

/*
    4. Faça um programa que leia dois inteiros e os imprime na tela.
*/

int main()
{
    int n1;
    int n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Os números digitados foram: %d e %d\n", n1, n2);

    return 0;
}