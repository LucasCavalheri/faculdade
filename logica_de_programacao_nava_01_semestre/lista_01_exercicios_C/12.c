#include <stdio.h>

/*
    12. Faça um programa que entre com o valor de um produto e uma
    porcentagem de desconto e imprima o valor com desconto.
*/

int main() {
    double valorProduto;
    double valorDesconto;
    double total;

    printf("Entre com o valor do produto: R$");
    scanf("%lf", &valorProduto);

    printf("Entre com o desconto: ");
    scanf("%lf", &valorDesconto);

    total = valorProduto - (valorProduto * (valorDesconto / 100));

    printf("O valor total do produto com desconto é de: R$%.2lf\n", total);
    
    return 0;
}