#include <stdio.h>

/*
    9. Faça um programa que você entra com o saldo de uma
    aplicação e o sistema calcula e imprime o novo saldo para um
    rendimento de 3,5%.
*/

int main()
{
    double saldo;
    double novoSaldo;

    printf("Entre com o saldo: ");
    scanf("%lf", &saldo);

    novoSaldo = saldo + (saldo * 0.035);

    printf("O novo saldo é de: %.2lf\n", novoSaldo);

    return 0;
}