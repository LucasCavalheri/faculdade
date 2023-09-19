#include <stdio.h>

/*
    14. Faça um programa que efetue o cálculo de salário líquido de
    um professor. O programa deve pedir a quantidade de aulas
    dadas, o valor de hora aula e o percentual de desconto do INSS.
*/

int main()
{
    int quantidadeAulas;
    double salarioLiquido;
    double salarioBruto;
    double valorHoraAula;
    double percentualINSS;
    double descontoINSS;

    printf("Quantidade de aulas dadas: ");
    scanf("%d", &quantidadeAulas);

    printf("Valor de hora aula: ");
    scanf("%lf", &valorHoraAula);

    printf("Percentual Desconto INSS: ");
    scanf("%lf", &percentualINSS);

    salarioBruto = quantidadeAulas * valorHoraAula;
    descontoINSS = salarioBruto * (percentualINSS / 100);
    salarioLiquido = salarioBruto - descontoINSS;

    printf("O salário liquido é de: %.2lf\n", salarioLiquido);

    return 0;
}