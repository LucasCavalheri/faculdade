#include <stdio.h>

/*
    16. Efetuar o cálculo da quantidade de litros de combustível gastos
    em uma viagem, sabendo-se que o carro faz 12km por litro.
    Deverão ser fornecidos o tempo gasto na viagem e a
    velocidade média.
        ▪ Distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒
        ▪ Litros = 𝑑𝑖𝑠𝑡â𝑛𝑐𝑖𝑎 ÷ 12
*/

int main()
{   
    double KM_POR_LITRO = 12;
    int tempoGasto;
    double velocidadeMedia;
    double distancia;
    double litrosGastos;

    printf("Digite o tempo gasto na viagem: ");
    scanf("%d", &tempoGasto);
    printf("Digite a velocidade média: ");
    scanf("%lf", &velocidadeMedia);

    distancia = tempoGasto * velocidadeMedia;
    litrosGastos = distancia / KM_POR_LITRO;

    printf("A quantidade de litros de combustível gastos foi de: %.1lfL\n", litrosGastos);
    
    return 0;
}