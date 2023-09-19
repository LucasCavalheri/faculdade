#include <stdio.h>

/*
    11. Sabendo que 100 quilowatts de energia custa um sétimo de
    um salário mínimo, faça um programa que receba o valor do
    salário mínimo e a quantidade de quilowatts gasta em uma
    residência e imprima:
        ▪ O valor em Reais do quilowatt
        ▪ O valor em Reais a ser pago
        ▪ O valor a ser pago com 10% de desconto
*/

int main()
{
    double salarioMinimo;
    double quantidadeWatts;
    double valorRealWatts;
    double valorRealPago;
    double valorRealDesconto;

    printf("Digite o salário mínimo: R$");
    scanf("%lf", &salarioMinimo);

    printf("Digite a quantidade de quilowatts gasta: ");
    scanf("%lf", &quantidadeWatts);

    valorRealWatts = salarioMinimo / (100 * 7);
    valorRealPago = quantidadeWatts * valorRealWatts;
    valorRealDesconto = valorRealPago - (0.10 * valorRealPago);

    printf("valor em Reais de Quilowatt: R$%.2lf\n", valorRealWatts);
    printf("valor em Reais a ser pago: R$%.2lf\n", valorRealPago);
    printf("valor a ser pago com 10%% de desconto: R$%.2lf\n", valorRealDesconto);

    return 0;
}