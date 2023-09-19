#include <stdio.h>

/*
    17. Efetuar o cálculo de uma prestação em atraso usando a
    seguinte fórmula: 𝑝𝑟𝑒𝑠𝑡𝑎çã𝑜 = 𝑣𝑎𝑙𝑜𝑟 + (valor * taxa / 100 * tempo)
*/

int main() {
    double valorPrincipal;
    double taxa;
    double tempo;
    double prestacao;

    printf("Digite o valor principal: R$");
    scanf("%lf", &valorPrincipal);

    printf("Digite a taxa de juros (em porcentagem): %%");
    scanf("%lf", &taxa);

    printf("Digite o período de tempo (em meses): ");
    scanf("%lf", &tempo);

    prestacao = valorPrincipal + (valorPrincipal * taxa * tempo / 100);

    printf("A prestação em atraso é de: %.2lf\n", prestacao);

    return 0;
}