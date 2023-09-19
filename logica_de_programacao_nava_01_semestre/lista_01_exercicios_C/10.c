#include <stdio.h>

/*
    10. Sabendo que o perímetro de um círculo é calculado pela
    fórmula: 2 × 𝜋 × 𝑟𝑎𝑖𝑜, e a área pela fórmula 𝜋 × 𝑟𝑎𝑖𝑜²
    faça um programa que dado o raio de um círculo ele calcule o
    perímetro e a área deste.
*/

int main() {
    double PI = 3.14159;
    double raio;
    double perimetro;
    double area;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    perimetro = (2 * PI * raio);
    area = PI * (raio * raio);

    printf("Perimetro: %.2lf\n", perimetro);
    printf("Área: %.2lf\n", area);
    
    return 0;
}