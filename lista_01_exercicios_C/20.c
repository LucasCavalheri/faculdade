#include <stdio.h>

/*
    20. Um restaurante cobra de seus clientes 10% da conta como
    gorjeta para o garçom. Faça um programa que receba o valor
    dos gastos, calcule a gorjeta e mostre na tela o valor inicial, a
    gorjeta e o valor total da conta.
*/

int main()
{
    double gastos;
    double gorjeta;
    double valorTotal;

    printf("Digite o valor dos gastos: ");
    scanf("%lf", &gastos);

    gorjeta = 0.10 * gastos; // 10% dos gastos
    valorTotal = gastos + gorjeta;

    printf("Valor inicial da conta: R$ %.2lf\n", gastos);
    printf("Gorjeta (10%%): R$ %.2lf\n", gorjeta);
    printf("Valor total da conta: R$ %.2lf\n", valorTotal);

    return 0;
}