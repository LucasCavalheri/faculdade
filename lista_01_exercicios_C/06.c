#include <stdio.h>

/*
    6. Ler dois números inteiros e imprimir a soma deles.
*/

int main()
{
    int n1;
    int n2;
    int soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma entre %d e %d é: %d\n", n1, n2, soma);

    return 0;
}