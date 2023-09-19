#include <stdio.h>

/*
    7. Ler um número real e imprimir a terça parte dele
*/

int main()
{
    double numero;

    printf("Digite o número real (com ponto flutuante): ");
    scanf("%lf", &numero);

    printf("A terça parte de %.2lf é: %.2lf\n", numero, (numero / 3));

    return 0;
}